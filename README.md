1. (5 pts) Write a complete program in C++ that displays a hollow square of asterisks using nested loops. The program should prompt the user for the side length

Your program must also implement input validation (assume the user will at least enter a number). The program should continue outputting error messages when the user enters a number less than 3 for the side length until a valid number is entered and accepted. 

Sample output on invalid inputs:

Enter the side length of the hollow square (at least 3): 0
Invalid input. Please enter a number that is at least 3: 2
Invalid input. Please enter a number that is at least 3: 
Sample output on valid input:

Sample Input 1:

Enter the side length of the hollow square (at least 3): 3
Sample Output 1:

***
* *
***

2. (5 pts) Write a complete program in C++ that displays Floyd's Triangle using nested loops. A Floyd's Triangle is a right-angled triangle of consecutive numbers. The program should prompt the user for the number of rows. In output, each number should be separated by a space. 

Your program must also implement input validation (assume the user will at least enter a number). The program should continue outputting error messages when the user enters a number less than 1 for the number of rows until a valid number is entered and accepted. 

Sample output on invalid inputs:

Enter the number of rows (at least 1): 0
Invalid input. Please enter a number that is at least 1: -1
Invalid input. Please enter a number that is at least 1: 
Sample output on valid input.

Input:

Enter the number of rows (at least 1): 5
Output:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
