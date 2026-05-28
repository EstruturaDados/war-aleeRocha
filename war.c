#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5

// Struct para armazenar dados de um território
struct Territorio {

    char nome[30];
    char cor[10];
    int tropas;

};

int main() {

    struct Territorio listaTerritorios[MAX_TERRITORIOS];

    printf("=================================\n");
    printf("  WAR - CADASTRO DE TERRITÓRIOS  \n");
    printf("=================================\n");


    // Loop de cadastro dos 5 territórios
    for (int i = 0; i < MAX_TERRITORIOS; i++) {

        printf("\n---  Cadastre o %dº território  ---\n", i + 1);

        printf("Digite o nome do território: ");
        fgets(listaTerritorios[i].nome, sizeof(listaTerritorios[i].nome), stdin);
        listaTerritorios[i].nome[strcspn(listaTerritorios[i].nome, "\n")] = '\0'; // Remove o '\n' do final da string lida

        printf("Digite a cor do território: ");
        fgets(listaTerritorios[i].cor, sizeof(listaTerritorios[i].cor), stdin);
        listaTerritorios[i].cor[strcspn(listaTerritorios[i].cor, "\n")] = '\0';

        printf("Digite a quantidade de tropas do território: ");
        scanf("%d", &listaTerritorios[i].tropas);
        getchar(); // Limpar o buffer do teclado para o próximo fgets
    }

    // Exibição dos territórios cadastrados
    printf("\n=================================\n");
    printf("      TERRITÓRIOS CADASTRADOS      \n");
    printf("\n=================================\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {

        printf("\nTerritório %d:\n", i + 1);
        printf(" Nome : %s\n", listaTerritorios[i].nome);
        printf(" Cor : %s\n", listaTerritorios[i].cor);
        printf(" Tropas : %d\n", listaTerritorios[i].tropas);
    }
    
    return 0;
}