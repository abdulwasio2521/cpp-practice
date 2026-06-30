//create a structure Student with: name, roll number, marks. Take input for 3 students and display them.
#include<iostream>
using namespace std;
	
	struct student {
		string name;
		int rollno;
		int marks;
	};
	
int main(){
	
	student s1;
	s1.name, s1.rollno, s1.marks;
	
	student s2;
	s2.name, s2.rollno, s2.marks;
	
	student s3;
	s3.name, s3.rollno, s3.marks;
	
	cout<<"Enter name of first student = ";
	cin>>s1.name;
	cout<<"Enter name of second student = ";
	cin>>s2.name;
	cout<<"Enter name of third student = ";
	cin>>s3.name;
	
	cout<<endl;
	
	cout<<"Enter Roll No of first student = ";
	cin>>s1.rollno;
	cout<<"Enter Roll No of Second student = ";
	cin>>s2.rollno;
	cout<<"Enter Roll No of Third student = ";
	cin>>s3.rollno;
	
	cout<<endl;
	
	cout<<"Enter Marks of first student = ";
	cin>>s1.marks;
	cout<<"Enter Marks of second student = ";
	cin>>s2.marks;
	cout<<"Enter Marks of third student = ";
	cin>>s3.marks;
	
	cout<<endl <<endl;
	
	cout<<"Name = " <<s1.name <<"  Roll No = " <<s1.rollno <<"  Marks = " <<s1.marks <<endl;
	cout<<"Name = " <<s2.name <<"  Roll No = " <<s2.rollno <<"  Marks = " <<s2.marks <<endl;
	cout<<"Name = " <<s3.name <<"  Roll No = " <<s3.rollno <<"  Marks = " <<s3.marks;
}
