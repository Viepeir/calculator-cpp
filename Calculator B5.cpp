#include<iostream>
#include<stdio.h>
using namespace std;
int a,b;

void getdata()
{
	cout<<"Enter Two Number";
	cin>>a>>b;
	
}

void cal()
{
	char op;
	cout<<"+ - * ?/\n";
	cout<<"Enter Operator:";
	cin>>op;
	
	switch(op)
	{
		case '+':cout<<"Result="<<a+b;
			break;
		case '-':cout<<"Result="<<a-b;
			break;
		case '*':cout<<"Result="<<a*b;
			break;
		case '/':cout<<"Result="<<a/b;
			break;
		default:cout<<"Invalid Choice";
			break;
	}
}

int main()
{
	get data();
	cal();
	
	return 0;
}