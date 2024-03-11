/*
 * EmptyDataCollectionException.cpp
 *
 * Class Description: Defines the exception that is thrown when data collection is empty.
 *
 */
 
#include "EmptyDataCollectionException.h"  

// Constructor
EmptyDataCollectionException::EmptyDataCollectionException(const string& message): 
logic_error("EmptyDataCollectionException: " + message) {}  
