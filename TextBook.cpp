#include <string>
#include <cstdlib>
#include "TextBook.h"

using namespace std;

TextBook::TextBook(string bkName, Author bkAuthor, float bkPrice, int bkqty, string bkPublication, string bkSubject, string bkLevel, int bkEdition)
		:Book(bkName, bkAuthor, bkPrice, bkqty, bkPublication)
		{
			edition=bkEdition;
			subject=bkSubject;
			setLevel(bkLevel);
		}
		
void TextBook::setLevel(string bkLevel){
			level=bkLevel;
		}
		
int TextBook::getEdition(){
			return edition;
		}
		
string TextBook::getLevel(){
			return level;
		}
		
string TextBook::getSubject(){
			return subject;
		}
	
string TextBook::toString(){
	char buffer[10];	
	itoa(getEdition(), buffer, 10);
	return Book::getName() + " by " + Book::getAuthor().getName() + " of subject " + getSubject() + " of edition " + buffer;
}
