
#include "exception.h"

SomethingIsWrong::SomethingIsWrong(const std::string &message)
    : message{message}
{
}

// Copy Constructor
SomethingIsWrong::SomethingIsWrong(const SomethingIsWrong &source)
{
    // std::cout << "Copy constructor for SomethingIsWrong called" << std::endl;
    message = source.message;
}

// Destructor
SomethingIsWrong::~SomethingIsWrong()
{
    // std::cout << "SomethingIsWrong Destructor Called\n";
}

const std::string &SomethingIsWrong::what() const
{
    return message;
}

void SomethingIsWrong::setMessage(const std::string &message)
{
    this->message = message;
}
