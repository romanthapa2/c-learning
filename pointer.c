#include <stdio.h>

void main(){
    int num1 = 5;
    int num2 = 10;
    int *ptr = &num1; 
    // *ptr holds the memory address of the num1
    // when i print the ptr only it prints the memory address of num1
    // but when i print the *ptr it prints the num1 value
    printf("%d\n", &num1);
    printf("%d\n",*ptr);
}