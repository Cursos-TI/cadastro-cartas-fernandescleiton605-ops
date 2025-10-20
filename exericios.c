# include <stdio.h>
int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Indique a temperatura\n");
    scanf("%f", &temperatura);
    printf("Aponte a umidade\n");
    scanf("%f", &umidade\n);
    printf("Aponte o estoque\n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Temperatura elevada\n");
    }else {
    printf("Temperatura OK\n");
    if(umidade > 20){
        printf("Umidade elevada\n");
    }else{
        printf("Umidade está OK\n");
    if(estoque < estoqueMinimo){
        printf("Estoque baixo\n");
    }else{
        printf("Estoque dentro do aceitável");
    }