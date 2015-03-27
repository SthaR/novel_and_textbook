#include <string>
#include <iostream>
#include "Novel.h"

using namespace std;
		
Novel::Novel(string bkName, Author bkAuthor, float price, int qty, string bkPublication, string novelGenre, string age, bool ficNonFic, int rate)
		:Book(bkName, bkAuthor, price, qty, bkPublication)
		{
			genre=novelGenre;
			ageGroup=age;
			isFiction=ficNonFic;
			setAvgRating(rate);
		}
		
void Novel::setAvgRating(int rate){
			avgRating=rate;
		}
		
int Novel::getAvgRating(){
			return avgRating;
		}
			
string Novel::getGenre(){
			return genre;
		}
				
string Novel::getAgeGroup(){
			return ageGroup;
		}
		
bool Novel::getIsFiction(){
			return isFiction;
		}
	
string Novel::toString(){
			return Book::toString() + " of genre " + getGenre();
		}

float Novel::getWorth(){
			return Book::price*Book::quantity;
		}