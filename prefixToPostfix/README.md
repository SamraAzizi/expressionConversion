# Prefix to Postfix Converter

This C++ program converts a prefix expression (e.g., `*+ABC`) into a postfix expression (e.g., `AB+C*`). It utilizes a stack data structure to manage the operands and operators for correct conversion.

## Getting Started

These instructions will guide you on using the provided code and running it locally on your machine.

### Prerequisites

- C++ compiler (e.g., g++, clang++)
- Development environment (e.g., Visual Studio Code)

### Running the Program

1. **Compile the code:**

    Open the terminal in Visual Studio Code and navigate to the directory containing the code file (`main.cpp`). Compile the code using the following command:

    ```sh
    g++ -o prefix_to_postfix main.cpp
    ```

2. **Run the program:**

    After successful compilation, run the executable by executing the following command:

    ```sh
    ./prefix_to_postfix
    ```

3. **Input the prefix expression:**

    When prompted, enter a prefix expression consisting of alphabetic characters and operators.

4. **View the postfix expression:**

    The program will output the corresponding postfix expression.

## Example

```sh
Enter a PREFIX expression:
*+ABC

PREFIX EXPRESSION: *+ABC
POSTFIX EXPRESSION: AB+C*
