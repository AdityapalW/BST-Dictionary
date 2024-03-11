/*
 * Word.cpp
 * 
 * Description: Handles English words and its meaning.
 * 
 */
 
#include "Word.h"

// Constructors
Word::Word() {
   this->english = "";
   this->meaning = "";
}

Word::Word(string english) {
   this->english = english;
   this->meaning = "";
}

Word::Word(string english, string meaning) {
   this->english = english;
   this->meaning = meaning;
}

// Getters
string Word::getEnglish() const {
   return this->english;
}

string Word::getMeaning() const {
   return this->meaning;
}

// Setters
void Word::setEnglish(string english) {
   this->english = english;
   return;
}

void Word::setMeaning(string meaning) {
   this->meaning = meaning;
   return;
}

// Overloaded Operators
bool Word::operator==(const Word& rhs) const {
   return (this->english.compare(rhs.getEnglish()) ) == 0;
} 

bool Word::operator<(const Word& rhs) const {
   return (this->english.compare(rhs.getEnglish()) ) < 0;
} 

bool Word::operator>(const Word& rhs) const {
   return (this->english.compare(rhs.getEnglish()) ) > 0;
} 

// For testing purposes!
// Description: Prints the content of "wP".
ostream & operator<<(ostream & os, const Word & wP) {
   
   os << wP.english << ":" << wP.meaning << endl; 
        
   return os;
} 
