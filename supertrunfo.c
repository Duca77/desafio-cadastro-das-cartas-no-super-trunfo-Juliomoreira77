#include <stdio.h>
int main(){
    
    printf("Desafio Super Trunfo\n");
    

    char estado[20]; "Sergipe";
    char codigo[20]; "B02";
    char cidade[20]; "Aracaju";
    unsigned int populacao = 3000000; // População em habitantes                                                                     
    float area = 300.500; // Área em km²
    float PIB = 1000000.00; // PIB em bilhões de reais
    int pontos_turisticos = 45; // Número de pontos turísticos
    float densidade_populacional = 10.00; // Densidade populacional em habitantes por km² 
    float PIB_per_capita = 3.33; // PIB per capita em reais
    float super_poder = 4300558.33; // Super poder do estado em bilhões de reais
    
    printf("Digite o estado: ");
    scanf("%s", estado);
// O estado é uma string, então usamos %s para ler 

    printf("Digite o codigo: ");
    scanf("%s", codigo);
// O codigo é uma string, então usamos %s para ler letras e numeros

    printf("Digite a cidade: ");
    scanf("%s", cidade);
// A cidade é uma string, então usamos %s para ler do mesmo modo que o estado e o codigo

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
// A populacao é um inteiro, então usamos %d para ler 

    printf("Digite a area: ");
    scanf("%f", &area);
// A area é um float, então usamos %f para ler

    printf("Digite o PIB: ");
    scanf("%f", &PIB);
// O PIB é um float, então usamos %f para ler 

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
// Os pontos turisticos são um inteiro, então usamos %d para ler 
 
    printf("Digite a densidade populacional: ");
    scanf("%f", &densidade_populacional);
    
    printf("Digite o PIB per capita: ");    
    scanf("%f", &PIB_per_capita);

    int resultado_populacaocarta1 = 4000000;
    int resultado_populacaocarta2 = 3000000;
    printf("Resultado da carta que venceu a população: %d\n", resultado_populacaocarta1 > resultado_populacaocarta2 ? resultado_populacaocarta1 : resultado_populacaocarta2);
    
    float resultado_areacarta1 = 300.800;
    float resultado_areacarta2 = 300.500;
    printf("Resultado da carta que venceu a área: %.3f\n", resultado_areacarta1 > resultado_areacarta2 ? resultado_areacarta1 : resultado_areacarta2);
     
    float resultado_PIBcarta1 = 200.000;
    float resultado_PIBcarta2 = 1000000.00; 
    printf("Resultado da carta que venceu o PIB: %.3f\n", resultado_PIBcarta1 > resultado_PIBcarta2 ? resultado_PIBcarta1 : resultado_PIBcarta2);

    int resultado_pontoscarta1 = 52;
    int resultado_pontoscarta2 = 45;
    printf("Resultado da carta que venceu os pontos turísticos: %d\n", resultado_pontoscarta1 > resultado_pontoscarta2 ? resultado_pontoscarta1 : resultado_pontoscarta2);

    float resultado_densidadecarta1 = 13.33;
    float resultado_densidadecarta2 = 10.00; 
    printf("Resultado da carta que venceu a densidade populacional: %.2f\n", resultado_densidadecarta1 > resultado_densidadecarta2 ? resultado_densidadecarta1 : resultado_densidadecarta2);
    
    float resultado_PIBpercapitacarta1 = 50.000;
    float resultado_PIBpercapitacarta2 = 3.33;
    printf("Resultado da carta que venceu o PIB per capita: %.3f\n", resultado_PIBpercapitacarta1 > resultado_PIBpercapitacarta2 ? resultado_PIBpercapitacarta1 : resultado_PIBpercapitacarta2);
    
    return 0;
    
     
}
