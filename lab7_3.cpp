#include<iostream>
#include<string>
using namespace std;

int main()
{
	int age,st;
	string sta[5]={"FRIEND","UNFRIEND","MARRIED","ONE-NIGHT-STAND","BEST FRIEND"};
	int hei,pro;
	cout << "Enter your age: ";
	cin >> age;
	if(age<=20)
	{
		cout << "Enter your height: ";
		cin >> hei;
		if(hei<160)
		{
			st=1;
		}
		else if(hei<175)
		{
			st=0;
		}
		else
		{
			cout << "Enter your property: ";
			cin >> pro;
			if(pro>69000000)
			 	st=2;
			else
				st=3;
		}
	}
	else if(age<30)
	{
		cout << "Enter your property: ";
		cin >> pro;
		if(pro>10000000)
			st=4;
		else
			st=1;
	}
	else
		st=1;
	cout << "Your status = " << sta[st];
}