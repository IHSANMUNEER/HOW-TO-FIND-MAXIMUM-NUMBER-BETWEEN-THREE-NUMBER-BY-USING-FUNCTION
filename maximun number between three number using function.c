#include<stdio.h>
int maximum(int no1,int no2,int no3);
int main(){
int no1,no2,no3;
printf("Enter the three numbers:");
scanf("%d%d%d",&no1,&no2,&no3);
printf("maximum number is:%d",maximum(no1,no2,no3));
return 0;
}
int maximum(int no1,int no2,int no3)
{
   int max=no1;
    if(no2>max){

    max=no2;}
    if(no3>max)
    {max=no3;}
    return max;}



