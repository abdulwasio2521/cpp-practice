#include<iostream>
using namespace std;

	enum Genre { Melodrama, Historical, Romance, Drama };	
	struct movie {
		string name;
		string writer;
		string network;
		Genre genre;
		double rating; };
	
	string getGenreName(Genre g){
		if (g==Melodrama) { return "Melodrama";}
		else if (g==Historical) { return "Historical";}
		else if (g==Romance) { return "Romance";}
		else { return "Drama";}
	}
	
int main(){
	
	movie m1;
	m1.name = "My Dearest";
	m1.writer = "Woo Hong Soo";
	m1.network = "Netflix";
	m1.genre = Melodrama;
	m1.rating = 9.8;
	
	cout<<"Movie Name: " <<m1.name <<endl;
	cout<<"Writer Nmae: " <<m1.writer <<endl;
	cout<<"Network: " <<m1.network <<endl;
	cout<<"Genre: " <<getGenreName(m1.genre)<<endl;
	cout<<"Rating: " <<m1.rating <<endl;
	
}
