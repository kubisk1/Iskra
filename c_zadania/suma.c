#include <stdio.h>
#include <stdlib.h>

int main() {
  
    int x, number=0;
    while (scanf("%d", &x) == 1) { // read integers until input ends
      
    number = number + x;
    printf("%d\n",number);
       
    }


    return 0;
}
