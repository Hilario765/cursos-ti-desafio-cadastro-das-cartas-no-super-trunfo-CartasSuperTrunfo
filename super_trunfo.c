#include <stdio.h>

// Define uma estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;            // Estado da carta (A-H)
    char codigo[5];         // Código da carta (ex: A01)
    char nomeCidade[50];    // Nome da cidade
    int populacao;          // Número de habitantes
    float area;             // Área da cidade em km²
    float pib;              // Produto Interno Bruto
    int pontosTuristicos;   // Número de pontos turísticos
} CartaSuperTrunfo;

int main() {
    // Declara duas variáveis do tipo CartaSuperTrunfo
    CartaSuperTrunfo carta1, carta2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta1.estado); // O espaço antes de %c ignora espaços em branco pendentes

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo); // Lê o código da carta como string

    printf("Digite o Nome da Cidade: ");
    // Usa getchar() para limpar o buffer e depois scanf para ler o nome da cidade com espaços
    while (getchar() != '\n'); // Limpa o buffer de entrada
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    // Remove o caractere de nova linha que fgets pode adicionar
    for (int i = 0; carta1.nomeCidade[i] != '\0'; i++) {
        if (carta1.nomeCidade[i] == '\n') {
            carta1.nomeCidade[i] = '\0';
            break;
        }
    }

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // --- Limpeza do buffer para a próxima leitura ---
    while (getchar() != '\n');

    printf("\n"); // Linha em branco para separar as seções

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Digite o Nome da Cidade: ");
    while (getchar() != '\n'); // Limpa o buffer de entrada
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    // Remove o caractere de nova linha que fgets pode adicionar
    for (int i = 0; carta2.nomeCidade[i] != '\0'; i++) {
        if (carta2.nomeCidade[i] == '\n') {
            carta2.nomeCidade[i] = '\0';
            break;
        }
    }

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // --- Exibição das Informações ---
    printf("\n\n=== Informações Cadastradas ===\n\n");

    // Exibe informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area); // Formata a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", carta1.pib); // Formata o PIB com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n"); // Linha em branco para separar as cartas

    // Exibe informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0; // Indica que o programa foi executado com sucesso
}
