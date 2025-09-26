#include<stdio.h>
int main(){
    int a,fac=1;
    printf("Enter a number");
    scanf("%d",&a);
        for(int i=a;i>0;i--){
            fac=i * fac ;
                }
    
    printf("%d",fac);
    
}