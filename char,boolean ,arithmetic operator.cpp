#include<iostream>
using namespace std;
int main()
{   char number;
     number='7';
     cout<<number<<endl;
     //we use bool for true and false
     
     bool a,b;
     b=false;
     a = true;
     cout<<a<<endl<<b<<endl;
     //0 mean false and 1 mean true
     
     
     //operator are used to perform operation on values and variable
     //we have 4 type of operator
     /* 
	 1 arithmetic operators
	 2 comparision operators
	 3 logical operators
	 4 assignment operators*/
	 
	 //arithmetic operator is used to perform common mathematical operations
	 //+(addition),-(subtraction),*(multiplication),/(division),%(modulus)
	 
	 //write a program to add two numbers
	 int num1 =56;
	 int num2 =135;
	 int num3 =849037;
	 int sum =num2+num3;
	 
	 cout<<"the addition of three number is "<<sum<<endl;
	 //write a program to find average of the five number
	 int numone= 55;
	 int numtwo= 56;
	 int numthree=3;
	 int numfour=5;
	 int numfive =5;
	 
	 float average;
	 average=(numone+numtwo+numthree+numfour+numfive)/5;
	 cout<<"the average is "<<average<<endl;
	 //modulus
	 int c=23;
	 int d=22;
	 int g=c%d;
	 cout<<g;
	 
     
	return 0;
}
