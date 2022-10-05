
// program to print sum and avg of the marks
#include<stdio.h>
int main(){
    int marks[5],i;
    int sum=0,avg;
  for(i=0;i<5;i++) 
  scanf("%d",&marks[i]);
   for(i=0;i<5;i++)
   sum=sum+marks[i];
avg=sum/5;
printf("%d",avg);
}