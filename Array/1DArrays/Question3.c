// write a program to store the value of  sum of two array



#include<stdio.h>
#include<math.h>
 int main(){
    int nar[5],sas[5],sak[5],i;
  printf("Enter First Set of Number\n");
    for(i=0;i<5;i++){
      scanf("%d",&nar[i]);
    }
       printf("Enter Second  Set of Number\n");
       
    for(i=0;i<5;i++){
      
    scanf("%d",&sas[i]);
    }
    for(i=0;i<5;i++){
    sak[i]=nar[i]+sas[i];
    }

for(i=0;i<5;i++){
        printf("The index of array %d=%d\n",i,sak[i]);
        }
 }

