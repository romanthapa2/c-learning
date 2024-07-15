#include <stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int result = sum(a,b);
    printf("sum is %d\n",result);
    return 0;
}

int sum(int a, int b){
    return a+b;
}