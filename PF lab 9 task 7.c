#include <stdio.h>

int prime(int number) ;

int main() {
 int number;
 
    printf("Enter Number :");
    scanf("%d" ,&number);
    
    int result = prime(number);
    if(result==1) {
    	printf("Prime Number");
	}
	else {
		printf("Not A Prime Number");
	}
   return 0;
}

int prime(int number) {
	int found=0;
	for(int i=2; i<=number; i++) {
		if(number%i==0) {
			found++;
		}
	}
	return found;
}