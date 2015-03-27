/*Program: Book Class Implementation
Author: Ruby Shrestha
Date: 23rd March 2015*/

#include <string>
#include "Book.h"
using namespace std;

Book::Book(string bkName, Author bkAuthor, float bkPrice, int qtyStock, string bookPublication){
		name=bkName;
		author=bkAuthor;
		publication=bookPublication;
		setPrice(bkPrice);
		setQuantity(qtyStock);
}

		
Book::Book(string bkName, Author bkAuthor, float bkPrice){
		name=bkName;
		author=bkAuthor;
		setPrice(bkPrice);
}
		
void Book::setPrice(float bkPrice){
		price=bkPrice;
}
		
void Book::setQuantity(int qty){
		quantity=qty;
}
		
string Book::getName(){
		return name;
}
		
float Book::getPrice(){
		return price;
}
		
int Book::getQuantity(){
		return quantity;
}
		
Author Book::getAuthor(){
		return author;
}

string Book::getPublication(){
	return publication;
}
		
string Book::toString(){		
		return getName() + " by " + getAuthor().toString() + " of publication: "+ getPublication();
}