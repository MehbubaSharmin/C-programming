#msn
#include<stdio.h>
int i,value=0,pos=3;
int arr[6]={8,6,5,9,8};//8,6,5,0,9,8
int main(){
for(i=5;i>3;i--){
  arr[i]=arr[i-1]; // 5=4
}
arr[3]=0;
for(i=0;i<=5;i++){
    printf("%d\n",arr[i]);
}

return 0 
}