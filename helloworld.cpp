#include "HowToUseEnvVariable.hpp"
#include "Child.hpp"

#include <iostream>
#include <vector>
#include <string>

// using namespace std;
using namespace Hello;

int main()
{
    // Read environment variables
    UseEnv();

    std::cout << "Hello World! Its a great place!" << std::endl;
    Child demoChild;
    demoChild.OverrideMe();

    return 0;
}