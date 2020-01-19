# Section 4: Basic Concepts

## Comments

* Documents a program
* Enhance readability
* Remind you/someone else what the program/particular line is doing
* Ignored by compiler
* Useful because
  * Programmer may return to program created long ago and may not remember purpose of particular function/line of code
  * Can save significant amount of time otherwise wasted on having to re-understand code

### Syntax

1. By using `/*`
   * Marks the beginning of the comment
   * Has to be terminated
   * Use `*/` to end
   * Multi-line comment
2. By using `//`
   * Single-lin  comment

### Style

```
/*
* Written by Jason Fedin
* Copyright 2017
*/
```
* Typically at beginning of program
* Describing who wrote the file and copyright

```
/**********************
* This is a very important comment *
**********************/
```
* Many asterisk to make comment stand out

```
printf("Hello"); // This line displays a quotation
```
* Tells you what the single line is doing

### Use of comments

* It is possible to insert too many comments such that readability is worse
* Need to intelligently use comments
* 💡 Good idea to have habit of inserting comment statements into program as it is being written
  * 🧠 Easier to document while logic is fresh in mind
  * 🐞 Benefit during debug phase
* Can point the way to the source of logic mistake
* Create self-documenting comments by using meaningful names (eg. name of variable is telling you what the program is doing)

## The Preprocessor

* Unqiue feature of C that is not found in other high-level programming languages
* Allows programs to be easier to develop, read, modify, port to different computer systems
* Part of compilation processes that recognises special statements
  * Anayses before analysis of C program takes places
  * Instruction to your compiler to do something before compiling source code
  * Can be anywhere in code
* Identified by `#` which must be the **first non-space character** on the line
* Processor can be used to
  * Create own constants and macros with `#define`
  * Build library files with `#include`
  * Make powerful programs with conditional `#ifdef`, `#endif`, `#else` and `#ifndef` statements

## The #include statement

* Similar to Java `import` statement
* A preprocessor directive
* Not strictly part of executable program but program won't work without it
* `#include <stdio.h>` - tells compiler to *include* contents of the file with the name `stdio.h`
  * Called header file - usually included at the head of program source file
  * `.h` extension

### Header Files
* Define information about some functions that are provided by file
* `stdio.h` is **standard C library header** and provides functionality for displaying output etc.
    * Need to include when `printf()` is used
    * Contains information the compiler needs to understand what `printf()` means, as well as *other functions that deal with input/output*
    * `stdio` - standard input/output
* You will be creating your own header files for use with your programs

### Syntax
* Case-sensitive, should write in lowercase
* Should use `#ifndef` and `#define` to protect against multiple inclusions of a header file
* Executable code goes into source code file, not header file
  
1. Use brackets - `#include <Jason.h>`
   * Tells preprocessor to look for file in one or more standard system directories
2. Use double quotes - `#include "Jason.h"`
   * Tells preprocessor to first look in current directory (user-defined header file)

Header files can include
* `#define` directives
* Structure declarations
* `typedef` statements
* Function prototypes
