#include<iostream>
using namespace std;

	struct Book {
		string bookname;
		string aruther;
		float price;
	};

int main(){
	
	Book B1;
	B1.bookname = "Kite Runner";
	B1.aruther = "Khaled Hosseini";
	B1.price = 269.99;
	
	cout<<"Book Name: " <<B1.bookname <<endl;
	cout<<"Book Aruther: " <<B1.aruther <<endl; 
	cout <<"Book Price: " <<B1.price;
	
}
