#include <stdio.h>
#include <stdlib.h>


int main() {
  
    float a,b,c,delta;
    while (scanf("%f", &a) == 1) 
    { 
        scanf("%f", &b);
        scanf("%f", &c);

        delta = (b*b)-(4*a*c);
        
        if(delta > 0 )
        {
         printf("2\n");
        }else if(delta < 0){
              printf("0\n");
        }else{
            printf("1\n");
        }

    }
    return 0;
}