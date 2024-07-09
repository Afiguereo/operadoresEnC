#include <stdio.h>
 int main() {
    int azules = 5;
    int rojos = 4;
    int negros = 2;
    int amarillos = 1;
   
    int totalglobos = azules + rojos + negros + amarillos;
   
    float probabilidad_azules = (float)azules / totalglobos * 100;
    float probabilidad_rojos = (float)rojos / totalglobos * 100;
    float probabilidad_negros = (float)negros / totalglobos * 100;
    float probabilidad_amarillos = (float)amarillos / totalglobos * 100;
   
    printf("Probabilidad de que salga un globo azul: %.2f%%\n", probabilidad_azules);
    printf("Probabilidad de que salga un globo rojo: %.2f%%\n", probabilidad_rojos);
     printf("Probabilidad de que salga un globo negro: %.2f%%\n", probabilidad_negros);
      printf("Probabilidad de que salga un globo amarillo: %.2f%%\n", probabilidad_amarillos);
  
    
    return 0;
}
