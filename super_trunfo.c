#include <stdio.h>
#include <string.h>

int main(){
    // variables Card A: 
    char state_CardA; 
    char code_CardA[5]; 
    char city_CardA[50];
    int population_CardA; 
    float area_CardA; 
    float PIB_CardA; 
    int sights_CardA; 

    // variables Card B: 
    char state_CardB; 
    char code_CardB[5]; 
    char city_CardB[50];
    int population_CardB; 
    float area_CardB; 
    float PIB_CardB; 
    int sights_CardB; 


    //intro:
    printf("Bem-vindo ao super trunfo, vamos criar a sua primeira carta!\n\n");

    //Create Card A:
    printf("Digite uma letra de A a H representando um dos oito estados: "); 
    scanf("%c", &state_CardA); 

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: A01, B02): ");
    scanf("%4s", code_CardA); 
    getchar(); //remove /n from the start buffer
    
    printf("Digite o nome da cidade: "); 
    fgets(city_CardA, 50, stdin); 

    city_CardA[strcspn(city_CardA, "\n")] = 0;  //Removing space from next line

    printf("Digite o número de habitantes da cidade: "); 
    scanf("%d", &population_CardA); 

    printf("Digite a área da cidade em quilômetros quadrados: "); 
    scanf("%f", &area_CardA);

    printf("Digite o PIB da cidade: "); 
    scanf("%f", &PIB_CardA);

    printf("Digite a quantidade de pontos turísticos na cidade: "); 
    scanf("%i", &sights_CardA);
    getchar(); //remove /n from the start buffer

    //Congratulatory message A
    printf("\nParabéns você criou a sua primeira carta dentro do game, aqui está ela:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", state_CardA);
    printf("Código: %s\n", code_CardA);
    printf("Cidade: %s\n", city_CardA);
    printf("População: %i\n", population_CardA);
    printf("Área: %f km²\n", area_CardA);
    printf("PIB: %.2f bilhões de reais\n", PIB_CardA);
    printf("Número de Pontos Turísticos: %i\n", sights_CardA);
    
    //Next step:
    printf("\nAgora vamos para o registro da segunda carta:\n\n");
    
    //Create Card B:
    printf("Digite uma letra de A a H representando um dos oito estados: "); 
    scanf("%c", &state_CardB); 

    printf("Digite a letra do estado seguida de um número de 01 a 04(ex: A01, B02): ");
    scanf("%4s", code_CardB); 
    getchar(); //remove /n from the start buffer

    printf("Digite o nome da cidade: "); 
    fgets(city_CardB, 50, stdin); 

    city_CardB[strcspn(city_CardB, "\n")] = 0; //Removing space from next line
 
    printf("Digite o número de habitantes da cidade: "); 
    scanf("%i", &population_CardB); 

    printf("Digite a área da cidade em quilômetros quadrados: "); 
    scanf("%f", &area_CardB);

    printf("Digite o PIB da cidade: "); 
    scanf("%f", &PIB_CardB);

    printf("Digite a quantidade de pontos turísticos na cidade: "); 
    scanf("%i", &sights_CardB);
    
    //Congratulatory message B
    printf("\nParabéns você criou o seu deck no jogo trunfo, aqui está a sua segunda carta:\n\n"); 

    printf("Carta 2:\n");
    printf("Estado: %c\n", state_CardB);
    printf("Código: %s\n", code_CardB);
    printf("Cidade: %s\n", city_CardB);
    printf("População: %i\n", population_CardB);
    printf("Área: %f km²\n", area_CardB);
    printf("PIB: %.2f bilhões de reais\n", PIB_CardB);
    printf("Número de Pontos Turísticos: %i\n", sights_CardB);

    return 0; 
}