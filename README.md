# 🏦 Simple ATM Simulator in C++

## 💡 Overview

This C++ program simulates a basic ATM interface, providing users with essential banking operations in a console-based environment. It's an excellent project for beginners to understand fundamental programming concepts like loops, switch statements, and function calls.

## 🚀 Features

### 1. Check Balance
Users can view their current account balance, displayed with two decimal places for precision.

### 2. Deposit Money
Allows users to add funds to their account. The program validates the input to ensure only positive amounts are accepted.

### 3. Withdraw Money
Enables users to withdraw funds, with checks to prevent overdrawing from the account.

### 4. User-Friendly Interface
The program presents a clear, easy-to-navigate menu system for selecting operations.

### 5. ASCII Art Exit Screen
Adds a touch of creativity with a visually appealing ASCII art display when exiting the program.

## 🛠️ Technical Implementation

### Main Components

- `main()`: The core function that runs the ATM interface loop.
- `showBalance(double balance)`: Displays the current balance.
- `deposit()`: Handles the deposit operation and input validation.
- `withdraw(double balance)`: Manages withdrawals with balance checks.
- `displayEndingScreen()`: Renders the ASCII art exit screen.

### Key C++ Concepts Utilized

- Input/Output operations using `iostream`
- Precise decimal output with `iomanip`
- Control structures: do-while loop and switch statement
- Function prototypes and definitions
- Basic error handling and input validation

## 🚀 How to Use

### Clone the Repository

```bash
git clone https://github.com/ry8k/bank-simulator-cpp
cd atm-simulator
```

### Compile the Program

```bash
g++ banke.cpp -o banke
```

### Run the Simulator

```bash
./banke
```

## 💻 Example Usage

1. Start the program
2. Choose from options 1-4:
   - 1: Check your balance
   - 2: Make a deposit
   - 3: Withdraw money
   - 4: Exit the program
3. Follow the prompts for each operation
4. Enjoy the ASCII art display upon exiting!

## 🎨 Visual Appeal

The program enhances user experience with:
- A clear, formatted menu interface
- Precise currency display using `setprecision`
- A charming ASCII art exit screen for a memorable finish

## 📝 Educational Value

This project is ideal for C++ beginners to practice:
- Basic I/O operations
- Function implementation
- Control flow with loops and conditionals
- Simple error handling and input validation

## 🔮 Future Enhancements

Potential areas for expansion include:
- Persistent data storage
- Multiple user accounts
- Transaction history logging
- Enhanced security features

Your contributions and suggestions for improvement are welcome!
