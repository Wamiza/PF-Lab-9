#include <stdio.h>
#include <string.h>

void reverse(char word[]);

 int main() {
 	char word[100];
 	
 	printf("Enter word :");
 	scanf("%s", word);
 	
 	printf("Original String %s\n ", word);
 	
 	reverse(word);
 	
    printf("Reverse String %s" , word);
  return 0;		
 }

void reverse(char word[]){
	char temp;
	int length = strlen(word);
	for(int i=0; i<length/2; i++){
	temp = word[i];
	word[i] = word[length-1-i];
	word[length-1-i]=temp; }
}
