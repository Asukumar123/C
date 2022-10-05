#include<stdio.h>
#  include "global.c"

int main(){
extern int b;



int name=asu();
printf("the number is =%d", name);
}
int b=23;
int asu(){
   
   return b;
}