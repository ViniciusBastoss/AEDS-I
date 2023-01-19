/*-------------------------------------------------------------
* UNIFAL - Universidade Federal de Alfenas.
* BACHARELADO EM CIENCIA DA COMPUTACAO.
* Atividade.: Opera¸c~oes Bit a Bit
* Disciplina: AEDs I / Programa¸c~ao Estruturada
* Professor.: Luiz Eduardo da Silva
* Aluno.....: Vinicius Bueno Bastos
* Data......:04/07/2020 
*-------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    unsigned int n ;
    scanf("%d",&n);
      int i,j, mask,mat[7][n];
    for(i=0;i<7;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    for (i=0;i<7;i++)
    { 
        printf("\n");
        for (j=0;j<n;j++)
        {
          for(mask = 0x80;mask;mask = mask >> 1)
            printf("%c",mask & mat[i][j] ? '*' : ' ');
          printf("%c",'  ');
        }
    
    }
    return (EXIT_SUCCESS);
}
