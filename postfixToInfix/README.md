# Postfix to Infix Converter

This C++ program converts a postfix expression (e.g., `ABC*+`) into an infix expression (e.g., `(A+(B*C))`). It utilizes a stack data structure to manage the operands and operators for correct conversion.

## Getting Started

These instructions will guide you on using the provided code and running it locally on your machine.

### Prerequisites

- C++ compiler (e.g., g++, clang++)
- Development environment (e.g., Visual Studio Code)

### Running the Program

1. **Compile the code:**

    Open the terminal in Visual Studio Code and navigate to the directory containing the code file (`main.cpp`). Compile the code using the following command:

    ```sh
    g++ -o postfix_to_infix main.cpp
    ```

2. **Run the program:**

    After successful compilation, run the executable by executing the following command:

    ```sh
    ./postfix_to_infix
    ```

3. **Input the postfix expression:**

    When prompted, enter a postfix expression consisting of alphabetic characters and operators.

4. **View the infix expression:**

    The program will output the corresponding infix expression.

## Example

```sh
Enter a POSTFIX expression:
ABC*+

POSTFIX EXPRESSION: ABC*+
INFIX EXPRESSION: ((A+B)*C)
