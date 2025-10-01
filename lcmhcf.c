#include<stdio.h>
int main() {
    int a,b,temp1,temp2,temp,gcd,lcm;
    printf("enter two numbers");
    scanf("%d %d", &a,&b);
    temp1 = a;
    temp2 = b;
    while(b !=0){
        temp = b;
        b = a % b ;
        a = temp ;
    }
    gcd = a;
    lcm = (temp1*temp2)/gcd ;
    printf("lcm of this two number is %d",lcm);
    printf("gcd of this two number is %d",gcd);
   

}
