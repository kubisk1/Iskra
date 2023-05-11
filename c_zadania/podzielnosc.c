#include <stdio.h>

int main()
{
    int test, x, y, n;
    int x_buff=0;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d %d",&n,&x,&y);

        while(n > x_buff)
        {
            x_buff = x_buff + x;

            if(x_buff % y != 0 &&  x_buff < n)
            {
                printf("%d ",x_buff);
            }
        }

        x_buff = 0;
        printf("\n");

    }


    return 0;
}