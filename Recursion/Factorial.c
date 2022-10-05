#include<stdio.h>


int Factorial(int i){
 
    if(i<=1){
return 1;
}

else{
return i*Factorial(i-1);
}
}
int main(){
   printf("The Value is %d",Factorial(5));

    return 0;
}