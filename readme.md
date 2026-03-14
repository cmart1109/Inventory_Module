# Overview

As a software developer, I am continuously looking for ways to expand my understanding of programming languages and core programming concepts. One of my goals is to strengthen my knowledge of systems-level programming and object-oriented design, which led me to explore the C++ language.

This project is a simple Inventory Management System developed in C++. The program allows users to create, store, display, and delete items from an inventory. Each item contains attributes such as an ID, name, category, price, and whether the item is refundable. The application stores the inventory data in a CSV file so that the information can persist between program executions.

The purpose of this project was to practice fundamental C++ concepts such as classes, functions, loops, conditionals, and the use of data structures from the Standard Template Library (STL) In addition, I implemented file input and output operations to save and load inventory data. This helped me better understand how C++ handles object-oriented programming, memory management concepts, and structured program design.

Through building this software, I also gained hands-on experience organizing a small C++ project into multiple files using header files (`.h`) and implementation files (`.cpp`), which is a common practice in professional C++ development.

[Software Demo Video]()

# Development Environment

The software was developed using the following tools:

- Visual Studio Code as the primary code editor
- C++ Extension for VS Code for syntax highlighting and debugging support
- g++ compiler (GNU Compiler Collection) to compile the program
- Git and GitHub for version control and project management

The application was written in C++, using features from the C++ Standard Library, including:

- <vector> for managing collections of items dynamically
- <iostream> for console input and output
- <fstream> for reading and writing data to files
- <sstream> for parsing CSV data
- <iomanip> for formatting console output

These libraries allowed the program to manage structured data, display formatted information in the terminal, and store persistent data using CSV files.

# Useful Websites

These resources were helpful while developing the project and learning more about C++ syntax and concepts:

- [cplusplus.com](https://cplusplus.com/) – Reference for C++ syntax and standard library documentation
- [LearnCpp](https://www.learncpp.com/) – In-depth tutorials explaining C++ concepts clearly
- [Stack Overflow](https://stackoverflow.com/) – Helpful solutions to common programming problems
- [GeeksforGeeks](https://www.geeksforgeeks.org/) – Examples and explanations for C++ data structures and algorithms

# Future Work

There are several improvements and features that could be added to enhance this project in the future:

- Implement a search feature to find items by name or category
- Add sorting functionality (for example, sorting items by price or category)
- Improve error handling and input validation for user input
