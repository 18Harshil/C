#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is the largest");
        }
        else{
            printf("c is the largest");
        }
    } else{
        if(b>c){
            printf("b is the greatest");
        }
        else{
            printf("c is the greatest");
        }
    }
}