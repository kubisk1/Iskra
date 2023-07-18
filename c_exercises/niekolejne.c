#include <stdio.h>

int main()
{
    int number;
    int table[1000000];

    scanf("%d",&number);


    if(number == 0)
    {
        printf("%d", 0);
    }else if( number == 1 || number == 2)
    {
        printf("NIE");
    }else if (number > 2)
    {
        for(int i = 0; i <= number; i++)
        {
        //     if(i-1 <= number*0.5)
        //     {
        //   table[(i-1)*2] = i;
        //     }else{
          
        //   table[i] = i;
        //     }
            table[i] = ((i % 2) == 0) ? ((i / 2) + 1) : (number - (i / 2));
        }
        table[number - 1] = 0;
        for(int j = 0; j <=number; j++)
        {
            printf("%d ",table[j]);
        }
    }

    return 0;
}