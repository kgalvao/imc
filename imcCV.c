#include <stdio.h>
int main(){
//Saida com erro 64kg e 1.6m
    float peso,altura,imc;
        printf("Peso e altura:\n");
        scanf(" %f %f",&peso,&altura);
              imc=peso/(altura*altura);
        printf("Seu IMC:%.2f\n",imc);

            if(imc<18.5){
               printf("Baixo peso, cuidado com o vento!");
            }
            if(imc>=18.5 && imc<24.9){
               printf("Peso adequado.");
            }
            if(imc>=25.0 && imc<29.9){
               printf("Sobrepeso");
            }
            if(imc>=30.0 && imc<34.9){
               printf("Obesidade grau 1");
            }
            if(imc>=35.0 && imc<44.9){
                printf("Obesidade grau 2");
            }
            if(imc>45.0){
                printf("Obesidade extrema");
            }

}
