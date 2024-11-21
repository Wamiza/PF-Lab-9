#include <stdio.h>

int swapIntegers( int *a ,int *b);
 
  int main() {
  	int a,b;
  	printf("Enter first Integer :");
  	scanf("%d" ,&a);
  	printf("Enter Second Integer :");
  	scanf("%d" ,&b);
  	
  	printf("Before Swapping: a=%d and b=%d\n", a , b);
  	
  	swapIntegers(&a,&b);
  	printf("After swapping:  a=%d and b=%d ", a  , b);
  	
  	return 0;
  }
 
int swapIntegers(int *a, int *b) {
 	int temp;
 	
 	temp = *a;
 	*a = *b;
 	*b = temp;
 }