#include <stdio.h>

#define tam 10
#define tam_navio 3
#define agua 0
#define navio 3

int main() {
    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

  char linha[tam] = {'A', 'B','C','D','E','F','G','H','I','J'};
  int tabuleiro [tam][tam];

  int navio_horizontal[tam_navio] = {navio, navio, navio};
  int navio_vertical[tam_navio] = {navio,navio,navio};
  int navio_diag1[tam_navio] = {navio, navio, navio};
  int navio_diag2[tam_navio] = {navio,navio,navio};

  int i,j;
  int sobrepoe;

  for (i=0; i < tam; i++) {
    for(j = 0; j < tam; j++) {
        tabuleiro[i][j] = agua;
    }
  }
  
    int linha_navio_h = 2;
    int coluna_navio_h = 1;

    int linha_navio_v = 5;
    int oluna_navio_v = 7;

    int inicio_diag1 = 4;

    int inicio_diag2_linha = 0;

    if (linha_navio_h >= 0 && linha_navio_h < tam && coluna_navio_h >= 0 && coluna_navio_h + tam_navio - 1 < tam){
        sobrepoe = 0;
        for (j = 0; j < tam_navio; j++) {
            if (tabuleiro [linha_navio_h]
            [coluna_navio_h + j] != agua) {
                sobrepoe = 1;
                break;
            }
        }
        if (!sobrepoe) {
            for (j = 0; j < tam_navio; j++){
                tabuleiro[linha_navio_h]
                [coluna_navio_h + j] = navio_horizontal[j];
            }
        }
    }
   



    return 0;
}
