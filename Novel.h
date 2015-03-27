#include <string>
#include "Book.h"

#ifndef NOVEL_H
#define NOVEL_H

class Novel:public Book{
	
	private:
		string genre;
		string ageGroup;
		bool isFiction;
		int avgRating;
	
	public:
		
		Novel(string bkName, Author bkAuthor, float price, int qty, string bkPublication, string novelGenre, string age, bool ficNonFic, int rate);		
		void setAvgRating(int rate);		
		int getAvgRating();			
		string getGenre();				
		string getAgeGroup();		
		bool getIsFiction();	
		string toString();
		float getWorth();
};

#endif