#include <stdio.h>
#include <string.h>

int palindrome(char word[]);

int main() {
  	char word[5][20];
	int i;
    for(int i=0; i<5; i++) {
  	printf("Enter Word :");
  	scanf("%s", word[i]); 
    }
  	
  	for(int i=0; i<5; i++) {
  	if(palindrome(word[i])) {
  		printf("\n%s is Palindrome" ,word[i]);
	}
	else {
		printf("\n%s isn't Palindrome", word[i]);
	}
  }
  	return 0;
}

int palindrome(char word[]) {
  	int length= strlen( word);
  	for(int i=0; i<length/2; i++) {
  		if(word[i] != word[length-1-i]) {
  		return 0;
	  }
    }
		return 1;
}