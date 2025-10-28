// ...existing code...
#include <stdio.h>

/*
  Simulação simples de movimentos de peças de xadrez:
  - Torre: 5 casas para a direita (usa for)
  - Bispo: 5 casas na diagonal cima-direita (usa while)
  - Rainha: 8 casas para a esquerda (usa do-while)
  - Cavalo: movimento em "L" (2 para baixo, 1 para esquerda) usando loops aninhados
    - usa um for externo e um while interno (além de um for para o passo horizontal)
  
  Observações:
  - Valores das casas definidos em variáveis no código.
  - Apenas tipos inteiros e strings (char[]) são usados conforme solicitado.
*/

int main() {
    /* Configuração: número de casas a mover (definido no código) */
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    /* Configuração do Cavalo (movimento em L): 2 para baixo, 1 para esquerda */
    int casas_cavalo_vertical = 2;   /* duas casas para baixo */
    int casas_cavalo_horizontal = 1; /* uma casa para a esquerda */
    int movimentos_cavalo = 1;       /* quantos movimentos em 'L' executar (aqui 1) */

    /* Nomes das peças (strings apenas para clareza) */
    char nome_torre[] = "Torre";
    char nome_bispo[] = "Bispo";
    char nome_rainha[] = "Rainha";
    char nome_cavalo[] = "Cavalo";

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

    /* Separação visual antes do Cavalo */
    printf("\n");

    /* Cavalo: movimento em L (2 Baixo, 1 Esquerda).
       Requisitos: usar pelo menos dois loops aninhados, sendo um for.
       Implementação:
         - for externo itera o número de movimentos em L (movimentos_cavalo)
         - dentro do for há um while que imprime os passos verticais ("Baixo") (2 passos)
         - após o while, um for imprime os passos horizontais ("Esquerda") (1 passo)
       Comentários documentam a lógica e uso dos loops aninhados.
    */
    printf("%s - movimento:\n", nome_cavalo);
    for (int mov = 0; mov < movimentos_cavalo; mov++) {   /* loop for externo (obrigatório) */
        int passos_baixo = 0;
        /* loop while interno para os dois passos verticais */
        while (passos_baixo < casas_cavalo_vertical) {
            printf("Baixo\n");
            passos_baixo++;
        }
        /* loop for para o(s) passo(s) horizontais após os dois passos verticais */
        for (int passo_h = 0; passo_h < casas_cavalo_horizontal; passo_h++) {
            printf("Esquerda\n");
        }
        /* Se houvesse mais movimentos em L, o for externo repetiria o padrão. */
    }

    return 0;
}
// ...existing code...