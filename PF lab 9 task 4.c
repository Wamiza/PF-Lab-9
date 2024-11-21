#include <stdio.h>
 int main() {
 
  char list[10][20]={"apple","banana","cherry","grapes","mango","melon","orange","pomegranate","strawberry","watermelon"};
  int fruit;
  
  printf("Enter Fruit name :");
  scanf("%d", &fruit);
  
  int match = strcmp(list,fruit);
  
  if(match!=0) {
  	printf("Found");
  }
  else {
  	printf("Not Found");
  }
  return 0;
}