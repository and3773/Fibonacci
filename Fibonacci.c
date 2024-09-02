#include <stdio.h>
#include <locale.h>


int isFibonacci(int num){

    if (num == 0 || num == 1){

        return 1;
    }

    int a = 0, b = 1;
    int fib = a + b;

    setlocale (LC_ALL, "Portuguese");

    while (fib <= num){

        if (fib == num){

            return 1;
        }

        a = b;
        b = fib;
        fib = a + b;
    }

    return 0;
}

int main(){

    int num;

    setlocale (LC_ALL, "Portuguese");

    printf("Informe um n�mero: ");
    scanf("%d", &num);

    if (isFibonacci(num)){

        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", num);
    }

    else{

        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }

    return 0;
}
