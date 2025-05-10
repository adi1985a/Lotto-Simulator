# Lotto Simulator

## Description
A C++ console application simulating a lottery game. Players select 6 numbers (1-49), and the system randomly draws 6 numbers. Matches (3-6) yield prizes, displayed with a colorful UI and ASCII logo. Supports multiple rounds. Created by Adrian Lesniak.

## Features
- Choose 6 unique numbers (1-49)
- Random number drawing
- Calculate and display matches (3-6 for prizes)
- Colorful console interface with ASCII logo
- Option to play multiple rounds
- Input validation for numbers

## Requirements
- C++ compiler (e.g., g++)
- Windows OS (uses `windows.h`)

## Installation
1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```
2. Compile the program:
   ```bash
   g++ main.cpp -o lotto_simulator
   ```

## Usage
1. Run the program:
   ```bash
   ./lotto_simulator
   ```
2. Press Enter to start.
3. Enter 6 unique numbers between 1 and 49.
4. View drawn numbers and match results:
   - 6 matches: Jackpot
   - 5 matches: Big Prize
   - 4 matches: Medium Prize
   - 3 matches: Small Prize
5. Choose to play again (y/n).

## Notes
- Uses Windows-specific console functions for color output.
- Numbers are sorted for display.
- Random number generation is seeded with the current time.
- No external dependencies or header files required.

## Author
Adrian Lesniak

## License
MIT License