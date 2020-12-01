#include "ADT.h"
#include <iostream>
#include <exception>

using namespace std;

/*
    Two exception classes are created for handling the two exceptions.
    These include, failed to sit and failed to destroy. They have the 
    std method for an exception, what(). This returns a const char ptr 
    of the exception text. 
*/
struct FailedSit : public exception 
{
    const char * what() const throw() { return "Failed to Sit on Object"; }
};

struct FailedDestroy : public exception 
{
    const char * what() const throw() { return "Failed to Destroy Object"; }
};

/*
    Below are the implementations of the Chair and Statue class methods.
    The sit and destroy methods are identical between both classes and if
    they can be sat on or destroyed will perform a no-op, if they can't will
    throw an exception of one of the previously defined exceptions. 

*/
void Chair::sit()
{
    if (getIndicatorSit())
    {
        return; // NO-OP
    }
    else
    {
        // Throw Exception        
        throw FailedSit();
    }
    
}

void Chair::destroy() 
{
    if (getIndicatorDestroy())
    {
        return; // NO-OP
    }
    else
    {
        // Throw Exception
        throw FailedDestroy();
    }

}

void Statue::sit()
{
    if (getIndicatorSit())
    {
        return; // NO-OP
    }
    else
    {
        // Throw Exception        
        throw FailedSit();
    }
    
}

void Statue::destroy() 
{
    if (getIndicatorDestroy())
    {
        return; // NO-OP
    }
    else
    {
        // Throw Exception        
        throw FailedDestroy();
    }

}
