//Strings: Palindrome Check Write a C program that inputs a string from the user and checks whether the given string is a palindrome or not. (A palindrome reads the same forwards and backward, e.g., "madam"). You should write this without using built-in string-handling functions like strcmp or strrev.

#include <stdio.h>
#include <string.h>

int main(){

 char str[101];
 int len = 0;
 int left = 0;
 int right = 0;
 int isPalindrome = 1;
 
 printf("Enter the string: ");
 fgets(str, 101, stdin);

 while(str[len] != '\0' && str[len] != '\n'){
    len++;
 }

 if(str[len]=='\n'){
    str[len] = '\0';
 }

right = len -1;

 while(left<right){
    if(str[left]!=str[right]){
        isPalindrome = 0;
        break;
    }
    left ++;
    right --;
 }

 if(isPalindrome == 1){
    printf("The string is a palindrome");
 }
 else{
    printf("The string is not a palindrome");
 }


}