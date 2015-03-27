/*Program: Author Class Implementation
Author: Ruby Shrestha
Date: 23rd March 2015*/

#include <string>
#include "Author.h"

using namespace std;

Author::Author(){
} 

Author::Author(string userName, string userEmail, char userGender){
		setEmail(userEmail);
		name=userName;
		gender=userGender;
}
		
void Author::setEmail(string userEmail){
		email=userEmail;
}
		
string Author::getEmail(){
		return email;
}
		
string Author::getName(){
		return name;
}
		
char Author::getGender(){
		return gender;
}
		
string Author::toString(){
		return getName() + " at " + getEmail();
}
