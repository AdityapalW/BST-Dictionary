/*
 * ElementDoesNotExistException.h
 *
 * Class Description: Defines the exception that is thrown when 
 *                    we are searching for an element
 *                    which is not in the data collection ADT class.
 *
 */
 
#ifndef ELEMENT_DOES_NOT_EXIST_EXCEPTION_H
#define ELEMENT_DOES_NOT_EXIST_EXCEPTION_H

#include <stdexcept>
#include <string>
using std::string;
using std::logic_error;

class ElementDoesNotExistException : public logic_error {

   public:
      // Constructor
      ElementDoesNotExistException(const string& message = "");
   
}; 
#endif
