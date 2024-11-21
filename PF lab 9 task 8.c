#include <stdio.h>

int calculation(int a, int b, int*product, float*divide, int*sum, int*subtract);

  int main() {
  	int a,b,choice,product,sum,subtract;
  	float divide;
  	
  	printf("Enter 1 to Multiply\n");
  	printf("Enter 2 to Divide\n");
  	printf("Enter 3 to Add\n");
  	printf("Enter 4 to Subtract\n");
  	scanf("%d" ,&choice);
  	printf("Enter First number :");
  	scanf("%d" , &a);
  	printf("Enter Second Number");
  	scanf("%d", &b);
  	
  	calculation(a,b,&product, &divide, &sum, &subtract);
  	if(choice==1) {
  		printf("The Product of A and B is %d", product);
	  }
	else if(choice==2) {
  		printf("The Remainder of A and B is %.2f", divide);
	  }
	else if(choice==3) {
  		printf("The Sumn of A and B is %d", sum);
	  }
	else if(choice==4) {
  		printf("The Result of A and B is %d", subtract);
	  }
  return 0;
  }

int calculation(int a, int b, int*product, float*divide, int*sum, int*subtract) {
	
	product=a*b;
	divide=a%b;
	sum=a+b;
	subtract=a-b; 
}