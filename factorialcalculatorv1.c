#include <stdio.h>
#include <gmp.h>

int main() {
    int n;
    mpz_t result; // Usar mpz_t para variáveis de precisão arbitrária
    mpz_init(result); // Inicializar a variável result
    printf("Number: ");
    scanf("%d", &n);
    mpz_set_ui(result, 1); // Definir o valor inicial de result como 1
    for (int i = 1; i <= n; i++) {
        mpz_mul_ui(result, result, i); // Multiplicar result por i
    }
    gmp_printf("Result is %Zd\n", result); // Usar gmp_printf para imprimir o resultado
    mpz_clear(result); // Limpar a variável result
    return 0;
}

