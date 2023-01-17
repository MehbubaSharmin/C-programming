#include<stdio.h>
int main(){
int size=6,i,num=99,pos=2;
int a[size];
//take input elements form user 

for(i=0; i<size-1;i++){ // i=0;i<5;i++; i<size-1 mane i , 
    scanf("%d",&a[i]);
}
for(i=4;i>=2; i--){
    a[i+1]=a[i];
}
a[pos]=num; //a[2]=99
//print element
for(i=0;i<=size-1;i++){
    printf(" elements of array %d\n",a[i]);
}
return 0;
}