//Using a Student structure, store the following info for 3 students: name and marks. Print the details of the student who scored the maximum marks.
#include<iostream>
using namespace std;
	
	struct student {
		string name;
		int marks;
	};
int main(){
	
	student s1;
	s1.name, s1.marks;
	student s2;
	s2.name, s2.marks;
	student s3;
	s3.name, s3.marks;
	
	cout<<"Enter The Name | Marks Of First Student" <<endl;
	cin>>s1.name >>s1.marks;
	cout<<"Enter The Name | Marks Of Second Student" <<endl;
	cin>>s2.name >>s2.marks;
	cout<<"Enter The Name | Marks Of Third Student" <<endl;
	cin>>s3.name >>s3.marks;
	
	if(s1.marks>s2.marks & s1.marks>s3.marks){
		cout<<"Name = " <<s1.name <<" | Roll No = " <<s1.marks;	
	}
	else if (s2.marks>s1.marks & s2.marks>s3.marks){
		cout<<"Name = " <<s2.name <<" | Roll No = "<<s2.marks;
	}
	else cout<<"Name = " <<s3.name <<" | Roll No = "<<s3.marks;
}
