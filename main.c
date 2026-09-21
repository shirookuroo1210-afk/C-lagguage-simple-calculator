#include <stdio.h>
void kalkulator() 
{
    int a, b;
    char operator;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Operator tidak valid.\n");
    }
}
int main()
{
    kalkulator();
    return 0;
}
//code written by lyvo
