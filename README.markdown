# 🎟️🌟 LottoDreamer: The Ultimate Number Challenge 💰
_A vibrant C++ console lottery simulator where you pick your lucky numbers and chase the jackpot!_

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform: Windows](https://img.shields.io/badge/Platform-Windows-lightgrey.svg)](https://www.microsoft.com/windows)

## 📝 Project Description

**LottoDreamer** is an exciting C++ console application that brings the thrill of a lottery draw right to your screen. Players carefully select their six unique lucky numbers from a pool of 1 to 49. The system then performs a random draw of six winning numbers. The game meticulously compares the player's chosen numbers against the drawn numbers, awarding prizes for matching three to six numbers. Featuring a colorful user interface, an eye-catching ASCII logo, and the option to play multiple rounds, LottoDreamer offers a fun and engaging way to test your luck and dream of hitting the jackpot!

## ✨ Key Features

*   🔢 **Pick Your Lucky Numbers**: Manually select 6 unique numbers from the range of 1 to 49.
*   🎱 **Randomized Lotto Draw**: The system performs a fair and random draw of 6 winning numbers.
*   🏆 **Prize Tiers for Matches**: Win exciting (simulated) prizes based on how many of your numbers match the drawn ones:
    *   **6 Matches**: 🌟 JACKPOT! 🌟
    *   **5 Matches**: 💰 Big Prize!
    *   **4 Matches**: 🎉 Medium Prize!
    *   **3 Matches**: 👍 Small Prize!
*   🎨 **Colorful Console UI & ASCII Logo**: Enjoy an enhanced visual experience with colored text output and a custom ASCII art logo.
*   🔄 **Play Multiple Rounds**: Got the lotto fever? Easily choose to play again after each draw.
*   ✔️ **Input Validation**: Ensures that players enter valid, unique numbers within the specified range (1-49).
*   📊 **Clear Results Display**: Both your chosen numbers and the drawn numbers are displayed (sorted for easy comparison), along with the number of matches and the corresponding prize.

## 🖼️ Screenshots

**Coming soon!**

_In the future, screenshots showcasing the number selection, the draw, prize announcements, and the ASCII logo will be added here._

## ⚙️ System Requirements

*   **Operating System**: Windows (due to the use of `windows.h` for console color manipulation).
*   **C++ Compiler**: Any modern C++ compiler that supports C++11 or newer (e.g., g++, MinGW, Clang, MSVC).
*   **No External Dependencies**: The game is self-contained and relies only on standard C++ libraries and `windows.h`.

## 🛠️ Installation and Running

1.  **Clone the Repository**:
    ```bash
    git clone <repository-url>
    ```
    (Replace `<repository-url>` with the actual URL of your repository)

2.  **Navigate to the Project Directory**:
    ```bash
    cd <repository-directory>
    ```
    (Replace `<repository-directory>` with the name of the cloned folder)

3.  **Compile the Program**:
    Open a terminal (like Command Prompt or PowerShell) in the project directory.
    **Example using g++ (MinGW):**
    ```bash
    g++ main.cpp -o lotto_simulator.exe -static-libgcc -static-libstdc++
    ```
    *(Assuming your main source code file is `main.cpp`)*

4.  **Run the Game**:
    After successful compilation, execute the generated program:
    ```bash
    ./lotto_simulator.exe
    ```
    or simply in CMD:
    ```bash
    lotto_simulator.exe
    ```

## ▶️ How to Play

1.  Launch the game as described in the "Installation and Running" section.
2.  You'll be greeted by the LottoDreamer welcome screen. Press **Enter** to start.
3.  Carefully enter your 6 unique lucky numbers, one by one, when prompted. Each number must be between 1 and 49. The game will validate your input.
4.  Once you've entered all your numbers, the system will perform the random draw.
5.  The game will then display:
    *   Your chosen numbers (sorted).
    *   The 6 randomly drawn winning numbers (sorted).
    *   The number of matches you achieved.
    *   The prize you've won based on the number of matches.
6.  After the results are shown, you will be asked if you want to play another round. Type `y` (yes) or `n` (no) and press **Enter**.

## 💡 Game Mechanics & Technical Details

*   **Number Selection & Validation**: Players input six numbers. The system ensures each number is within the 1-49 range and that all six chosen numbers are unique.
*   **Random Number Generation**: The 6 winning lottery numbers are generated using C++'s random number facilities, typically seeded with the current time (`srand(time(NULL))`) to ensure a different draw each time. The drawn numbers are also ensured to be unique.
*   **Matching Logic**: The player's numbers are compared against the drawn numbers to count how many matches are found.
*   **Prize Structure**: Specific prizes are awarded for 3, 4, 5, or 6 matches.
*   **Sorted Display**: Both the player's numbers and the drawn numbers are usually sorted before display to make it easier for the player to check for matches.
*   **Console Output**: Windows-specific functions from `windows.h` are used for setting text colors, making the interface more engaging.

## 🤝 Contributing

Contributions to **LottoDreamer** are warmly welcomed! If you have ideas for new features, visual enhancements, or code optimizations:

1.  Fork the repository.
2.  Create a new branch for your changes: `git checkout -b feature/your-lotto-idea`
3.  Make your modifications and commit them: `git commit -m "Feature: Implement your lotto idea"`
4.  Push your changes to your branch: `git push origin feature/your-lotto-idea`
5.  Open a Pull Request.

Please ensure your code aligns with the existing style and includes comments for clarity.

## ✍️ Author

**Adrian Lesniak**
_C++ Developer & Simulation Enthusiast_


## 📃 License

This project is licensed under the **MIT License**.
The full text of the license is available at: [https://opensource.org/licenses/MIT](https://opensource.org/licenses/MIT)

---
🤞 _May your lucky numbers bring you fortune! Play responsibly._
