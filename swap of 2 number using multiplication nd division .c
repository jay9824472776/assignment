#include <stdio.h>

int main() {
    int num1, num2, num3,num4,num5;

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    num3 = num1 * num2;
	printf("multiplication:%d", num3);
	scanf("%d", &num3);
    num4 = num1 / num2; 
    printf("division:%d",num4);
    scanf("%d", &num4);
    num5 = num1 / num2; 
    printf("swap:%d", num5);
    scanf("%d", &num5);
    return 0;
}

