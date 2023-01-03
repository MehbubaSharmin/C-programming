#include <stdio.h>
int i , arr[8];
int main()
{
    for(i=0; i<=7; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=7;i++){
         printf("%d element of array %d \n",i,arr[i]);
    }
    return 0;
}