#pragma once

#include <iostream>
#include <string>

class SomethingIsWrong
{
    std::string message{};

public:
    SomethingIsWrong(const std::string &message);

    // Copy Constructor
    SomethingIsWrong(const SomethingIsWrong &);

    // Destructor
    virtual ~SomethingIsWrong();

    virtual const std::string &what() const;

    void setMessage(const std::string &);
};

class Warning : public SomethingIsWrong
{
public:
    Warning(const std::string &s = "  Warning  ") : SomethingIsWrong(s) {}
};

class SmallError : public Warning
{
public:
    SmallError(const std::string &s = "  Small Error  ") : Warning(s) {}
};

class CriticalError : public SmallError
{
public:
    CriticalError(const std::string &s = "  Critical Error  ") : SmallError(s) {}
};