#include<iostream>
using namespace std;
int main() {
	int num, sum=0, counter=0, digit,num2=0;
	cout << "Please enter a positive number=";
	cin >> num;
	num2 = num;
	while (num!=0)
	{
		digit = num % 10;
		num = num / 10;
		sum =(sum*10)+ digit;
		counter++;


	}cout << "Your number is ="<<sum<<endl;
	
	system("pause");
}
