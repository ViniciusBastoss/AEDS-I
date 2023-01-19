/*-------------------------------------------------------------
* UNIFAL - Universidade Federal de Alfenas.
* BACHARELADO EM CIENCIA DA COMPUTACAO.
* Atividade.: Strings e fun¸c~oes
* Disciplina: AEDs I / Programa¸c~ao Estruturada
* Professor.: Luiz Eduardo da Silva
* Aluno.....: Vinicius Bueno Bastos
* Data......: 22/09/2020
*-------------------------------------------------------------*/

#include <stdio.h>

int tamanho(char *linha)
{
    int i;
    for(i=0;linha[i];i++){
    }
   return  i;
}

int contaSubstring (char *substr ,char *linha)
{
  int i,a,j,cont = 0;
  for(i=0;linha[i];i++)
  {
      a=i;
    for(j=0;substr[j] == linha[a] && substr[j];j++)
        a++;
      if(substr[j] == '\0')
          cont++;
  } 
  return cont;
  }

void reversa(char *linha)
{
    int i,j;
    char aux;
    j = tamanho(linha)-1;
    for(i=0;i < j;i++)
    {    
    aux = linha[j];
    linha[j] = linha [i];
    linha[i] = aux;
    --j;
    }
}
  


int main() {
    int conta, numLinha = 0;
    char linha[100] , substring[20];
    fgets (substring, 18, stdin);
    substring[tamanho(substring)-1] = 0;
    do
    {
        fgets(linha, 98, stdin);
        linha [tamanho(linha) - 1] = 0;
        if (linha[0])
        {
          conta = contaSubstring(substring, linha);
          printf("\'%s\' ocorreu %d vez(es) na linha %d\n",substring, conta, ++numLinha);
          reversa(linha);
          printf("reversa = %s\n", linha);
        }
    }while (linha[0]);
    
    
    
   
}
