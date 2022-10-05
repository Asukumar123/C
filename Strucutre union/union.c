#include<stdio.h>
#include<string.h>
union Friends
{
  
char name[56];
int number;
float moneytaken;
  
}Friends1,Friends2,Friends3;



int main(){


Friends1.number=949;
Friends2.number=456;
Friends3.number=567;
Friends1.moneytaken=500;
Friends2.moneytaken=700;
Friends3.moneytaken=900;
strcpy(Friends1.name, "Bala");
strcpy(Friends2.name, "asu");
strcpy(Friends3.name, "subhash");

printf("---------------------------\n");
printf("%s\n",Friends1.name);
printf("%d\n",Friends1.number);
printf("%f\n",Friends1.moneytaken);
printf("---------------------------\n");

printf("%s\n",Friends2.name);
printf("%d\n",Friends2.number);
printf("%f\n",Friends2.moneytaken);
printf("---------------------------\n");
printf("%s\n",Friends3.name);
printf("%d\n",Friends3.number);
printf("%f\n",Friends3.moneytaken);
printf("---------------------------\n");
return 0;
}