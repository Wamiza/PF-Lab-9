#include <stdio.h>

 int product(int a, int b);
 
 int main() {
 	int a,b;
 	printf("Enter first number");
 	scanf("%d" ,&a);
 	printf("Enter second number");
 	scanf("%d" ,&b);
 
    int result = product(a,b);
    printf("The result of Multiplication is : %d" ,result);
	return 0;	
 }
 
 int product(int a, int b) {
 	int product=a*b;
 	return product;
 }