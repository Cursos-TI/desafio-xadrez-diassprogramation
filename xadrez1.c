// ...existing code...
#include <stdio.h>

/*
  Simulação simples de movimentos de peças de xadrez:
  - Torre: 5 casas para a direita (usa for)
  - Bispo: 5 casas na diagonal cima-direita (usa while)
  - Rainha: 8 casas para a esquerda (usa do-while)

  Observações:
  - Valores das casas definidos em variáveis no código.
  - Apenas tipos inteiros e strings (char[]) são usados conforme solicitado.
*/

int main() {
    /* Configuração: número de casas a mover (definido no código) */
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    /* Nomes das peças (strings apenas para clareza) */
    char nome_torre[] = "Torre";
    char nome_bispo[] = "Bispo";
    char nome_rainha[] = "Rainha";

    /* Torre: move-se em linha reta (horizontal ou vertical).
       Aqui simulamos 5 casas para a direita usando for. */
    printf("%s - movimento:\n", nome_torre);
    for (int passo = 0; passo < casas_torre; passo++) {
        printf("Direita\n");
    }

    printf("\n");

    /* Bispo: move-se na diagonal.
       Aqui simulamos 5 casas na diagonal Cima + Direita usando while.
       Imprime a combinação de direções por casa. */
    printf("%s - movimento:\n", nome_bispo);
    int passo_bispo = 0;
    while (passo_bispo < casas_bispo) {
        printf("Cima Direita\n");
        passo_bispo++;
    }

    printf("\n");

    /* Rainha: pode mover-se em todas as direções.
       Aqui simulamos 8 casas para a esquerda usando do-while. */
    printf("%s - movimento:\n", nome_rainha);
    int passo_rainha = 0;
    if (casas_rainha > 0) { /* garante execução consistente do do-while */
        do {
            printf("Esquerda\n");
            passo_rainha++;
        } while (passo_rainha < casas_rainha);
    }

    return 0;
}
// ...existing code...