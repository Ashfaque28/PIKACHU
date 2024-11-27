//WAP to define a counter function to print how many times the function is called use storage classes

#include <stdio.h>
void counterFunction();
int main()
{
    
    counterFunction();
    counterFunction();
    counterFunction();
    return 0;
}

void counterFunction() 
{
    static int counter = 0;
    counter++; 
    printf("Function has been called %d time(s).\n", counter);
}
