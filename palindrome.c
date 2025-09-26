#include<stdio.h>
int main(){
    int a,reminder,reverse=0 ;
    
    printf("Enter the number ");
    scanf("%d",&a);
     int original = a;
    while (a !=0)
    {
        reminder =  a % 10 ;
        reverse = reverse*10 + reminder ;
        a = a/10 ; 
    }
   if(original == reverse) {
    printf("The number is palindrome") ;}
    else{
        printf("The number is not palindrome");
    
    }
}