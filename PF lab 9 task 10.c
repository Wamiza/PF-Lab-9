#include <stdio.h>

void maxmin(int numbers[],int length, int*min, int*max);

 int main() {
 	int numbers[20],length;
 	int min,max;
 	printf("Enter the numbers of elements :");
 	scanf("%d" ,&length);
 	for(int i=0; i<length; i++) {
 	printf("Enter the Elements :");
 	scanf("%d", &numbers[i]); }
 	
 	maxmin(numbers,length, &min, &max);
 	printf("The minimum valus is %d\n",min);
 	printf("The maximum value is %d", max);
 	
  return 0;
 }

void maxmin(int numbers[],int length, int*min, int *max) {
	*min = numbers[0];
    *max = numbers[0];
	for(int i=0; i<length; i++) {
		if(numbers[i] < *min) {
		   *min = numbers[i];	
		}
		if(numbers[i] > *max) {
		   *max = numbers[i];	
		}
	}
}