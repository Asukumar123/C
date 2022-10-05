#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Friends{
    int rollno;
    char name[56];
    float MoneyBorrowed;



};

void main()
{
    int n;
    printf("enter the value of n");
     scanf("%d",&n);

   struct Friends s[n];

  
   for(int i=0;i<n;i++){
    scanf(" %d %s %f",&s[n].rollno,&s[n].name,&s[n].MoneyBorrowed);
   }
for(int i=0;i<n;i++){
    printf("The Rollno is %d and name is %s MoneyBorrowed is %f\n",s[n].rollno,s[n].name,s[n].MoneyBorrowed);
   }

}


