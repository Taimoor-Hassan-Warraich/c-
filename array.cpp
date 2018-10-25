#include<iostream>
using namespace std;
#include<string>
int main()
{
	int number[100][100];
	int row, avg=0, colum, x = 0, counter = 0;
	int sum=0;
	cout << "enter number of row:";
	cin >> row;
	cout << "enter number of cilume:";
	cin >> colum;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (size_t j = 0; j < colum; j++)
		{
			cout << "enter a number:";
			cin >> number[i][j];

		}
	}
	
	for (int i = 0; i < row; i++)
	{
		for (size_t j =0 ; j < colum; j++)
		{
			if (number[0][0]< number[i][j])
			{
			  number[0][0]= number[i][j];
			}	
		} 
	} cout << "your entered large number is:";
	cout << number[0][0] << endl;
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (size_t j = 0; j < colum; j++)
		{
			if (number[0][0] > number[i][j])
			{
				number[0][0] = number[i][j];
			}
			counter++;
		}
	}   
	cout << "your entered small number is:"; 
	cout << number[0][0] << endl;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (size_t j = 0; j < colum; j++)
		{
		 sum+=number[i][j];
		}
	}   avg = sum / counter;
	cout << "your avg is:"; 
	cout << avg << endl;
	




		system("pause");
	}
