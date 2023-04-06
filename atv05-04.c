#include <stdio.h>

int main(void)
{
    struct{
        char Projet[50];
        float valor;
        float saldo;
        
        }moto;
    char dispesa;
    float soma;
    float valor;
    
    printf("Digite o Nome do Projeto:");
    scanf("%s",&moto.Projet);
    printf("Digite seu saldo:");
    scanf("%f",&moto.saldo);
    if(dispesa == 'D'){
        printf("digite o valor acresentar");
        scanf("%f",&soma);
        moto.saldo += soma;
    
    }else{
        printf("digite o valor da dispesa:");
        scanf("%f",&valor);
        moto.saldo-=valor;
    }
    
    printf("\n\nProjeto: %s", moto.Projet);
    printf("\n\nsaldo: %2.f", moto.saldo);

    return 0;

}
