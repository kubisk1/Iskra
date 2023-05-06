#include <stdio.h>
#include <stdint.h>



int main()
{
    char operation;
    int32_t nr1, nr2, out;

while(scanf(" %c %d %d",&operation,&nr1,&nr2) == 3)
{
   


    if (operation == '+')
    {
        out = nr1 + nr2;
    }else if(operation == '-')
    {
        out = nr1 - nr2;
    }else if(operation == '*')
    {
        out = nr1 * nr2;
    }else if(operation == '/')
    {
        out = nr1 / nr2;
    }else if(operation == '%')
    {
        out = nr1 % nr2;
    }
    printf("%d\n",out);
}

    return 0;
}