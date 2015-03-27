/*Program: Author Class Interface
Author: Ruby Shrestha
Date: 23rd March 2015*/

#include <string>
using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H

class Author{
	
	public:
		Author();
		Author(string userName, string userEmail, char userGender);		
		void setEmail(string userEmail);	
		string getEmail();		
		string getName();		
		char getGender();		
		string toString();
		
	private:
		string name;
		string email;
		char gender;
};

#endif