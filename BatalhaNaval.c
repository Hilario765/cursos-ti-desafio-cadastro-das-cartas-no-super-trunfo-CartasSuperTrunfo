#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // Declaração e inicialização do tabuleiro
    // O tabuleiro é representado por uma matriz bidimensional 10x10,
    // inicializada com 'AGUA' (0).
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Definição das coordenadas iniciais dos navios
    // Navio 1: Horizontal
    // Começa na linha 2, coluna 3. Ocupará as colunas 3, 4 e 5 na linha 2.
    int navio1_linha_inicio = 2;
    int navio1_coluna_inicio = 3;

    // Navio 2: Vertical
    // Começa na linha 5, coluna 7. Ocupará as linhas 5, 6 e 7 na coluna 7.
    int navio2_linha_inicio = 5;
    int navio2_coluna_inicio = 7;

    // --- Posicionamento do Navio 1 (Horizontal) ---
    // Verifica se o navio horizontal está dentro dos limites do tabuleiro.
    // A linha inicial deve ser válida (entre 0 e TAMANHO_TABULEIRO - 1).
    // A coluna final (coluna inicial + tamanho do navio - 1) também deve ser válida.
    if (navio1_linha_inicio >= 0 && navio1_linha_inicio < TAMANHO_TABULEIRO &&
        navio1_coluna_inicio >= 0 && navio1_coluna_inicio + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {

        // Percorre as posições que o navio horizontal ocupará e as marca como 'NAVIO' (3).
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[navio1_linha_inicio][navio1_coluna_inicio + i] = NAVIO;
        }
    } else {
        printf("Erro: Navio 1 fora dos limites do tabuleiro!\n");
        return 1; // Indica erro
    }

    // --- Posicionamento do Navio 2 (Vertical) ---
    // Verifica se o navio vertical está dentro dos limites do tabuleiro.
    // A coluna inicial deve ser válida (entre 0 e TAMANHO_TABULEIRO - 1).
    // A linha final (linha inicial + tamanho do navio - 1) também deve ser válida.
    if (navio2_coluna_inicio >= 0 && navio2_coluna_inicio < TAMANHO_TABULEIRO &&
        navio2_linha_inicio >= 0 && navio2_linha_inicio + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {

        // Verifica se há sobreposição com o Navio 1.
        // Percorre as posições que o Navio 2 ocuparia. Se alguma posição
        // já estiver marcada como 'NAVIO' (3), significa que há sobreposição.
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[navio2_linha_inicio + i][navio2_coluna_inicio] == NAVIO) {
                printf("Erro: Sobreposicao de navios detectada!\n");
                return 1; // Indica erro
            }
        }

        // Se não houver sobreposição, marca as posições do Navio 2 como 'NAVIO' (3).
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[navio2_linha_inicio + i][navio2_coluna_inicio] = NAVIO;
        }
    } else {
        printf("Erro: Navio 2 fora dos limites do tabuleiro!\n");
        return 1; // Indica erro
    }

    // --- Exibição do Tabuleiro ---
    printf("Tabuleiro do Batalha Naval:\n\n");

    // Loop externo: itera sobre as linhas do tabuleiro.
    for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
        // Loop interno: itera sobre as colunas de cada linha.
        for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
            // Imprime o valor de cada célula do tabuleiro, seguido de um espaço
            // para melhor visualização.
            printf("%d ", tabuleiro[linha][coluna]);
        }
        // Após imprimir todas as colunas de uma linha, imprime uma quebra de linha
        // para passar para a próxima linha do tabuleiro.
        printf("\n");
    }

    return 0;
}
