# LearnCWithMe
A Gen-AI-Built Course for learning C with a security emphasis. Feel free to download for yourself!

### **Learning C (Weeks 1–12)**

### **Week 1: Introduction to C and Basic Syntax**

**10/19/24 due date** 

**Objective: Familiarize yourself with the structure of C programs and basic syntax.**

**Topics**:

1. **Setting Up the Development Environment**:
    - [x]  Install a C compiler (e.g., `gcc`, `clang`) and a text editor or IDE (e.g., Visual Studio Code, CLion).
    - [x]  Learn to compile and run a simple C program from the terminal/IDE.
2. **Basic Structure of a C Program**:
    - [x]  Understanding the structure: `#include`, `int main()`, return values, braces.
    - [x]  Writing your first "Hello, World!" program.
3. **Data Types and Variables**:
    - [x]  Primitive data types: `int`, `float`, `double`, `char`.
    - [x]  Declaring and initializing variables.
4. **Input and Output**:
    - [x]  Using `printf()` for output.
    - [x]  Using `scanf()` for input.
        
        [**Format Specifiers**](https://www.notion.so/Format-Specifiers-120cac0a457b80318319ebde626740c6?pvs=21)
        
5. **Comments and Coding Style**:
    - [x]  Writing single-line (`//`) and multi-line (`/* */`) comments.
    - [x]  Consistent code indentation and readability.

**Practice**:

- [x]  read_and_print.c: Write a basic program that reads a number from the user and prints it.
- [x]  add_my_numbers.c: Implement simple arithmetic operations using `+`, `*` ,`/`, `%`.

---

### **Week 2: Control Structures and Loops**

**10/26/24 due date**

**Objective: Understand how to control the flow of a program using conditionals and loops.**

**Topics**:

1. **Conditional Statements**:
    - `if`, `else if`, `else`.
    - Comparison operators (`==`, `!=`, `>`, `<`, `>=`, `<=`).
    - Logical operators (`&&`, `||`, `!`).
2. **Switch Statement**:
    - Using `switch` for multiple-choice conditions.
    - Using `break` to avoid fall-through.
3. **Loops**:
    - `for` loop.
    - `while` loop.
    - `do...while` loop.
4. **Break and Continue**:
    - Using `break` to exit loops early.
    - Using `continue` to skip the current iteration of a loop.

**Practice**:

- [x]  Fibonacci.c: Write a program to calculate the Fibonacci number for n
- [x]  DetermineLeapYear.c: write a program to determine if a given year is a leap year

![image.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/0ac45bab-13ab-4a80-870d-f6a7dda23af8/3e7a807b-2d5f-4d3e-9971-46f1291e5fac/image.png)

---

### **Week 3: Functions and Arrays**

**11/3/24 due date**

**Objective: Learn how to write and use functions, work with arrays, and pass them to functions.**

**Topics**:

1. **Functions**:
    - Defining and declaring functions.
    - Function parameters and return types.
    - Scope of variables (local vs global).
2. **Arrays**:
    - Declaring and initializing arrays.
    - Accessing elements of an array.
    - Multidimensional arrays (basic understanding).
3. **Passing Arrays to Functions**:
    - How arrays are passed to functions (by reference, not by value).
    - Writing functions that take arrays as arguments.
4. **String Basics**:
    - Strings as arrays of characters.
    - Simple string operations: reading a string with `scanf()`, printing with `printf()`, `strlen()` (from `<string.h>`).

**Practice**:

- [ ]  Create a program that reads 10 integers into an array, then prints them in reverse order.
- [ ]  Write a program that counts the number of vowels in a string input by the user.

**End-of-Week Milestone Tasks:**

- Write a program that takes user input (e.g., name and age) and prints a greeting.
- Create a number-guessing game where the user has to guess a randomly generated number, with feedback ("higher" or "lower").
- Write a function that sorts an array of integers and prints the sorted result

### **Week 4: Pointers and Memory Management (Part 1)**

**11/10/24 due date**

**Objective: Understand the basics of pointers and memory addresses, and how to manipulate them in C.**

**Topics**:

1. **Introduction to Pointers**:
    - [x]  What is a pointer? Pointer declaration and initialization.
    - [x]  Using the address-of operator (`&`) and dereference operator `*`
2. **Pointer Arithmetic**:
    - Understanding how pointer arithmetic works (incrementing, decrementing pointers).
    - Using pointers to traverse arrays.
3. **Pointers and Functions**:
    - Passing pointers to functions.
    - Using pointers to modify variables inside functions.
4. **Dynamic Memory Allocation (Introduction)**:
    - Introduction to dynamic memory using `malloc()` and `free()`.
    - Allocating and deallocating memory for basic data types.

**Practice**:

- [ ]  Write a program that swaps two integers using pointers.
- [ ]  Create a dynamic array of integers using `malloc()`, ask the user for the size of the array, and populate it with values.
- [ ]  Implement a program that demonstrates pointer arithmetic by printing the values of an array using both array indexing and pointer dereferencing.

---

### **Week 5: Pointers and Memory Management (Part 2)**

**11/17/24 due date**

**Objective: Gain a deeper understanding of memory allocation, multidimensional arrays, and working with strings.**

**Topics**:

1. **Dynamic Memory for Arrays**:
    - Allocating and deallocating memory for arrays using `malloc()` and `free()`.
    - Resizing arrays using `realloc()`.
2. **Multidimensional Arrays with Pointers**:
    - Understanding pointers to pointers and how they relate to multidimensional arrays.
    - Dynamically allocating memory for 2D arrays.
3. **Working with Strings and Character Arrays**:
    - C strings (as arrays of characters) and string manipulation.
    - Common string functions: `strcpy()`, `strcmp()`, `strlen()`.
4. **Common Memory Issues**:
    - Avoiding common memory management errors: memory leaks, dangling pointers, and double-free issues.
    - Introduction to `valgrind` for detecting memory leaks.

**Practice**:

- Write a program that dynamically allocates memory for a 2D array (matrix) and allows the user to input values, then prints the matrix.
- Implement a simple program that concatenates two strings using `strcat()` (or manually using a loop).
- Write a program that demonstrates the use of `realloc()` to dynamically resize an array of integers as new elements are added.

---

### **Week 6: Structs and Basic Data Structures**

**11/24/24 due date**

**Objective: Learn how to define and use structs, and understand how to manage complex data with them.**

**Topics**:

1. **Introduction to Structs**:
    - Defining and declaring structs.
    - Accessing struct members using the dot operator (`.`) and arrow operator (`>` for pointers).
2. **Arrays of Structs**:
    - Declaring arrays of structs and using them to manage collections of data.
    - Example use case: storing student records, employee information, etc.
3. **Nested Structs and Structs with Pointers**:
    - Creating more complex structs that contain other structs or pointers.
    - Using dynamic memory allocation for structs.
4. **Passing Structs to Functions**:
    - Passing structs by value vs by reference (using pointers).
    - Writing functions that take structs as arguments and return structs.

**Practice**:

- Write a program that defines a `struct` for a "student" (with fields for name, age, and grade), then create an array of students and allow the user to input and print their data.
- Implement a program that uses a `struct` to represent a 2D point (with `x` and `y` coordinates) and write functions to calculate the distance between two points.
- Write a program that dynamically allocates memory for a `struct` and its members, then prints and deallocates the memory.

---

**End-of-Week Milestone Tasks:**

- **Week 4**: Write a program that dynamically allocates memory for an array of `n` integers, where `n` is input by the user. Populate the array with values, print them, then free the memory.
- **Week 5**: Create a program that dynamically allocates memory for a 2D array (using pointers to pointers). Implement a function to transpose the matrix and print the result.
- **Week 6**: Build a simple contact management system using structs. The system should allow the user to add, edit, and display contacts (each contact can have a name, phone number, and email). Store multiple contacts in an array of dynamically allocated structs.

### **Week 7: File Input and Output (I/O)**

**12/01/24 due date**

**Objective**: Learn how to read from and write to files in C, and how to manage file I/O operations effectively.

**Topics**:

1. **Introduction to File I/O**:
    - Understanding file streams (`FILE` structure).
    - Opening and closing files with `fopen()` and `fclose()`.
2. **Reading from Files**:
    - Reading from files using `fscanf()` and `fgets()`.
    - Handling errors when reading files (checking for `NULL` and `EOF`).
3. **Writing to Files**:
    - Writing to files using `fprintf()` and `fputs()`.
    - Handling file write errors.
4. **File Modes**:
    - Understanding different file modes: `"r"`, `"w"`, `"a"`, `"r+"`, etc.
    - The consequences of overwriting or appending to files.

**Practice**:

- Write a program that reads a list of names and scores from a file, then prints them to the console.
- Implement a simple program that writes user input (e.g., name, age) to a file and reads the contents back to the console.
- Create a program that appends new entries to an existing file without overwriting its contents.

---

### **Week 8: Advanced Structs and Memory Management**

**12/08/24 due date**

**Objective**: Understand how to create more complex and nested structs, and further explore dynamic memory management with structs.

**Topics**:

1. **Nested Structs**:
    - Defining structs that contain other structs or pointers to structs.
    - Use cases for nested structs (e.g., struct for a student and a struct for address information).
2. **Dynamic Memory for Structs**:
    - Allocating memory for struct members dynamically.
    - Creating and deleting struct members on the heap using `malloc()` and `free()`.
3. **Linked Lists (Introduction)**:
    - Understanding the basics of linked lists and how they work.
    - Creating a simple singly linked list using structs and dynamic memory.
    - Traversing and printing a linked list.

**Practice**:

- Write a program that defines a `struct` for a book (with title, author, and price) and dynamically allocates memory for an array of books.
- Create a program that defines a `struct` for a person and dynamically allocates memory for a nested `struct` representing their address (street, city, zip code).
- Implement a basic linked list where nodes store integers. Write functions to add nodes, delete nodes, and print the list.

---

### **Week 9: Linked Lists and Dynamic Data Structures**

**12/15/24 due date**

**Objective**: Gain a deeper understanding of linked lists and explore how dynamic data structures work in C.

**Topics**:

1. **Linked Lists (Continued)**:
    - Adding nodes to the front and end of a singly linked list.
    - Deleting nodes from a singly linked list.
2. **Doubly Linked Lists**:
    - Introduction to doubly linked lists: struct definition and node management.
    - Functions for inserting and deleting nodes in doubly linked lists.
3. **Circular Linked Lists (Optional)**:
    - Understanding circular linked lists and their use cases.
4. **Memory Management in Dynamic Data Structures**:
    - Proper memory allocation and deallocation for linked lists.
    - Avoiding memory leaks and using tools like `valgrind` to debug memory issues.

**Practice**:

- Extend the singly linked list program to include functions that insert nodes at the beginning, end, and middle of the list.
- Write a program to create a doubly linked list where each node stores a student's information (name, age, grade). Implement functions to insert and delete students from the list.
- (Optional) Implement a circular linked list that stores a set of integers. Write functions to add and delete nodes in the list.

---

**End-of-Week Milestone Tasks:**

- **Week 7**: Write a program that manages a simple inventory system for a store, where each item has a name, quantity, and price. Store this information in a file and allow the user to add new items, view all items, and update item quantities.
- **Week 8**: Create a contact management system using linked lists. Each contact should have a name, phone number, and email. Implement functions to add, delete, and search contacts, and dynamically allocate memory for each contact.
- **Week 9**: Build a doubly linked list to manage a playlist of songs. Each node should store the song title, artist, and duration. Implement functions to add songs, delete songs, and traverse the list both forward and backward.

### **Week 10: Function Pointers and Advanced Function Concepts**

**12/22/24 due date**

### **Objective**: Learn how to work with function pointers and apply them in C programs for more flexible and modular designs.

**Topics**:

1. **Function Pointers**:
    - Introduction to function pointers: declaration and syntax.
    - Assigning functions to pointers and calling them via pointers.
2. **Passing Function Pointers to Functions**:
    - Using function pointers as function parameters to create more flexible code.
    - Example use case: implementing a custom comparator function for sorting.
3. **Callback Functions**:
    - Understanding how callback functions work using function pointers.
    - Practical examples: event handling or task scheduling.
4. **Array of Function Pointers**:
    - Creating arrays of function pointers.
    - Example use case: a simple command interpreter that maps commands to function pointers.

**Practice**:

- Write a program that defines a function pointer and uses it to call different arithmetic operations (addition, subtraction, etc.) on two numbers.
- Implement a simple sorting program (e.g., bubble sort) that accepts a function pointer as a comparator, allowing you to sort in ascending or descending order.
- Create a basic command-line menu where each option corresponds to a function pointer in an array of function pointers.

---

### **Week 11: Bitwise Operations**

**12/29/24 due date**

### **Objective**: Learn how to manipulate individual bits using bitwise operators and apply these skills in practical scenarios like low-level programming.

**Topics**:

1. **Introduction to Bitwise Operators**:
    - Understanding basic bitwise operators: AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), left shift (`<<`), and right shift (`>>`).
    - Using bitwise operators to manipulate bits of integers.
