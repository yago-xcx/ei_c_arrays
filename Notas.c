#include <stdio.h>

int id[10] = { 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
double notas[10] = {3.2, 5, 2.1, 2, 2.8, 1.8, 4.8, .3, 4.7, 4.96};


int main(){

    int i = 0;
    int activos = 10;
    while(i < activos){
        if(notas[i] < 3){
            // swap Notas
            double temp = notas[activos-1];
            notas[activos-1] = notas[i];
            notas[i] =  temp;
            // swap ID
            temp = id[activos-1];
            id[activos-1] = id[i];
            id[i] =  temp;

            activos --;
        } else {
            i++;
        }
    } 

    for( int i = 0; i < activos-1;i++  ){
        posMax = i;
        for (int j = i+1; j < activos; j++){
            if(notas[j] > notas[posMax]){
                posMax = j;
                else if nota[j] == notas[posMax] && id[j] < id[posMax]){
                    posMax = j;
                }
            }
        }
    }
    tempnotas = notas[i];
    notas[i] = notas[posMax];
    notas[posMax] = tempnotas;
    tempid = id[i];
    id[i] = id[posMax];
    id[posMax] = tempid;

    for( int i = 0; i  <10; i++){
        printf("indice i: %d; id: %d; notas: %0.2lf  \n", i, id[i], notas[i]);
    } 
    
    
}
    