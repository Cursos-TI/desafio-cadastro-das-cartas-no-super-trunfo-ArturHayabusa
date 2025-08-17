#include <stdio.h>

int main() {
   //Carta 1
    int populacao1, pontost1;
    float pib1, area1;
    char nome1[20], estado1[2], codigo1[4];
   //Carta 2
    int populacao2, pontost2;
    float pib2, area2;
    char nome2[20], estado2[2], codigo2[4];

        //especificações da carta 1

        printf("Estabelecendo parametros para carta numero 1\n");

        printf("Digite o Estado da cidade: \n");
            scanf("%s", estado1);
        
        printf("Digite o Codigo da carta(eg:ES01, SP23): \n");
            scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
            scanf("%s", nome1);

        printf("Digite a população do Estado(em numeros): \n");
            scanf("%d", &populacao1);

        printf("Digite a área do estado em km²: \n");
            scanf("%f", &area1);

          printf("Digite o PIB do Estado(em Bilhões): \n");
            scanf("%f", &pib1);

        printf("Digite o number de Pontos Turisticos: \n");
            scanf("%d", &pontost1);
        
     // Descrição Carta 1

    printf("Carta 1:\n");
    printf("Estado: %s \n", estado1 );
    printf("Código: %s \n", codigo1 );
    printf("Nome da Cidade %s \n", nome1 );
    printf("População: %d \n", populacao1 );
    printf("Área: %f km² \n", area1 );
    printf("Pib: %f bilhoes de reais. \n", pib1);
    printf("Pontos turisticos: %d \n", pontost1);
            
     printf("Carta 1 estabelecida.\n ------------------------\n Iniciando carta 2\n");
        
       // Especificações da carta 2
        printf("Digite o Estado da cidade: ");
            scanf("%s", estado2);
        printf("Digite o Codigo da carta(eg:ES01, SP23):");
            scanf("%s", codigo2);
        printf("Digite o nome da cidade: ");
            scanf("%s", nome2);
        printf("Digite o PIB do Estado(em Bilhões): ");
            scanf("%f", &pib2);
        printf("Digite a população do Estado(em numeros): ");
            scanf("%d", &populacao2);
        printf("Digite a área do estado em km²: ");
            scanf("%f", &area2);
        printf("Digite o number de Pontos Turisticos: ");
            scanf("%d", &pontost2);

     printf("carta 2 estabelecida.\n ");



// Descrição Carta 2

    printf("Carta 2:\n");
    printf("Estado: %s \n", estado2 );
    printf("Código: %s \n", codigo2 );
    printf("Nome da Cidade: %s \n", nome2 );
    printf("População: %d \n", populacao2 );
    printf("Área: %f km² \n", area2 );
    printf("Pib: %f bilhoes de reais. \n", pib2);
    printf("Pontos turisticos: %d \n", pontost2);







    return 0;
}