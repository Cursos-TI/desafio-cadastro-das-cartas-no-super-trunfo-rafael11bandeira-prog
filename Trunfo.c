#include <stdio.h>

int main() {
    
                //Estrutara das cartas//
    char Estado2 [4];
    char Codigo2 [10];
    char Cidade2 [20];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
   
    char Estado1 [4];
    char Codigo [10];
    char Cidade [20];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

              //Inicio do programa//
    printf("Bem vindo ao SUPER TRUNFO de estados brasileiros\n");

    printf("Escola um estado na lista abaixo para comparar: \n");
    printf("1 - Acre\n");
    printf("2 - Alagoas\n");
    printf("3 - Pernambuco\n");

    scanf("%s", &Estado1);
    printf("Voce escolheu o primeiro estado %s\n"), Estado1;

    printf("Agora escolha outro estado para comparar: (ESCREVA O NOME) \n");
    printf("1 - Acre\n");
    printf("2 - Alagoas\n");
    printf("3 - Pernambuco\n");

    scanf("%s", &Estado2);
    printf("Voce escolheu o segundo estado %s\n") , Estado2;

    printf("Agora vamos comparar os estados\n");
             
             //Cadastro do primeiro estado//

    printf("Digite o codigo do estado %s: \n", Estado1);
    scanf("%s", &Codigo);
    printf("Digite a populacao do estado %s: \n", Estado1);
    scanf("%d", &Populacao);
    printf("Digite a area do estado %s: \n", Estado1);
    scanf("%f", &Area);
    printf("Digite o PIB do estado %s: \n", Estado1);
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos do estado %s: \n", Estado1);
    scanf("%d", &PontosTuristicos);

                //Cadastro do segundo estado//

    printf("INFORMACOES DO SEGUNDO ESTADO\n\n");

    printf("Digite o codigo do estado %s: \n", Estado2);
    scanf("%s", &Codigo2);
    printf("Digite a populacao do estado %s: \n", Estado2);
    scanf("%d", &Populacao2);
    printf("Digite a area do estado %s: \n", Estado2);
    scanf("%f", &Area2);
    printf("Digite o PIB do estado %s: \n", Estado2);
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turisticos do estado %s: \n", Estado2);
    scanf("%d", &PontosTuristicos2);

                //Resultado da comparacao//
    printf("!!RESULTADO DA COMPARACAO ENTRE OS ESTADOS!!\n\n");
    printf("PRIMEIRO ESTADO: %s \n Codigo: %s\n Populacao: %d\n Area: %.2f\n PIB: %.2f\n Pontos Turisticos: %d\n\n", Estado1, Codigo, Populacao, Area, PIB, PontosTuristicos);
    printf("SEGUNDO ESTADO: %s \n Codigo: %s\n Populacao: %d\n Area: %.2f\n PIB: %.2f\n Pontos Turisticos: %d\n", Estado2, Codigo2, Populacao2, Area2, PIB2, PontosTuristicos2);

               //Comparacao dos estados//
        printf("Comparando a populacao dos estados...\n");
    if (Populacao > Populacao2){
        printf("O estado %s tem a maior populacao com %d habitantes\n", Estado1, Populacao);
    } else {
        printf("O estado %s tem a maior populacao com %d habitantes\n", Estado2, Populacao2);
    }
        printf("Comparando a area dos estados...\n");
    if (Area > Area2){ 
        printf("O estado %s tem a maior area com %.2f km²\n", Estado1, Area);
    } else {
        printf("O estado %s tem a maior area com %.2f km²\n", Estado2, Area2);
    }
        printf("Comparando o PIB dos estados...\n");
    if (PIB > PIB2){
        printf("O estado %s tem o maior PIB com %.2f\n", Estado1, PIB);
    } else {
        printf("O estado %s tem o maior PIB com %.2f\n", Estado2, PIB2);
    }
        printf("Comparando os pontos turisticos dos estados...\n");
    if (PontosTuristicos > PontosTuristicos2){
        printf("O estado %s tem a maior quantidade de pontos turisticos com %d\n", Estado1, PontosTuristicos);
    } else {
        printf("O estado %s tem a maior quantidade de pontos turisticos com %d\n", Estado2, PontosTuristicos2);
    }
    return 0;
}
  