2. **Bitmasking**:
    - Using bitmasks to isolate, set, clear, and toggle specific bits.
    - Example use case: turning individual flags on or off in a configuration.
3. **Bitwise Operations in Practice**:
    - Checking whether a number is even or odd using bitwise operations.
    - Swapping two numbers without using a temporary variable (using XOR).
4. **Bitwise Operations in Data Compression and Cryptography**:
    - High-level overview of how bitwise operations are used in data compression, cryptography, and checksum calculations.

**Practice**:

- Write a program that uses bitwise operators to extract and manipulate individual bits of an integer (e.g., toggle the 3rd bit).
- Implement a program that uses bitwise operations to set, clear, and toggle specific flags in a bitmask.
- Create a function that swaps two numbers using the XOR bitwise operation.

---

### **Week 12: Trees (Binary Trees)**

**1/05/24 due date**

### **Objective**: Understand the basic concepts of binary trees, and implement various operations on binary search trees (BST).

**Topics**:

1. **Introduction to Binary Trees**:
    - What is a binary tree? Understanding nodes, left and right children.
    - Understanding the difference between a binary tree and a binary search tree (BST).
2. **Basic Operations on Binary Search Trees (BST)**:
    - Insertion: adding a node to a BST.
    - Searching: finding a node in a BST.
    - Deletion: removing a node from a BST.
