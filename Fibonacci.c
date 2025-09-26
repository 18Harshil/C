#include<stdio.h>
int main()
{
    int n,a=0,b=1,temp;
    printf("Enter number for Fibonacci series");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
       if(i==0){
        printf("%d  ",i);
   }
        else if (i == 1){
            printf("%d  ",i);
        }
        temp = a+b;
        printf("%d  ",temp);
        a = b ;
        b = temp ;

        
    }

}