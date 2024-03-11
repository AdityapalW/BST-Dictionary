/*
 * Word.h
 * 
 * Description: Handles English words and its meaning.
 * 
 */

#ifndef WORD_H
#define WORD_H

#include <string>
#include <ostream>

using std::string;
using std::ostream;
using std::endl;

class Word {

private:
   string english;
   string meaning;
   
public:
   // Constructors
   Word() ;
   Word(string english) ;
   Word(string english, string meaning) ;

   // Getters
   string getEnglish() const ;
   string getMeaning() const ;

   // Setters
   void setEnglish(string english) ;
   void setMeaning(string meaning) ;

   // Overloaded Operators
   bool operator==(const Word& rhs) const;
   bool operator<(const Word& rhs) const;
   bool operator>(const Word& rhs) const;

   // For testing purposes!
   // Description: Prints the content of "wP".
   friend ostream & operator<<(ostream & os, const Word & wP);

}; // end of Word.h
#endif
