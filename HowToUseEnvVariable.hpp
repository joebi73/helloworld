//Short example code, how to use Environment variables
#include <cstring>
#include <iostream>
namespace Hello
{
void UseEnv()
{
    //Read Environment variable
    const char *EnvironVar = std::getenv("THEVAR"); //TODO: Add correct #include
    bool useVariable{false};
    //Guard to check that the Env has a value
    if (EnvironVar == nullptr || (std::strcmp("false", EnvironVar) == 0))
    {
        useVariable = false;
        std::cout << "Environment variable is set to: " << useVariable << std::endl;
    }
    else if (std::strcmp("true", EnvironVar) == 0)
    {
        useVariable = true;
        std::cout << "Environment variable is set to: " << useVariable << std::endl;
    }
    else
    {
        std::cout << "Invalid value for environment variable THEVAR, set value to true or false" << std::endl;
    }


if (useVariable)
{
    //do stuff!
    //With help of this switch you can via an EnvVar decide if you want to run a certain code/alg or something like that
}

}

} //namespace Hello