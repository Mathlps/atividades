#include<stdio.h>
#define PI 3.14

float AreaCirculo(float raio){
    return PI*raio*raio;

} 
int main(){
    
    float raio, area;
    
    printf("insira o raio do circulo:");
    scanf("%f", &raio);

    area=AreaCirculo(raio);

    printf("a area do circulo de raio %.2f e igual a %.2f \n", raio, area);

    return 0;
}