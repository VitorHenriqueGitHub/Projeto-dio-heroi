#include<stdio.h>
#include<string.h>

/**
Programa feito por: Vitor Henrique Nascimento Almeida
Para o 1° desafio de projeto do curso de introdução a lógica de programação 
**/

void digite(char nomeHeroi[][50], int xp[], int *quant){
	int i=0;
    printf("Digite a quantidade de herois: ");
    scanf("%d", quant);
    getchar();
    
    for(i = 0; i < *quant; i++){
        printf("Digite o nome do heroi %d: ", i + 1);
        fgets(nomeHeroi[i], 50, stdin);
        
        nomeHeroi[i][strcspn(nomeHeroi[i], "\n")] = '\0';

        printf("Digite a quantidade de XP do %s: ", nomeHeroi[i]);
        scanf("%d", &xp[i]);
        getchar();
    }
}

void verifica(int xp, char nivel[]){
    if(xp < 1000){
        strcpy(nivel, "Ferro");
    }
    else if(xp >= 1000 && xp <= 2000){
        strcpy(nivel, "Bronze");
    }
    else if(xp >= 2000 && xp <= 5000){
        strcpy(nivel, "Prata");
    }
    else if(xp >= 5000 && xp <= 7000){
        strcpy(nivel, "Ouro");
    }
    else if(xp >= 7000 && xp <= 8000){
        strcpy(nivel, "Platina Diamante");
    }
    else if(xp >= 8000 && xp <= 9000){
        strcpy(nivel, "Ascendente");
    }
    else if(xp >= 9000 && xp <= 10000){
        strcpy(nivel, "Imortal");
    }
    else if(xp > 10000){
        strcpy(nivel, "Radiante");
    }
}

void exibe(char nomeHeroi[][50], int xp[], int quant){
	int i=0;
    char nivel[50];
    for(i = 0; i < quant; i++){
        verifica(xp[i], nivel);
        printf("O heroi %s possui o nível %s\n", nomeHeroi[i], nivel);
    }
}

int main(){
    char nomeHeroi[50][50];
    int xp[50];
    int quant;
    
    digite(nomeHeroi, xp, &quant);
    exibe(nomeHeroi, xp, quant);
    
    return 0;
}
