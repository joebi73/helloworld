//Short example code, how to use Environment variables
#include <iostream>

void UseEnv()
{
    //Read Environment variable
    const char *EnvironVar = std::getenv("THEVAR"); //TODO: Add correct #include
    bool useVariable{false};
    //Guard to check that the Env has a value
    if (EnvironVar == nullptr || (std::strcmp("false", EnvironVar) == 0))
    {
        useVariable = false;
    }
    else if (std::strcmp("true", EnvironVar) == 0)
    {
        useVariable = true;
    }
    else
    {
        std::cout << "Invalid value for environment variable THEVAR, set value to true or false" << std::endl;
    }


if (useVariable)
{
    //do stuff!
}

}