#include <stdio.h>

int EvenOdd();
  
  int main(){
  	int number;
  	printf("Enter Nnumber");
  	scanf("%d" ,&number);
  	
  	int result = EvenOdd(number);
  	if(result==1 ) {
     	printf("Given Number is Even"); 
	}
  	else {
  		printf("Given Number is odd");	
	}
  	
   return 0;
  }
  
int EvenOdd(int number) {
  	int Even ,Odd;
  	if(number%2==0) {
  		return 1;
	  }
	else {
	    return 0;
	}
}