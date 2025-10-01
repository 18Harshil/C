#include <stdio.h>
int main() {
    int a = 0, b = 1, temp, n;
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d  ", a);   
        temp = a + b;        
        a = b;               
        b = temp;
    }
    getch();
    return 0;
}