3. **Tree Traversals**:
    - Depth-first traversals: in-order, pre-order, and post-order traversal.
    - Breadth-first traversal (level-order traversal).
4. **Recursive and Iterative Implementations**:
    - Implementing tree operations using recursion.
    - Understanding how to traverse trees iteratively using stacks.

**Practice**:

- Write a program to implement a binary search tree. Include functions for insertion, searching, and deletion.
- Implement functions to perform in-order, pre-order, and post-order traversals of a binary search tree.
- Create a function to find the minimum and maximum values in a BST, then write another function to find the height of the tree.

---

### **End-of-Week Milestone Tasks**:

- **Week 10**: Write a program that uses function pointers to implement a simple calculator that can add, subtract, multiply, or divide based on the user’s choice.
- **Week 11**: Build a program that uses bitwise operators to pack and unpack several small integer values (e.g., 4-bit values) into a single larger integer. Then, write a function to extract specific values using bitmasks.
- **Week 12**: Develop a binary search tree that stores student records (name, ID, and grade). Implement functions to add new students, search for a student by ID, and display the tree using in-order traversal.

### **Capstone Project Goals (Weeks 13–24)**

Now that you've developed a foundation in C, it's time to build a capstone project that showcases your skills and applies what you've learned. Here’s how to structure it:

