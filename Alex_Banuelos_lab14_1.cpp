/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{

	int sideLength;



//prompts user to enter a side length
	cout << "Enter side length to make a square: "<<endl;
	cin >> sideLength;

//inputs validation
	while (sideLength < 4 )
	{
		cout<<"Error! Enter a number greater than 3"<<endl;
		cin >> sideLength;
	}


//outputs hollow square of astriks

//verticle
	for (int count = 0 ; count < sideLength ; count++)
	{

//horizontil
		for (int count2 = 0 ; count2 < sideLength ; count2++)
		{


			if (count == 0 || count == (sideLength - 1) )
			{
				cout <<"*";

			}

			else
			{


				if (count2 > 0 && count2 < (sideLength - 1) )
				{
					cout <<" ";

				}

				else
					cout <<"*";
			}









		}


		cout <<endl;
	}

	return 0;
}