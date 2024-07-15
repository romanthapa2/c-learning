#include <stdio.h>

// write a function to print the value of nth term fibonacci 


int fibonacci(int n);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("fibonacci of %d is %d\n",n,fibonacci(n));
    return 0;
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+ fibonacci(n-2);
    }
}
