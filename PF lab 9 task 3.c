#include <stdio.h>
#include <string.h>

 int main() {
 char deststr[100] ,srcstr[100];
 int n ;
 
   printf("Enter destination string :");
   scanf("%s" , deststr);
   printf("Enter source string :");
   scanf("%s" , srcstr);
   printf("Enter the number of characters to append :");
   scanf("%d" , &n);
   
   int sourcelength=strlen(srcstr);
   
   if(n> sourcelength) {
   	n= sourcelength;
   }
   
   strncat(deststr, srcstr, n);
   
   printf("New concanetated string is %s" ,deststr);
 
 return 0;
}