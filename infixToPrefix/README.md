# Infix to Prefix Converter

This C++ program converts an infix expression (e.g., `A + B * C`) into a prefix expression (e.g., `+A*BC`). The program uses a stack data structure to manage the operators and ensure the correct order of operations.

## Getting Started

These instructions will help you understand how to use the code provided and run it on your local machine.

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- A development environment (e.g., Visual Studio Code)

### Running the Program

1. **Compile the code:**

    Open a terminal in Visual Studio Code and run the following command to compile the code:

    ```sh
    g++ -o InfixToPrefix InfixToPrefix.cpp
    ```

2. **Run the executable:**

    After compiling, run the executable with the following command:

    ```sh
    ./InfixToPrefix
    ```

3. **Input the infix expression:**

    The program will prompt you to enter an infix expression. Enter a valid infix expression (e.g., `A+B*C`).

4. **View the prefix expression:**

    The program will output the corresponding prefix expression.

## Example

```sh
Enter an Infix Expression:
A+B*C

INFIX EXPRESSION: A+B*C

PREFIX EXPRESSION: +A*BC
