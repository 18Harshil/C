#include<stdio.h>
int main(){
    int a,reminder,reverse = 0;
    printf("Enter the number to reverse");
    scanf("%d",&a);
    while (a != 0)
    {
        reminder = a % 10 ;
        reverse = reverse*10 + reminder;
        a = a/10;

    }
    printf("reverse number is %d",reverse);
    
}