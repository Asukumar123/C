#include<stdio.h>
#include<string.h>
//Comparing the Strings if they are same  or not
int main(){
    int value;
char n1[30]="Asu";
char n2[30]="kumar";
value=strcmp(n1,n2);
if(value==0)
    printf("Same \n");
else
    printf("fuck off\n");
//Concating two Strings
strcat(n1,n2);
printf("your name is:   %s\n",n1);
//Reversing two Strings
strrev(n1);
printf("The reverse is :  %s\n",n1);
// Length of Strings
 int  count=strlen(n1);
printf("The length of your name is:   %d\n",count);
//Convert Upper case to Lower Case
strlwr(n1);
printf("The lower case of your name:  %s",n1);
}