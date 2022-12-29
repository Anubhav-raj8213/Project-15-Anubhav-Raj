#include <stdio.h>
int main ()
        {
          int i,j,n;
          printf("Enter the number of terms\n");
          scanf("%d", &n);
           j=0;
           for(i=1; i<=n;i++){
            if(i%2!=0){
              j=j+i;
            }
            if(i%2==0){
              j=j-i;
            }
           }
           printf("The sum is: %d\n", j);
           return 0;
        }