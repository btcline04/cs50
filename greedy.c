#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float change;
    int cents;

    do
    {
        printf("How much change is owed?: ");
        change = GetFloat();
    }
    while (change < 0);
    
    cents = (int)round(change * 100);
}