#include <stdio.h>

/* programma che legge i valori di due matrici di elementi di tipo int e
 * ne calcola e visualizza il prodotto matriciale */
int main() {
      int righe1, colonne1;            // dimensione matrice1
      int righe2, colonne2;             // dimensione matrice2

      /* leggi dimensioni e crea matrice */
      printf("Quante righe ha la matrice 1?");
      scanf("%d", &righe1);
      printf("Quante colonne ha la matrice 1?");
      scanf("%d", &colonne1);
      int matrice1[righe1][colonne1];
      righe2 = colonne1;
      printf("La matrice 2 ha %d righe. Quante colonne ha?", righe2);
      scanf("%d", &colonne2);
      int matrice2[righe2][colonne2];

      /* leggi i valori della matrice 1, uno alla volta */
      printf("\nRiempiamo la matrice 1!\n");
      for(int i=0; i<righe1; i++)
            for(int j=0; j<colonne1; j++) {
                  printf("Introduci l'elemento con indice di riga %d ed indice di colonna %d: ", i, j);
                  scanf("%d", &matrice1[i][j]);
            }
      /* leggi i valori della matrice2, uno alla volta */
      printf("\nRiempiamo la matrice 2!\n");
      for(int i=0; i<righe2; i++)
            for(int j=0; j<colonne2; j++) {
                  printf("Introduci l'elemento con indice di riga %d ed indice di colonna %d: ", i, j);
                  scanf("%d", &matrice2[i][j]);
            }

      /* la matrice risultato ha dimensione righe1 x colonne2 */
      int prodotto[righe1][colonne2];

      /* guarda tutti gli elementi della matrice risultato */
      for(int i=0; i<righe1; i++)
            for(int j=0; j<colonne2; j++) {
              /* l'elemento con indici i,j e' pari al prodotto scalare fra la riga i
               * di matrice1 e la colonna j della matrice2 */
               prodotto[i][j]=0;
               for(int k=0; k<righe2; k++)
                     prodotto[i][j]+=matrice1[i][k]*matrice2[k][j];
            }

      /* visualizza la matrice risultato */
      printf("\nIl prodotto fra la matrice\n\n");
      for(int i=0; i<righe1; i++) {
            for(int j=0; j<colonne1; j++)
                  printf("%5d", matrice1[i][j]);
            printf("\n");
      }
      printf("\ne la matrice\n\n");
      for(int i=0; i<righe2; i++) {
            for(int j=0; j<colonne2; j++)
                  printf("%5d", matrice2[i][j]);
            printf("\n");
      }
      printf("\nvale\n\n");
      for(int i=0; i<righe1; i++) {
            for(int j=0; j<colonne2; j++)
                  printf("%5d", prodotto[i][j]);
            printf("\n");
            system("PAUSE");
      }
}
