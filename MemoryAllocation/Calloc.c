#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
int *ptr;
int n;
printf("Enter the Size\n");
scanf("%d",&n);

ptr=(int * )calloc(n , sizeof(int)); //malloc


// for(int i=0;i<n;i++){
// printf("Enter the the elements");
// scanf("%d",&ptr[i]);

// }

for(int i=0;i<n;i++){
printf("%d%d\n",i,ptr[i]);
}


}