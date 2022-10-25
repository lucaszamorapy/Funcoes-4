/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

resultadodivisao(){
    float a, b,  c;
    c=a/b;
}
res(float a, float b, float c){
    printf("O valor da divisão é: %.2f\n",c=a/b);
}
float dados(){int auxint;
do
{
scanf("%i",&auxint);
if(auxint<=0)
printf("*******Valor digitado é inválido*******\n");
}while(auxint<=0);
return(auxint);
}
main(){
    float a, b, c;
    printf("Digite o primeiro númeoro: \n");
    a=dados();
    printf("Digite o segundo número: \n");
    b=dados();
    res(a,b,c);
}



