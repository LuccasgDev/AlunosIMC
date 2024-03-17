#include <stdio.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

// Função para calcular o IMC
float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

// Função para recomendar exercícios com base no IMC
void recomendarExercicios(float imc) {
    printf("Recomendacao de exercicios:\n");
    if (imc < 18.5) {
        printf("IMC abaixo do peso: Recomenda-se exercicios de resistência e aumento de massa muscular.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("IMC normal: Recomenda-se manter uma rotina regular de exercicios.\n");
    } else if (imc >= 24.9 && imc < 29.9) {
        printf("IMC sobrepeso: Recomenda-se exercicios aerobicos e controle da dieta.\n");
    } else {
        printf("IMC obesidade: Recomenda-se consultar um profissional de saude para orientações específicas.\n");
    }
}

int main() {
    int n;
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    // Declaração das matrizes para armazenar informações dos alunos
    char nomes[MAX_ALUNOS][MAX_NOME];
    float pesos[MAX_ALUNOS];
    float alturas[MAX_ALUNOS];
    float imc[MAX_ALUNOS];

    // Obtendo os dados de cada aluno
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o peso do aluno %d (em kg): ", i + 1);
        scanf("%f", &pesos[i]);
        printf("Digite a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &alturas[i]);

        // Calculando o IMC do aluno
        imc[i] = calcularIMC(pesos[i], alturas[i]);
    }

    // Imprimindo os dados de cada aluno, incluindo o IMC e a recomendação de exercícios
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Peso: %.2f kg\n", pesos[i]);
        printf("Altura: %.2f m\n", alturas[i]);
        printf("IMC: %.2f\n", imc[i]);
        recomendarExercicios(imc[i]);
        printf("\n");
    }

    return 0;
}

//
// Created by lucas on 17/03/2024.
//
