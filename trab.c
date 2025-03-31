#include <stdio.h>

// 1. Verifica se o numero e par ou impar
void verificarParImpar() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("O numero %d e par.\n", num);
    else
        printf("O numero %d e impar.\n", num);
}

// 2. Verifica se o numero e positivo, negativo ou zero
void verificarPositivoNegativo() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num > 0)
        printf("O numero e positivo.\n");
    else if (num < 0)
        printf("O numero e negativo.\n");
    else
        printf("O numero e zero.\n");
}

// 3. Verifica se a letra e vogal ou consoante
void verificarVogalConsoante() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        printf("A letra %c e uma vogal.\n", letra);
    else
        printf("A letra %c e uma consoante.\n", letra);
}

// 4. Calcula o total da compra e frete
void calcularCompra() {
    int quantidade, regiao;
    float total, frete, preco = 5.00;
    printf("Informe a quantidade de itens (max 100): ");
    scanf("%d", &quantidade);
    if (quantidade < 1 || quantidade > 100) {
        printf("Quantidade invalida!\n");
        return;
    }
    printf("Codigo da regiao (1-Norte, 2-Nordeste, 3-Centro-Oeste, 4-Sudeste, 5-Sul): ");
    scanf("%d", &regiao);
    total = quantidade * preco;
    switch (regiao) {
        case 1: frete = total * 0.10; break;
        case 2: frete = total * 0.08; break;
        case 3: frete = total * 0.12; break;
        case 4: frete = total * 0.15; break;
        case 5: frete = total * 0.11; break;
        default: printf("Regiao invalida!\n"); return;
    }
    printf("Total sem frete: R$%.2f\n", total);
    printf("Total com frete: R$%.2f\n", total + frete);
}

// 6. Mostra multiplos de 5 ate 500
void mostrarMultiplosDe5() {
    printf("Multiplos de 5 entre 1 e 500:\n");
    for (int i = 5; i <= 500; i += 5)
        printf("%d ", i);
    printf("\n");
}

// 7. Le 10 numeros, mostra a metade e calcula a media
void calcularMetadeEMedia() {
    float num, soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &num);
        printf("Metade: %.2f\n", num / 2);
        soma += num;
    }
    printf("Media: %.2f\n", soma / 10);
}

// 8. Tabela de conversao de polegadas para centimetros
void tabelaPolegadasParaCm() {
    float inicio, fim;
    printf("Informe o intervalo (inicial e final em polegadas): ");
    scanf("%f %f", &inicio, &fim);
    printf("Polegadas | Centimetros\n");
    for (float i = inicio; i <= fim; i++)
        printf("%.2f in  |  %.2f cm\n", i, i * 2.54);
}

// 10. Identifica o maior numero entre n fornecidos
void identificarMaiorNumero() {
    int n, num, maior;
    printf("Quantos numeros deseja comparar? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Quantidade invalida!\n");
        return;
    }
    printf("Digite um numero: ");
    scanf("%d", &maior);
    for (int i = 1; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > maior)
            maior = num;
    }
    printf("O maior numero e: %d\n", maior);
}

// 11. Calcula anos para cidade B ultrapassar cidade A
void calcularCrescimentoPopulacional() {
    int anos = 0;
    double populacaoA = 90000, populacaoB = 50000;
    while (populacaoB <= populacaoA) {
        populacaoA *= 1.009;
        populacaoB *= 1.015;
        anos++;
    }
    printf("Serao necessarios %d anos para a cidade B ter mais habitantes que a cidade A.\n", anos);
}

int main() {
    verificarParImpar();
    verificarPositivoNegativo();
    verificarVogalConsoante();
    calcularCompra();
    mostrarMultiplosDe5();
    calcularMetadeEMedia();
    tabelaPolegadasParaCm();
    identificarMaiorNumero();
    calcularCrescimentoPopulacional();
    return 0;
}
