/*
 * ElementAlreadyExistsException.h
 *
 * Class Description: Defines the exception that is thrown when 
 *                    we are attempting to insert an element
 *                    which is already in the data collection ADT class.
 *
 */
 
#ifndef ELEMENT_ALREADY_EXISTS_EXCEPTION_H
#define ELEMENT_ALREADY_EXISTS_EXCEPTION_H

#include <stdexcept>
#include <string>
using std::string;
using std::logic_error;

class ElementAlreadyExistsException : public logic_error {
   
   public:
      // Constructor
      ElementAlreadyExistsException(const string& message = "");
   
}; 
#endif
