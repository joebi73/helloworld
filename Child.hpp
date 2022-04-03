#pragma once
#include "iDemo.hpp"
#include "Parent.hpp"
#include <iostream>

class Child : public Parent, public iDemo
{
    public:
    virtual void OverrideMe()
    {
      //do stuff
      std::cout << "Testing with interface class and multiple inheritance"<< std::endl;
      // continue - forces to execute the next iteration of the loop
      // break - terminating the loop
      // return -
    }
};