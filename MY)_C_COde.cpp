#include <iostream>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
using namespace std;

#include <iomanip>
using std::setw;

int main ()
{
cout<<"WELCOME TO MY SYSTEM"<<endl;
	cout<<"THINK A NUMBER BETWEEN 1 TO 31"<<endl;
int numbers[5][16]={
		{1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31},
		{2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31},
		{4,5,6,7,12,13,14,15,20,21,22,23,26,29,30,31},
		{8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31},
		{16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31}};
cout<<endl;
int sum,num;
int aa;
for(int y=0;y<=4;y++){
for(int x=0;x<=15;x++)
{
	int sum;
	char guess;
	cout<<left<<setw(6)<<numbers[y][x];
	if(x==3||x==7||x==11)
	{
		cout<<endl;
		cout<<endl;
}
}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"CAN YOU SEE YOUR NUMBER    IF YES PRESS 1 OTHERWISE 0"<<endl;
cin>>num;
cout<<endl;
cout<<endl;
if(num==1)
{
	sum+=numbers[y][0];}
cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<"THE NUMBER YOU THOUGHT WAS  ------------   "<<sum<<"   ----------"<<endl;
cout<<"          AKSHAYB3129@GMAIL.COM";
Sleep(5000);
}

