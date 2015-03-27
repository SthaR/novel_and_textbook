#include <string>
#include "Book.h"

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

class TextBook:public Book{
	
	private:
		string subject;
		string level;
		int edition;
	
	public:
		
		TextBook(string bkName, Author bkAuthor, float bkPrice, int bkqty, string bkPublication, string bkSubject, string bkLevel, int edition);		
		void setLevel(string bkLevel);	
		int getEdition();	
		string getLevel();		
		string getSubject();
		string toString();
};

#endif