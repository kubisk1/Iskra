#include <stdio.h>
#include <stdint.h>

int silnia_v2();
int silnia_last();

int main()
{

    uint64_t a, b;
    int testy;
    scanf("%d",&testy);
    testy = testy - 1;
    while(testy--)
    {
    scanf("%d",&a);
    silnia_v2(a);
    }
    scanf("%d",&b);
    silnia_last(b);

    return 0;
}

int silnia_v2(uint64_t IN)
{
     if(IN == 9)
    {
        printf("8 0\n");
    } else if(IN == 8)
    {
        printf("2 0\n");
    } else if(IN == 7)
    {
        printf("4 0\n");
    } else if(IN == 6)
    {
        printf("2 0\n");
    } else if(IN == 5)
    {
        printf("2 0\n");
    } else if(IN == 4)
    {
        printf("2 4\n");
    } else if(IN == 3)
    {
        printf("0 6\n");
    } else if(IN == 2)
    {
        printf("0 2\n");
    } else if(IN == 1)
    {
        printf("0 1\n");
    } else if(IN > 9)
    {
        printf("0 0\n");
    } else if (IN == 0)
    {
        printf("0 1\n");
    }
}
   int silnia_last(uint64_t IN)
   {
        if(IN == 9)
    {
        printf("8 0");
    } else if(IN == 8)
    {
        printf("2 0");
    } else if(IN == 7)
    {
        printf("4 0");
    } else if(IN == 6)
    {
        printf("2 0");
    } else if(IN == 5)
    {
        printf("2 0");
    } else if(IN == 4)
    {
        printf("2 4");
    } else if(IN == 3)
    {
        printf("0 6");
    } else if(IN == 2)
    {
        printf("0 2");
    } else if(IN == 1)
    {
        printf("0 1");
    } else if(IN > 9)
    {
        printf("0 0");
    } else if (IN == 0)
    {
        printf("0 1");
    }
   }