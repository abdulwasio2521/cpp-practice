#include<iostream>
using namespace std;

	struct employee {
		string name;
		long long number;
		int salary;
	};
int main(){
	
	string e1; 	long long n1; int s1;
	cout<<"Enter The Name Of First Employee: "; cin>>e1;
	cout<<"Enter The Number Of Employee: "; cin>>n1;
	cout<<"Enter The Salary Of Employee: "; cin>>s1; cout<<endl;
	
	string e2; long long n2; int s2;
	cout<<"Enter The Name Of Second Employee: "; cin>>e2;
	cout<<"Enter The Number Of Employee: "; cin>>n2;
	cout<<"Enter The Salary Of Employee: "; cin>>s2; cout<<endl <<endl;
	
	employee employee1;
	employee1.name = e1;
	employee1.number = n1;
	employee1.salary = s1;
	
	cout<<"First Employee Name: " <<employee1.name <<endl;
	cout<<"The Number Of Employee: " <<employee1.number <<endl;
	cout<<"The Salary Of Emloyee: " <<employee1.salary <<endl <<endl;
	
	employee employee2;
	employee2.name = e2;
	employee2.number = n2;
	employee2.salary = s2;
	
	cout<<"Second Employee Name: " <<employee2.name <<endl;
	cout<<"The Number Of Employee: " <<employee2.number <<endl;
	cout<<"The Salary Of Emloyee: " <<employee2.salary <<endl <<endl;
	
	return 0;
}
