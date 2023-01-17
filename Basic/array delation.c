#include<stdio.h>
int main(){
int size=7,i,pos=1;
int a[7]={10,20,30,40,50,60,70};

for(i=0;i<=6; i++){
    a[i]=a[i+1];
}
//print element
for(i=0;i<=5;i++){
    printf(" elements of array %d\n",a[i]);
}
return 0;
}