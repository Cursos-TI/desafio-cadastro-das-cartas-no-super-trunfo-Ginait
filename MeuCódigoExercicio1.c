#include <stdio.h>

int main () {

    //* Abaixo ficam definidas as váriaveis utilizadas no desafio, sendo os valores de "A" definidos como (vaiavel+A) e os valores de "B" definidos como (variavel+B).*//

    int _populacaoA, _turisticoA, _populacaoB, _turisticoB;
    char _estadoA[50], _codigoA[50], _cidadeA[50], _estadoB[50], _codigoB[50], _cidadeB[50];
    float _areaA, _pibA, _areaB, _pibB;

        //* Aqui fica um pequeno gancho, a fim de chamar atenção do usuário e providenciar algumas intruções básicas de preenchimento das cartas*//

        printf ("Olá, nesta tela você fará o cadastro das informações de duas cartas de Super Trunfo\n");
        printf ("Por favor, siga com atenção as instruções e no final as cartas cadastradas serão exibidas!\n");
        printf ("Tudo certo? Aperte a tecla Enter para começarmos!\n");
        scanf ("%c");

            //*Início do cadastro das cartas, começando pela carta A*//

            printf( "Começaremos preenchendo as informações da Carta A\n");
            printf ("Insira o Nome do Estado:\n");
            fgets (_estadoA, 50, stdin);

            printf ("insira o Código a ser atribuído a este estado:\n");
            fgets (_codigoA, 50, stdin);

            printf ("Insira o Nome de uma Cidade do Estado de %s\n", _estadoA);
            fgets (_cidadeA, 50, stdin);

            printf ("Insira a População total da Cidade %s\n", _cidadeA);
            scanf ("%d", &_populacaoA);

            printf ("Agora, insira a área da Cidade %s\n", _cidadeA);
            scanf ("%f", &_areaA);

            printf ("Digite o PIB da Cidade %s\n", _cidadeA);
            scanf ("%f", &_pibA);

            printf ("Por fim, digite o número de pontos turísticos da Cidade %s \n", _cidadeA);
            scanf ("%d", &_turisticoA);

        printf ("Muito bem, agora vamos prosseguir para o cadastro da carta B\n");
        scanf ("%c");

            //*Início do cadastro da Carta B*//

            printf ("Insira o Nome do Estado:\n");
            fgets (_estadoB, 50, stdin);

            printf ("insira o Código a ser atribuído a este estado:\n");
            fgets (_codigoB, 50, stdin);

            printf ("Insira o Nome de uma Cidade do Estado de %s:\n", _estadoB);
            fgets (_cidadeB, 50, stdin);

            printf ("Insira a População total da Cidade %s:\n", _cidadeB);
            scanf ("%d", &_populacaoB);

            printf ("Agora, insira a área da Cidade %s:\n", _cidadeB);
            scanf ("%f", &_areaB);

            printf ("Digite o PIB da Cidade %s:\n", _cidadeB);
            scanf ("%f", &_pibB);

            printf ("Por fim, digite o número de pontos turísticos da Cidade %s\n", _cidadeB);
            scanf ("%d", &_turisticoB);

                /*Aqui finalizamos mostrando as informações cadastradas nas Cartas A e B, de acordo com as solicitações anteriores*/

                printf ("Abaixo, estão as cartas cadastradas de acordo com as informações providenciadas:\n");

                printf ("Carta A\n");
                printf ("Estado: %s\n", _estadoA);
                printf ("Código: %s\n", _codigoA);
                printf ("Nome da Cidade: %s\n", _cidadeA);
                printf ("População: %d\n", _populacaoA);
                printf ("Área: %f\n", _areaA);
                printf ("PIB: %f\n", _pibA);
                printf ("Número de Pontos Turísticos: %d\n", _turisticoA);

                printf ("Carta B\n");
                printf ("Estado: %s\n", _estadoB);
                printf ("Código: %s\n", _codigoB);
                printf ("Nome da Cidade: %s\n", _cidadeB);
                printf ("População: %d\n", _populacaoB);
                printf ("Área: %f\n", _areaB);
                printf ("PIB: %f\n", _pibB);
                printf ("Número de Pontos Turísticos: %d\n", _turisticoB);


return 0;

}
