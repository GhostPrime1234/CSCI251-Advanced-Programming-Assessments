# Advanced Programming Labs (CSCI251)

## Table of Contents

- [Overview](#overview)
- [Directory Structure](#directory-structure)
- [Requirements](#requirements)
- [Compilation and Execution](#compilation-and-execution)
  - [Compilation](#compilation)
  - [Execution](#execution)
- [Lab Descriptions](#lab-descriptions)
  - [Lab 1: Basic C++ Programming](#lab-1-basic-c-programming)
  - [Lab 2: Object-Oriented Programming](#lab-2-object-oriented-programming)
  - [Lab 3: Inheritance and Polymorphism](#lab-3-inheritance-and-polymorphism)
  - [Lab 4: Templates and Generic Programming](#lab-4-templates-and-generic-programming)
  - [Lab 5: Advanced Topics](#lab-5-advanced-topics)
- [Author](#author)
- [License](#license)

## Overview

This repository contains solutions for the Advanced Programming (CSCI251) course labs. Each lab focuses on different aspects of C++ programming, including templates, function overloading, generic programming, and more. The repository provides hands-on examples to help students develop advanced problem-solving skills in C++.

## Directory Structure

```
Labs/
├── Lab1/
│   ├── Task1/
│   │   ├── T1-1.cpp
│   │   └── T1-2/
│   │       ├── main.cpp
│   │       ├── mylibrary.cpp
│   │       └── mylibrary.h
│   ├── Task3/
│   │   ├── header.cpp
│   │   ├── header.h
│   │   └── main.cpp
│   ├── T4.cpp
│   ├── T5.cpp
│   └── readme.pdf
├── Lab2/
│   ├── Task1/
│   │   ├── T1-1.cpp
│   │   ├── T1-2.cpp
│   │   └── T1-3.cpp
│   ├── T2.cpp
│   ├── T3.cpp
│   ├── T4.cpp
│   ├── T5.cpp
│   └── readme.pdf
├── Lab3/
│   ├── Task1/
│   │   ├── T1-1.cpp
│   │   └── T1-2.cpp
│   ├── T2.cpp
│   ├── Task4/
│   │   ├── T4-1.cpp
│   │   ├── T4-2.cpp
│   │   └── T4-2.h
│   ├── Task5/
│   │   ├── T5-1.cpp
│   │   ├── T5-2.cpp
│   │   └── T5-2.h
│   └── readme.pdf
├── Lab4/
│   ├── Task1/
│   │   ├── T1-1.cpp
│   │   └── T1-2.cpp
│   ├── Task2/
│   │   ├── answer.md
│   │   ├── T2-1.cpp
│   │   └── T2-2.cpp
│   ├── Task4/
│       ├── driver.cpp
│       ├── mylibrary.cpp
│       ├── mylibrary.h
│       └── T4.md
│   └── readme.pdf
├── Lab5/
│   ├── Task1/
│   │   ├── T1-1.cpp
│   │   └── T1-2.cpp
│   ├── Task3/
│   │   ├── T3-1.cpp
│   │   ├── T3-2.cpp
│   │   ├── T3-3A.cpp
│   │   ├── T3-3B.cpp
│   │   └── T3.md
│   └── readme.pdf
```

## Requirements

- Supported Operating Systems:
  - Windows, Linux, macOS
- C++ Compiler:
  - GCC 7.5+ with C++17 compliance
  - Alternative: Clang or MSVC with similar standards
- Development Tools:
  - IDE: Code::Blocks, Visual Studio, or any text editor with C++ support
  - Build System: Makefiles (if applicable)

## Compilation and Execution

To compile and run the programs, navigate to the respective task directory and use the following commands:

### Compilation

```sh
g++ T1-1.cpp -o T1-1
g++ T2-1.cpp -o T2-1
g++ T3-1.cpp -o T3-1
g++ T4-1.cpp -o T4-1
```

### Execution

```sh
./T1-1
./T2-1
./T3-1
./T4-1
```

> **Note:** Ensure the build environment is configured for C++17.

## Lab Descriptions

### Lab 1: Basic C++ Programming

**Prerequisites:** Basic understanding of C++ syntax and programming constructs.

- **Task 1 (20 points):**

  - Debug the file `Debug-A.cpp` to take two inputs and calculate their sum and product. (10 points)
  - Debug the code in `Debug-B.zip` as per the instructions in the main function. (10 points)

- **Task 2 (20 points):**

  - Write a program to read two integers `m` and `n` from the user and output `m` multiplied by values from 1 to `n`.
  - Ensure the inputs are valid (e.g., `n > 1`).

- **Expected Output:**
  - If `m=3` and `n=4`, output should be: `3 6 9 12`

### Lab 2: Object-Oriented Programming

**Prerequisites:** Knowledge of classes, objects, and encapsulation.

- **Task 1 (20 points):**

  - Debug the following files:
    - `Debug-A.cpp`: Print integers from highest to lowest (inclusive).
    - `Debug-B.cpp`: Compute log10(10), log(e), and the smaller of two integers.
    - `Debug-C.cpp`: Record book information and save it to `library.txt`.

- **Task 2 (20 points):**
  - Write `Read-words.cpp` to read words from `Words` and output them with line numbers to `output.txt`.
  - Ensure proper error handling for file operations.

### Lab 3: Inheritance and Polymorphism

**Prerequisites:** Understanding of inheritance, polymorphism, and abstract classes.

- **Task 1 (20 points):**

  - Debug `Debug-A.cpp` and `Debug-B.cpp` to ensure proper functionality.

- **Expected Output:**
  - Properly formatted employee details (Task 1).

### Lab 4: Templates and Generic Programming

**Prerequisites:** Familiarity with templates and basic C++ programming.

- **Task 1 Debugging (20 points):**

  - Fix `Debug-A.cpp` to ensure proper inheritance. The program should correctly process user inputs and produce the expected output.

- **Task 2 Relationships (20 points):**
  - Implement `Box.cpp` to represent a hierarchy of Boxes with constraints on nesting.

### Lab 5: Advanced Topics

**Prerequisites:** Strong understanding of C++ features like templates and STL.

- **Task 1: Function Template (20 points)**:

  1. Debug `Debug-A.cpp`. (10 points)
  2. Modify `findMax.cpp` to use pass by reference for the function template `findMax`. Update the `main()` function to call this template with appropriate data types. (10 points)

- **Task Two: More Templates (20 points)**:

  - Write `Symbolic.cpp` to implement a function template that displays a value surrounded by `n` symbols `x`, formatted as follows:
    ```
    *** 47 ***
    000 39.25 000
    aaaa Bob aaaa
    ```
  - Test the function with `char`, `int`, `double`, and `string` arguments in the `main()` function.

- **Task 3: Debug (20 points)**:

  1. Add a missing constructor to `Debug-B.cpp` for the class `CSL`. (10 points)
  2. Analyze and demonstrate the functionality of `fibT.cpp`, ensuring it works for at least one type other than `int` or `unsigned int`. (10 points)
  3. Compare and analyze the source files `One.cpp` and `Two.cpp`:
     - Describe their differences.
     - Compile, run, and explain their behavior. (0 points)

- **Task 4: Some Template Exercises (20 points)**:

  1. Write `doubled.cpp` to:
     - Implement a function template `doubled` that returns the addition of a value to itself.
     - Demonstrate its functionality for `int`, `float`, `char`, and `string` types, and explain the required functionality for compatibility. (0 points)
     - Extend the demonstration to work with a custom ADT (Abstract Data Type). (0 points)
  2. Implement a class template in `doubledClass.cpp`:
     - Create a template class `hold` for holding a single value of type `T`.
     - Integrate the `doubled` function into this class template.
     - Demonstrate its use with various data types. (20 points)

- **Task 5: More Generically... (20 points)**:
  - Analyze the provided function template `funcExp`:
    - Describe its functionality and interpret the output.
    - Submit your answers in a text file.

## Contribution Guidelines

We welcome contributions to this repository! Follow these steps:

1. Fork the repository.
2. Create a new branch for your changes.
3. Commit your changes with clear descriptions.
4. Submit a pull request for review.

## Author

Michael

## License

This project is licensed under the MIT License.
