/*-------------------------------------------------------------
*       UNIFAL - Universidade Federal de Alfenas.
*         BACHARELADO EM CIENCIA DA COMPUTACAO.
* Atividade.: Percurso em matrizes
* Disciplina: AEDs I / Programa¸c~ao Estruturada
* Professor.: Luiz Eduardo da Silva
* Aluno.....: Vinicius Bueno Bastos
* Data......: 26/08/2020
*-------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int N, i, j;
    int mat[100][100];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &mat[i][j]);

    if (N > 0) {
        printf("%d ", mat[0][0]);
        j = i = 0;
        while (i != N - 1 || j != N - 1 && i + j) {
            if (j + 1 < N) {
                ++j;
                printf("%d ", mat[i][j]);

            } else {
                ++i;
                printf("%d ", mat[i][j]);

            }
            while (i + 1 < N && j - 1 >= 0) { //descer diagonal
                --j;
                ++i;
                printf("%d ", mat[i][j]);
            }
            if (i + 1 < N) {
                ++i;
                printf("%d ", mat[i][j]);
            }
            else {
                ++j;
                printf("%d ", mat[i][j]);
            }
            while (j + 1 < N && i - 1 >= 0) { //subir diagonal
                --i;
                ++j;
                printf("%d ", mat[i][j]);
            }
        }
    }


    return (EXIT_SUCCESS);
}