### 5. **Define Your Project (Weeks 13–14)**

- **Goal**: Choose a project that interests you and will be a good test of your C skills. Given your experience, consider something more systems-focused, like a simple command-line application or a tool that interfaces with hardware (if you're interested in embedded systems).

### **Project Full Steam Ahead (Weeks 15–21)**

### Project Overview: Secure User Management System

This project will implement a command-line application that allows for secure user registration, login, and management of user accounts. The system will store user credentials securely using hashing and implement basic access controls. It will also utilize binary search trees for efficient user retrieval and management.

### Project Features:

1. **User Registration**: Users can create accounts with a username and password.
2. **Secure Password Storage**: User passwords will be hashed before being stored in a file to ensure security.
3. **User Login**: Users can log in with their credentials, with proper verification of hashed passwords.
4. **User Management**: Admin users can manage accounts (add, delete, view).
5. **Binary Search Tree for User Data**: Utilize a binary search tree to store and efficiently retrieve user data.
6. **Access Control**: Differentiate between normal users and admin users, restricting admin functionalities to authorized users only.
7. **File I/O for Persistent Storage**: Store user data securely in files.

### Project Breakdown

### 1. **Project Structure**

- **Main Program**: `main.c`
- **User Management Functions**: `user_management.c` / `user_management.h`
- **Hashing Functions**: `hashing.c` / `hashing.h`
- **Binary Search Tree Implementation**: `bst.c` / `bst.h`
- **File I/O Functions**: `file_io.c` / `file_io.h`

### **Week 15-16: Setup and User Registration**

- **Objective**: Implement the user registration functionality.
- **Tasks**:
    - Create a `User` struct to hold username, hashed password, and user type (normal/admin).
    - Implement a function to register a user, including:
        - Input validation (e.g., check for empty fields, username uniqueness).
        - Hash the password using a secure hashing function (e.g., SHA-256).
        - Store user information in a binary search tree.

### **Week 17: Secure Password Storage**

- **Objective**: Implement secure password hashing and storage.
- **Tasks**:
    - Write functions to hash passwords using a chosen hashing algorithm.
    - Implement file I/O functions to read and write user data to a file.
    - Test user registration by verifying that user data persists correctly in the file.

### **Week 18: User Login and Verification**

- **Objective**: Implement user login functionality.
- **Tasks**:
    - Create a login function that prompts for username and password.
    - Retrieve the stored user data using binary search tree traversal.
    - Verify the hashed password against the stored hash.

### **Week 19: User Management and Access Control**

- **Objective**: Implement user management features for admin users.
- **Tasks**:
    - Implement functions for admins to view, delete, and modify user accounts.
    - Create an access control mechanism to differentiate between normal users and admins.
    - Ensure that normal users cannot access admin functionalities.

### **Week 20: Testing and Debugging**

- **Objective**: Conduct thorough testing and debugging.
- **Tasks**:
    - Write test cases for all functionalities (registration, login, user management).
    - Use tools like `valgrind` to check for memory leaks and errors.
    - Debug any issues that arise during testing.

### **Week 21: Documentation and Final Touches**

- **Objective**: Document the project and finalize the implementation.
- **Tasks**:
    - Write comments and documentation for each function and module.
    - Create a README file with instructions on how to build and run the project.
    - Optionally, implement additional features such as password reset or user activity logging.

### **(Weeks 22–24) Test, Debug, and Polish and add potential extra features**

- **Goal**: Thoroughly test your project, fix bugs, and polish the code.
- **Use tools**: Use tools like `valgrind` to check for memory leaks and inefficiencies.
- **Output**: The final version of your capstone project, including documentation (code comments, a README, etc.) and possibly a brief report explaining how it works and what you learned.
- **Extra feature:** Implement user activity logging for auditing purposes.

[programming languages distinctions](https://www.notion.so/programming-languages-distinctions-11ecac0a457b803bb8a7ed1bdf62b9ca?pvs=21)

[Notes](https://www.notion.so/Notes-127cac0a457b805a88a4ca6f7bb1cf32?pvs=21)
