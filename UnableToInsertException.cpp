/*
 * UnableToInsertException.cpp
 *
 * Class Description: Defines the exception that is thrown when a newElement
 *                    cannot be inserted into the data collection ADT class.
 *
 */

#include "UnableToInsertException.h"  

// Constructor
UnableToInsertException::UnableToInsertException(const string& message): 
logic_error("newElement cannot be inserted into the data collection ADT class Exception: " + message) {}
