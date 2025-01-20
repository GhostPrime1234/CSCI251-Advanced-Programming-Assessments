# Advanced Programming Labs (CSCI251)

## Table of Contents

- [Overview](#overview)
- [Directory Structure](#directory-structure)
- [Requirements](#requirements)
- [Compilation and Execution](#compilation-and-execution)
  - [Compilation](#compilation)
  - [Execution](#execution)
- [Assignment Descriptions](#Assignment-descriptions)
  - [Assignment 1: Crowdsourcing System](#Assignment-1-crowdsourcing-system)
  - [Assignment 2: Issues and Stances](#Assignment-2-issues-and-stances)
  - [Assignment 3: Hexadecimal Numbers Processing](#Assignment-3-hexadecimal-numbers-processing)
- [Author](#author)
- [License](#license)

## Overview

This repository contains solutions for the Advanced Programming (CSCI251) course labs. Each lab focuses on different aspects of C++ programming, including procedural programming, generic programming, and data processing. The repository provides hands-on examples to help students develop advanced problem-solving skills in C++.

## Directory Structure

```
Assignments/
├── Assignment1/
│   ├── driver.cpp
│   ├── header.h
│   ├── header.cpp
│   ├── Tasks.txt
│   ├── Workers.txt
│   └── Output.txt
├── Assignment2/
│   ├── Candidate.cpp
│   ├── Candidate.h
|   ├── ElectoralEntites.cpp
│   ├── ElectoralEntities.h
|   ├── EventManagement.cpp
│   ├── EventManagement.h
|   ├── Issue.cpp
│   ├── Issue.h
|   ├── Leader.cpp
│   ├── Leader.h
│   ├── People.cpp
│   ├── People.h
|   ├── PolitialParty.cpp
│   ├── PoliticalParty.h
|   ├── Stance.cpp
│   ├── Stance.h
|   ├── main.cpp
│   └── readme.md
├── Assignment3/
│   ├── main.cpp
│   ├── header.cpp
│   ├── header.h
│   └── readme.md
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

To compile and run the programs, navigate to the respective assignment directory and use the following commands:

### Compilation

```sh
g++ driver.cpp -o assignment1
g++ campaign_simulation.cpp -o assignment2
g++ main.cpp -o assignment3
```

### Execution

```sh
./assignment1
./assignment2
./assignment3
```

> **Note:** Ensure the build environment is configured for C++17.

## Assignment Descriptions

### Assignment 1: Crowdsourcing System

**Prerequisites:** Basic understanding of C++ syntax and programming constructs.

- **Description**: This assignment simulates a crowdsourcing system where tasks are assigned to workers based on their performance. The program processes tasks and workers from input files and outputs the results to an output file.
- **Files**:
  - `driver.cpp`: Contains the main function to execute the program.
  - `header.h`: Contains function prototypes.
  - `header.cpp`: Contains the implementation of the functions.
- **Input Files**:
  - `Tasks.txt`: Contains task details.
  - `Workers.txt`: Contains worker details.
- **Output File**:
  - `Output.txt`: Contains the results of task assignments.

### Assignment 2: Issues and Stances

**Prerequisites:** Understanding of political issues and candidate analysis.

- **Description**: This assignment involves analyzing political issues and candidate stances in the fictional region of Verdeloria. It includes the simulation of campaign events and their impact on candidate popularity and stances.
- **Files**:
  - `campaign_simulation.cpp`: Contains the main logic for simulating the campaign events.
  - `candidate.h`: Contains the class definition for candidates.
  - `division.h`: Contains the class definition for electoral divisions.

### Assignment 3: Hexadecimal Numbers Processing

**Prerequisites:** Familiarity with generic programming and class definitions.

- **Description**: This assignment involves processing hexadecimal numbers through generic programming. It includes defining classes for certificates and document handling, and computing statistics based on document similarity and character frequencies.
- **Files**:
  - `main.cpp`: Contains the main function to execute the program.
  - `Certificate.h`: Contains the class definition for the Certificate.
  - `DocumentHandler.h`: Contains the class definition for the DocumentHandler.

## Author

Michael McMillan

## License

This project is licensed under the MIT License.
