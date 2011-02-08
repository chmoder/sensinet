#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long counter = 0;
    while(counter < 32)
    {
        counter = counter + 1.022625;
        if(counter / 16.362 == 1)
        {
            printf("%f\n",(counter/16.362));
        }
    }
    return 0;
}
