#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
if(a>b){
printf("%d is maximum number\n",a);
}
else{
    printf("%d is maximum number\n",b);
}
return 0;
}