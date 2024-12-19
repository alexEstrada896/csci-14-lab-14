/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>

int main()
{
	int rows, num = 1;
	int count = 1;
//asks user to enter number of rows
	cout <<"Enter the number of rows (at least 1):"<<endl;
	cin >> rows;
//validates input
	while (rows < 1) {
		cout << "Invalid input. Please enter a number that is at least 1: ";
		cin >> rows;
	}

//displays triangle of numbers based on rows


	for (int i = 0 ; i < rows ; i++)
	{
		for ( int j = 0 ; j < num ; j++)
		{
			cout << count;
			count++;

			cout  <<" ";



		}
		num++;

		cout<<endl;




	}


	return 0;
}