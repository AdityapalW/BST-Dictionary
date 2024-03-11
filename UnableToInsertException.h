/*
 * UnableToInsertException.h
 *
 * Class Description: Defines the exception that is thrown when a newElement
 *                    cannot be inserted into the data collection ADT class.
 *
 */

#ifndef UNABLE_TO_INSERT_EXCEPTION_H
#define UNABLE_TO_INSERT_EXCEPTION_H

#include <stdexcept>
#include <string>

using std::string;
using std::logic_error;

class UnableToInsertException : public logic_error {

   public:
      // Constructor
      UnableToInsertException(const string& message = "");
   
}; 
#endif
