/*Gallegos Vazquez Mila
practica 11 ejercicio examen*/

#include<stdio.h>
#difine apar = 10
#difine comp = 100

void int_matrix (int arr[apar][comp])
{
  int i,j;
  for(i = 0; i < apar; i++)
    {
      for(j = 0; j < comp; j++)
        {
          arr[i][j]=0;
        }
    }
}
void llenar(arr[10][100])
{
  int i,j,num;
  for(i = 0;i < 10, i++)
  {
    printf("Dame la cantida");
    scanf("%d;&num);
    for(j = 0, j < num, j++)
    {
      printf("Dame el numero de componente:(0-99)");
      scanf("%d;&num2);
      arr[i][num2]=1;
    }
  }
}
void mensual(aparmen[10])
{
  int i;
  for(i = 0; i < 10; i++)
    {
      printf("Numero de aparatos mensuales de %d:",i);
      scanf(%d"&aparmen[i]);
    }
} 
void comp_mensual(int arr[10][100],int mensual[10],int total[100])
{
  int i,j
  for(i = 0, i < 10, i++)
  {
    for(j = 0, j < 10, j++)
     {
        total[j]=arr[i]*mensual[i]
     }
  }
}
