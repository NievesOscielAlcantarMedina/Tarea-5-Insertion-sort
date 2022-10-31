#include <stdio.h>
#define TAM 10
int ordenamiento(int i,int j, int temp,int lista[TAM]);
int main()
{
    int lista[TAM] = {10,9,8,7,6,5,4,3,1,0};
     int  temp;
     int i;
     int j;
      for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
   ordenamiento(i,j,temp,lista);
   printf("\n");
   for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
}
int ordenamiento(int i,int j, int temp, int lista[TAM]){
for (i=1; i<TAM; i++){
    int temp = lista[i]; 
    j = i - 1; 
 
    while ( (lista[j] > temp) && (j >= 0) ){
        lista[j+1] = lista[j];
        j--;
        lista[j+1] = temp;
    }
}
}
