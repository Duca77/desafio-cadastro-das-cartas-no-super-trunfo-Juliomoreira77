#include <stdio.h>
int main(){
    
    printf("Desafio Super Trunfo\n");
    

    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;

    printf("Digite o estado: ");
    scanf("%s", estado);
// O estado é uma string, então usamos %s para ler 
    printf("Digite o codigo: ");
    scanf("%s", codigo);
// O codigo é uma string composta por letras e números, então usamos %s para ler também 
    printf("Digite a cidade: ");
    scanf("%s", cidade);
// A cidade é uma string, então usamos %s para ler do mesmo modo   
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
// A populacao é um inteiro, então usamos %d para ler 
    printf("Digite a area: ");
    scanf("%f", &area);
// A area é um float, então usamos %f para ler
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
// O PIB é um float, então usamos %f para ler também 
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
// Os pontos turisticos são um inteiro, então usamos %d para ler também 
    return 0;
    
     
}
