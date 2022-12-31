#include<stdio.h>
int main()
{
int phy,chemi,bio,math,com,avg;
printf("enter five subjects marks\n");
scanf("%d%d%d%d%d",&phy,&chemi,&bio,&math,&com);
avg=(phy+chemi+bio+math+com)/5;
if(avg>=90)
{
printf("Grade A\n");
}
else if(avg>=80)
{
    printf("Grade B\n");
}
else{
    printf("bellow grade c\n");
}
return 0;
}