#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void data_hora(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Agora: %d-%02d-%02d %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour - 3, tm.tm_min, tm.tm_sec);
}

void potencia(int a, int b) {
    printf("%d^%d = %f\n", a, b, pow(a, b));
}

void divide(int a, int b) {
    if (b == 0){
        printf("Divisões por 0 não são permitidas!\n");
    }
    else {
        printf("%d/%d = %d\n", a, b, a/b);
    }
}

void subtrai(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

void raiz_quadrada(double num) {
    if (num < 0) {
        printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        printf("Raiz quadrada de %.2f = %.2f\n", num, sqrt(num));
    }
}

int main() {
    data_hora();
    char nome[80];
    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Ola estudante %s.\n", nome);

    soma(5, 3);
    divide(6, 3);
    divide(6, 0);
    subtrai(5, 3);

    double numero;
    printf("Insira um número para calcular a raiz quadrada: ");
    scanf("%lf", &numero);
    raiz_quadrada(numero);

    return 0;
}

