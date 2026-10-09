#include <stdio.h>
#include <stdlib.h>

int main()
{
     char resposta;

    printf("Voce deseja continuar? (S/N): ");
    scanf(" %c", &resposta); // O espaço antes de %c limpa o buffer do teclado

    if (resposta == 'S' || resposta == 's') {
        printf("\nVoce escolheu: SIM\n");
        // Coloque aqui o codigo para o caso de SIM
    }
    else if (resposta == 'N' || resposta == 'n') {
        printf("\nVoce escolheu: NAO\n");
        // Coloque aqui o codigo para o caso de NAO
    }
    else {
        printf("\nOpcao invalida. Digite apenas S ou N.\n");
    }
    return 0;
}
