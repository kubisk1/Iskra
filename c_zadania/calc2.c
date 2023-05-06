#include <stdio.h>
#include <stdint.h>



int main()
{
    char operation;
    int n[10];
    int32_t nr1, nr2, out;

while(scanf(" %c %d %d",&operation,&nr1,&nr2) == 3)
{
   


    if (operation == '+')
    {
        out = n[nr1] + n[nr2];
        printf("%d\n",out);
    }else if(operation == '-')
    {
        out = n[nr1] - n[nr2];
        printf("%d\n",out);
    }else if(operation == '*')
    {
        out = n[nr1] * n[nr2];
        printf("%d\n",out);
    }else if(operation == '/')
    {
        out = n[nr1] / n[nr2];
        printf("%d\n",out);
    }else if(operation == '%')
    {
        out = n[nr1] % n[nr2];
        printf("%d\n",out);
    }else if (operation =='z')
    {
        n[nr1] = nr2;

    }
}

    return 0;
}
