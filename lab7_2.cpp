#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float sc)
{
	char a='A',b='B',c='C',d='D',f='F';
	if(sc>90)
		return a;
	else if(sc>75)
		return b;
	else if(sc>60)
		return c;
	else if(sc>45)
		return d;
	else
		return f;	
}

int main()
{
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}


	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}