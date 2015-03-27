/*Program: Making use of Author and Book Class
Author: Ruby Shrestha
Date: 23rd March 2015*/


#include <iostream>
#include <string>

#include "Novel.h"
#include "TextBook.h"

void getAuthorDetails(string &authorName, string &authorEmail, char &authorGender);
void getBookDetails(string &bookName, string &publication, float &bookPrice, int &bookQty, char &novelOrTB);
void getNovelDetails(string &category, string &bookLvl, float &avgRating, bool &isFiction);
void getTextBookDetails(string &category, string &bookLvl, int &bkEdition);
using namespace std;

int main(){
	
	//Declaration of variables
	string authorName, authorEmail, bookName, category, novelAgeGroup, bookLvl, publication;
	char authorGender, novelOrTB;
	float bookPrice;
	int bookQty, bkEdition;
	float avgRating;
	bool isFiction;
	
	cout << "Is the book novel or textbook? Write N for Novel and T for TextBook: ";
	cin >> novelOrTB;
	
	if (toupper(novelOrTB)!='N' && toupper(novelOrTB)!='T'){
		cout << "Invalid";
		exit(0);
	}
	else
	{
		cout << endl;
		fflush(stdin);
		getAuthorDetails(authorName, authorEmail, authorGender);
		Author a1(authorName, authorEmail, authorGender);
		
		getBookDetails(bookName, publication, bookPrice, bookQty, novelOrTB);	
		
		if (toupper(novelOrTB)=='N'){
			
				getNovelDetails(category, bookLvl, avgRating, isFiction);
				Novel n1(bookName, a1, bookPrice, bookQty, publication, category, bookLvl, isFiction, avgRating);
				cout << n1.toString();	
				cout <<endl<< "The total worth of the book " << bookName << " is " << n1.getWorth();	
		}
		else {
			
				getTextBookDetails(category, bookLvl, bkEdition);			
				TextBook t1(bookName, a1, bookPrice, bookQty, publication, category, bookLvl, bkEdition);
				cout << t1.toString();
		}
		
	}
	
	
}

void getAuthorDetails(string &authorName, string &authorEmail, char &authorGender){
	cout << "Enter Author's Name: ";
	getline(cin, authorName);
	cout << "Enter Author's Email: ";
	cin  >> authorEmail;
	cout << "Enter Author's Gender: ";
	cin  >> authorGender;
}

void getBookDetails(string &bookName, string &publication, float &bookPrice, int &bookQty, char &novelOrTB){
	fflush(stdin);
	cout << "Enter Book's Name: ";
	getline(cin, bookName);	
	cout << "Enter publication: ";
	cin >> publication;
	cout << "Enter Book's Price: ";
	cin >> bookPrice;
	cout << "Enter Book's Stock Quantity: ";
	cin >> bookQty;

}

void getNovelDetails(string &category, string &bookLvl, float &avgRating, bool &isFiction){
		cout << "Enter novel's genre: ";
		cin >> category;
			
		cout << "Enter novel's age group: ";
		cin >> bookLvl;
			
		fflush(stdin);
			
		cout << "Enter average rating: ";
		cin >> avgRating;
						
		cout << "Is the book fiction? write 'true' or 'false' : ";
		cin >> isFiction;
}

void getTextBookDetails(string &category, string &bookLvl, int &bkEdition){
		cout << "Enter subject of the text book: ";
		cin >> category;
			
		cout << "Enter level: ";
		cin >> bookLvl;
			
		cout << "Enter edition: ";
		cin >> bkEdition;
}
