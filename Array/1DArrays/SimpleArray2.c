#include<stdio.h>
//program to print a group of elements in reverse order
int main(){
    int a[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    
for(i=4;i>0;i--)
    printf("%d\n",a[i]);


}