#include<stdio.h>
int main(){
    int n,reminder,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while (n !=0)
    {
        reminder = n % 10 ;
        sum = sum + reminder;
        n = n/10;

    }
    printf("sum of digits is %d",sum);

    
}