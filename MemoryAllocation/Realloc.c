#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
int *ptr;
int n;
printf("Enter the Size\n");
scanf("%d",&n);

ptr=(int * )calloc(n , sizeof(int)); //calloc


for(int i=0;i<n;i++){
printf("Enter the the elements");
scanf("%d",&ptr[i]);

}

for(int i=0;i<n;i++){
printf("the index is %d and elements is %d\n",i,ptr[i]);
}


// realloc

printf("Enter the new Size\n");
scanf("%d",&n);

ptr=(int * )realloc(ptr, n*sizeof(int)); //realloc


for(int i=0;i<n;i++){
printf("Enter new the the elements");
scanf("%d",&ptr[i]);

}

for(int i=0;i<n;i++){
printf("the index is %d and elements is %d\n",i,ptr[i]);
}

free(ptr);
}