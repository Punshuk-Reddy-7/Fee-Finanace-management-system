# Fee-Finanace-management-system 
Description: A simple C program for managing student fee records using only arrays and strings (no structures or files). The system lets you add, view, and delete student fee records. Designed for beginners in C programming based on Apna College’s curriculum.

Features: Add a student record with ID, roll number, name, class/section, fee amount, and paid status.
Display all student fee records in a tabular format.
Delete a student record using roll number.

Header Files: #include <stdio.h>: For input/output operations like printf and scanf
              #include <string.h>: For working with character arrays (strings); although no advanced string functions are used

Variables: Integer arrays: ids[], rollNumbers[]
Float array: fees[]
Two-dimensional character arrays: names[][], classes[][], paidStatus[][]
Simple int variables: count, choice for tracking records and menu selection

Arrays: Use of one-dimensional arrays for numbers (int, float) to store data for multiple students​
Use of two-dimensional arrays for strings (names, class, paid status)—each student gets a row, each string has a column limit​

Loops: while(1) loop for menu-driven interaction (keeps the program running until exit)
for loop used for displaying and deleting records

Input/Output Functions: scanf for getting user input
%d for integers, %f for floats, %s and %[^\n] for strings with and without spaces
printf for displaying menus, results, and record tables

Basic Control Structures: if, else if, and else for menu choices and decision-making
