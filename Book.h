/*Program: Book Class Interface
Author: Ruby Shrestha
Date: 23rd March 2015*/

#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H

class Book{
	
	private:
		string name;
		Author author;
		string publication;
	
	protected:
		float price;
		int quantity;		
	
	public:	
			
		Book(string bkName, Author bkAuthor, float bkPrice, int qtyStock, string publication);		
		Book(string bkName, Author bkAuthor, float bkPrice);		
		void setPrice(float bkPrice);		
		void setQuantity(int qty);		
		string getName();
		float getPrice();		
		int getQuantity();		
		Author getAuthor();		
		string toString();
		string getPublication();
				
};

#endif