#include<stdio.h>
int main(){
    int a,isprime=1;
    printf("Enter the number to check prime or not");
    scanf("%d",&a);
    for (int i = 2; i <=a/2 ; i++){
        if(a % i == 0){
            isprime = 0;
            break;
        }
    }
    
     if (isprime == 1)
        printf("%d is a prime number\n", a);
    else
        printf("%d is not a prime number\n", a);

}
