#include<iostream>
using namespace std;
	
	struct Aruther {
		string aruther1;
		string aruther2;
	};
	
		struct Book {
		string bookname;
		Aruther bookAruthor;
		float price;
	};
	
int main(){
	
	Book B1;
	B1.bookname = "Kite Runner";
	B1.bookAruthor.aruther1 = "khaled hosseini";
	B1.price = 299.99;
	
	Book B2;
	B2.bookname = "The Red Sleeve";
	B2.bookAruthor.aruther2 = "Kang Mi-kang";
	B2.price = 300.99;
	
	cout<<"First book name is " <<B1.bookname <<endl;
	cout<<B1.bookname <<" Aruthor is " <<B1.bookAruthor.aruther1 <<endl;
	cout<<B1.bookname <<" Price is " <<B1.price <<endl <<endl;
	
	cout<<"Second book name is " <<B2.bookname <<endl;
	cout<<B2.bookname <<" Aruthor is " <<B2.bookAruthor.aruther2 <<endl;
	cout<<B2.bookname <<" Price is " <<B2.price <<endl;
}
