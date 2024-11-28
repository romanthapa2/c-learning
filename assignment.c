#include <stdio.h>

// int main() {
//     int n,sum=0;
//     printf("Enter a number");
//     scanf("%d",&n);
//     while(n>0){
//         sum += n;
//         n--;
//     }
//     printf("The sum is %d\n",sum);
//     return 0;
// }

// int main(){
//     int  i,n,add=0;
//     for (i=1;i<=5;i++){
//         printf("Enter a number: ");
//         scanf("%d",&n);
//         if (n<0){
//             break;
//         }else{
//             add +=n;
//         }
//     }
//     printf("sum of positive numbers is %d\n",add);
//     return 0;
// }

// int main(){
//     int n,i,fact=1;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact *= i;
//     }
//     printf("factorial is %d\n",fact);
// }

// #include <stdio.h>

// void convertToBinary(int n) {
//     int binary[32];
//     int index = 0;

//     if (n == 0) {
//         printf("Binary: 0\n");
//         return;
//     }

//     while (n > 0) {
//         binary[index++] = n % 2;
//         n /= 2;
//     }

//     printf("Binary number: ");
//     for (int i = index - 1; i >= 0; i--) {
//         printf("%d", binary[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int decimal;

//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     convertToBinary(decimal);

//     return 0;
// }

// int main(){
//     int n, a=0,b=1,c;
//     printf("Enter length of fibonacci series");
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++){
//         printf("%d\n",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }

// int main(){
//     int i,j,mul;
//     for (i=5;i<=10; i++){
//         for (j=1;j<=10;j++){
//             mul = i * j;
//             printf("\n%d * %d = %d\n",i,j,mul);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     for (int i=0;i<=5;i++){
//         for (int j=0;j<=5;j++){
//             printf("%d ",1);
//         }
//     printf("\n");
//     }
// }

// int main(){
//     for (int i=0;i<=5;i++){
//         for (int j=0;j<=i;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     for (int i=1;i<=5;i++){
//         for (int j=5;j>=6-i;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     for (int i=1; i<=5;i++){
//         for (int j=1;j<=i;j++){
//             printf("%d",j%2);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     char asi=65;
//     for (int i =0;i<5;i++){
//         for (int j=0;j<=i;j++){
//             printf("%c",asi+j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int rows=6,coef=1;
//     for (int i=0;i<rows;i++){
//         for (int space=1;space<=rows-i;space++){
//             printf(" ");
//         }
//         for (int j=0;j<=i;j++){
//             if(j==0 || i==0){
//                 coef=1;
//             }
//             else{
//                 coef=coef*(i-j+1)/j;
//                 printf("%4d",coef);
//             }
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int a[5],i,n,search,found=0;
//     printf("Enter 5 elements;");
//     for (i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter number to search: ");
//     scanf("%d",&n);
//     for (i=0;i<n;i++){
//         if(a[i]==n){
//             found=1;
//             printf("%d found at %d position\n",n,i);
//             break;
//         }
//     }
//     if (found==0){
//         printf("Elements not found");
//     }
//     }

// int main(){
//     int a[10]={1,2,3,4,5,9,6,19,11,10};
//     int max=a[0],min=a[0];
//     for (int i=0;i<10;i++){
//         if (max<a[i]){
//             max = a[i];
//         }
//         if (min>a[i]){
//             min = a[i];
//         }
//     }
//     printf("max=%d min=%d\n",max,min);
// }

#include <stdio.h>

// int main() {
//     int a[10] = {1, 2, 3, 4, 5, 9, 6, 19, 11, 10};
//     int max = a[0], secondMax = a[0];

//     for (int i = 0; i < 10; i++) {
//         if (a[i] > max) {
//             secondMax = max;
//             max = a[i];
//         } else if (a[i] > secondMax && a[i] != max) {
//             secondMax = a[i];
//         }
//     }
//     printf("second largest %d\n",secondMax);
//     return 0;
// }

// int main() {
//     int a[2][2];

//     printf("Enter value in array:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("Element [%d][%d]: ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("\nThe 2D array is:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n");

//     return 0;
// }

// int main() {
//     int A[2][2], B[2][2], C[2][2];

//     printf("Enter values for matrix A (2x2):\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("A[%d][%d]: ", i, j);
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("\nEnter values for matrix B (2x2):\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("B[%d][%d]: ", i, j);
//             scanf("%d", &B[i][j]);
//         }
//     }

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
//         }
//     }

//     printf("\nThe result of A * B is:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main() {

//     int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     printf("Upper Triangular \n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i <= j) {
//                 printf("%d ", matrix[i][j]);
//             }
//         }
//     }
//     printf("\n");

//     printf("Diagonal :\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j=0; j < 3; j++) {
//             if (i == j) {
//                 printf("%d ", matrix[i][j]);

//         }else{
//             printf("0");
//         }
//         }
//     printf("\n");
// }

//     printf("Lower Triangular :\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (i >= j) {
//                 printf("%d ", matrix[i][j]);
//             }
//         }
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char city[10][50], temp[50];


//     printf("Enter the names of 10 cities:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("City %d: ", i + 1);
//         scanf("%s", city[i]);
//     }


//     for (int i = 0; i < 9; i++) {
//         for (int j = 0; j < 9 - i; j++) {
//             if (strcmp(city[j], city[j + 1]) > 0) {
//                 // Swap city[j] and city[j+1]
//                 strcpy(temp, city[j]);
//                 strcpy(city[j], city[j + 1]);
//                 strcpy(city[j + 1], temp);
//             }
//         }
//     }


//     printf("\nCities in alphabetical order:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%s\n", city[i]);
//     }

//     return 0;
// }

