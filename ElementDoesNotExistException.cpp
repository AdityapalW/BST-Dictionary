/*
 * ElementDoesNotExistException.cpp
 *
 * Class Description: Defines the exception that is thrown when 
 *                    we are searching for an element
 *                    which is not in the data collection ADT class.
 */
 
#include "ElementDoesNotExistException.h"  

// Constructor
ElementDoesNotExistException::ElementDoesNotExistException(const string& message): 
logic_error("ElementDoesNotExistException: " + message) {}
