#include<stdio.h>

int main(){
int a=69;
// int b=9;
int *p;
p= &a;
int **q=&p;
int ***r=&q;
printf("%d\n",&a);
printf("%d\n",*p);
printf("%d\n",p);
printf("%d\n",**q);
printf("%d\n",***r);
printf("%d\n",q);
printf("%d\n",r);
return 0;
}