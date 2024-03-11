/*
 * ElementAlreadyExistsException.cpp
 *
 * Class Description: Defines the exception that is thrown when 
 *                    we are attempting to insert an element
 *                    which is already in the data collection ADT class.
 *
 */
 
#include "ElementAlreadyExistsException.h"  

// Constructor
ElementAlreadyExistsException::ElementAlreadyExistsException(const string& message): 
logic_error("ElementAlreadyExistsException: " + message) {}
