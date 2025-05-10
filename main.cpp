#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void displayLogo() {
    setColor(14); // Yellow
    cout << R"(
    /$$$$$$$  /$$$$$$  /$$$$$$         /$$       /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$$$$$$$ /$$$$$$$  /$$     /$$
    | $$__  $$|_  $$_/ /$$__  $$       | $$      /$$__  $$|__  $$__/|__  $$__/| $$_____/| $$__  $$|  $$   /$$/
    | $$  \ $$  | $$  | $$  \__/       | $$     | $$  \ $$   | $$      | $$   | $$      | $$  \ $$ \  $$ /$$/
    | $$$$$$$   | $$  | $$ /$$$$       | $$     | $$  | $$   | $$      | $$   | $$$$$   | $$$$$$$/  \  $$$$/
    | $$__  $$  | $$  | $$|_  $$       | $$     | $$  | $$   | $$      | $$   | $$__/   | $$__  $$   \  $$/
    | $$  \ $$  | $$  | $$  \ $$       | $$     | $$  | $$   | $$      | $$   | $$      | $$  \ $$    | $$
    | $$$$$$$/ /$$$$$$|  $$$$$$/       | $$$$$$$|  $$$$$$/   | $$      | $$   | $$$$$$$$| $$  | $$    | $$
    |_______/ |______/ \______/        |________/\______/    |__/      |__/   |________/|__/  |__/    |__/
    )" << endl;
    setColor(7); // Reset to default
}

void displayRules() {
    setColor(11); // Light cyan
    cout << "\n=== GAME RULES ===\n";
    cout << "1. Choose 6 different numbers between 1 and 49\n";
    cout << "2. The system will draw 6 random numbers\n";
    cout << "3. Match numbers to win prizes:\n";
    cout << "   - 3 matches: Small Prize\n";
    cout << "   - 4 matches: Medium Prize\n";
    cout << "   - 5 matches: Big Prize\n";
    cout << "   - 6 matches: JACKPOT!\n\n";
    setColor(7);
}

vector<int> getPlayerNumbers() {
    vector<int> numbers;
    int num;

    cout << "Enter your 6 numbers (1-49):\n";
    while (numbers.size() < 6) {
        cout << "Number " << numbers.size() + 1 << ": ";
        while (!(cin >> num) || num < 1 || num > 49 ||
               find(numbers.begin(), numbers.end(), num) != numbers.end()) {
            if (!cin) {
                cin.clear();
                cin.ignore(10000, '\n');
            }
            setColor(12);
            cout << "Invalid input! Please enter a number between 1 and 49 that hasn't been chosen: ";
            setColor(7);
        }
        numbers.push_back(num);
    }
    return numbers;
}

vector<int> drawNumbers() {
    vector<int> drawn;
    while (drawn.size() < 6) {
        int num = rand() % 49 + 1;
        if (find(drawn.begin(), drawn.end(), num) == drawn.end()) {
            drawn.push_back(num);
        }
    }
    sort(drawn.begin(), drawn.end());
    return drawn;
}

void displayNumbers(const vector<int>& numbers, string label) {
    cout << label << ": ";
    for (int num : numbers) {
        setColor(14);
        cout << setw(2) << num << " ";
        setColor(7);
    }
    cout << endl;
}

int calculateMatches(const vector<int>& player, const vector<int>& drawn) {
    int matches = 0;
    for (int num : player) {
        if (find(drawn.begin(), drawn.end(), num) != drawn.end()) {
            matches++;
        }
    }
    return matches;
}

void displayResult(int matches) {
    cout << "\nYou matched " << matches << " numbers!\n";
    setColor(14);
    switch (matches) {
        case 6: cout << "CONGRATULATIONS! YOU WON THE JACKPOT!!! \n"; break;
        case 5: cout << "Amazing! You won the Big Prize! \n"; break;
        case 4: cout << "Great! You won the Medium Prize! \n"; break;
        case 3: cout << "Nice! You won the Small Prize! \n"; break;
        default: cout << "Sorry, no prize this time. Try again! \n";
    }
    setColor(7);
}

int main() {
    char playAgain;
    do {
        system("cls");
        displayLogo();
        displayRules();

        cout << "\nPress Enter to start...";
        cin.ignore(10000, '\n');

        vector<int> playerNumbers = getPlayerNumbers();
        sort(playerNumbers.begin(), playerNumbers.end());

        cout << "\nDrawing numbers";
        for (int i = 0; i < 3; i++) {
            Sleep(1000);
            cout << ".";
        }
        cout << "\n\n";

        srand(time(NULL));
        vector<int> drawnNumbers = drawNumbers();

        displayNumbers(playerNumbers, "Your numbers ");
        Sleep(1000);
        displayNumbers(drawnNumbers, "Drawn numbers");

        int matches = calculateMatches(playerNumbers, drawnNumbers);
        displayResult(matches);

        cout << "\nWould you like to play again? (y/n): ";
        cin >> playAgain;
        cin.ignore(10000, '\n');
    } while (tolower(playAgain) == 'y');

    cout << "\nThank you for playing! Goodbye!\n";
    return 0;
}
