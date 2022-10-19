# Balanced-Symbols-Checker-
A C program that uses a stack to check if an input string is made of balanced symbols.  Balanced symbols means that each 
opening symbol has a corresponding closing symbol and the pairs of parenthesis are properly nested. This was an assignment 
that I completed for Systems Programming (COP4338).


**Program Commands** 
____________________________

quit: ends the program.


check STR ←􏰀 : where STR represents any string that user wants to enter to check whether it is balanced or not. 
Please note that STR cannot contain a new line character.


pair o0,c0 o1,c1 o2,c2 . . . on,cn ←􏰀 : where each pair of symbols oi,ci represents an opening symbol/character 
(oi) and its corresponding closing symbol/character (ci). By default, the program only checks the balance of parentheses. 
But, for example, in order to check the balance of strings made of parentheses, brackets and curly brackets (braces), 
the user needs to enter the following command: pair (,) [,] {,} ←􏰀 . In this command, we assume that no duplicate symbols 
are entered by the user, each opening symbol and its corresponding symbol are separated by only a single comma, and any two 
adjacent pairs are separated by a single white space character. Also, the program needs to reject the usage of comma, new-line, 
tab, and white-space characters as an opening or closing symbol. Finally, you can assume that user does not enter more than
50 pairs in each pair command.



**Program Functions** 
____________________________

int main(): The main function which must be stored in balance_checker.c file.


int check(char str[]): The check function returns 1 if the input str contains a balanced string and returns 0 otherwise. 
Please note that this function works with the most- recently given list of pairs and ignores all other characters in the 
input string. This function must be stored in check.c file. Also, make sure to use a stack to check the balance of opening 
and closing symbols in this function.


void pair(char list[]): The pair function, which needs to be stored in pair.c file, gets the list of opening and closing symbols, 
the way entered by the user, and stores them in two external char arrays called opening_symobls and closing_symbols. These arrays 
need to be external so that they can be accessible by the check function stored in check.c file. Also, these arrays must be defined 
as oversize arrays of capacity equal to 51. To show their true size, you can place a NULL character after the last symbol they store. 
For example, if list is “(,) [,] {,}”, then the arrays look like this:


**GDB ScreenShots**
____________________________

Folder contains screenshots of main method execution flow using GNU Debugger(GDB). 


