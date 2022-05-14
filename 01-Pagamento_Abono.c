#include <stdio.h> 
int main(void) { 
 int controle; //Variavel de controle pra reinicio 
 
 do { //do ... while pra reiniciar o sistema 
 
     int tam; //Tamanho do vetor 
     float salario[tam]; //Vetor salário 
     float abono[tam]; //Vetor abono 
     float soma_abono = 0; //Valor pago de abono 
     int qtd_min = 0; //Qtd. de abono mínimos pagos 
     float max_abono = 0; //Abono de maior valor 
     int i = 0; //Controlador do 1o for 
     int j; //Controlador do 2o for 

     printf("\n\nProjecao de Gastos com Abono"); 
     printf("\n============================\n"); 

     for(;;){ //for sem limite 

         printf("Salario do funcionario %i: R$", i+1); //Solicita o salário do funionário (0+1, 1+1, ..., n+1) 
         scanf("%f", &salario[i]); //Atribui o valor do salário digitado a uma posição no vetor salario 

         if (salario[i] == 0){ //Caso seja digitado que o salário = 0, então interrompe o processo 
         break; 
         } 

         abono[i] = salario[i] * 0.2; 

         if (abono[i] <= 100) { //Se o abono for >= 100, então deve passar a ser 100 
         abono[i] = 100; 
         qtd_min++; //Conta a qtd de vezes que o valor minimo é pago, por isso que a condição é (<= 100) 
         } 

         if (abono[i] > max_abono) { //Caso o valor digitado seja maior que o valor max do abono digitado até então, passa a ser o novo valor 
         max_abono = abono[i]; 
         } 

         soma_abono = soma_abono + abono[i]; //Soma o quanto será pago de abono 
         tam = i++; //Tamanho do vetor aumenta a cada for (vai de 0 a n) 

     } 

     printf("\n\nSalario - Abono"); 

     for (j = 0;j <= tam;j++) { //for pra mostrar os valores digitados. Limitado de j = 0 até o tamanho do vetor 
         printf("\nR$ %.2f - R$ %.2f", salario[j], abono[j]); 
     } 

     if (tam <= 0) { //Só pra por as palavras no singular 
         printf("\n\nFoi processado %i colaborador", tam + 1); //Mostra a quantidade de colaboradores que tiveram seus salários informados 
         printf("\nTotal gasto com abonos: R$ %.2f", soma_abono); //Mostra o valor total gasto com os abonos 
         printf("\nValor minimo pago a %i colaborador", qtd_min); //Mostra a qtd de vezes que o valor mínimo será pago 
         printf("\nMaior valor de abono pago: R$ %.2f", max_abono); //Mostra o valor de abono mais alto pago 
     } 

     else { //Só pra por as palavras no plural 
         printf("\n\nForam processados %i colaboradores", tam + 1); //Mostra a quantidade de colaboradores que tiveram seus salários informados 
         printf("\nTotal gasto com abonos: R$ %.2f", soma_abono); //Mostra o valor total gasto com os abonos 
         printf("\nValor minimo pago a %i colaboradores", qtd_min); //Mostra a qtd de vezes que o valor mínimo será pago 
         printf("\nMaior valor de abono pago: R$ %.2f", max_abono); //Mostra o valor de abono mais alto pago 
     } 

     printf("\n\nDeseja realizar outra projeção?\n\tDigite 1 para SIM\n\tDigite 2 para NAO\n\t"); //Para repetir todo o processo, resetando tudo 
     scanf("%i", &controle); 

 } while (controle == 1); //Enquanto o usuário informar que quer continuar (controle == 1), repetirá o ciclo 
 
 printf("\n\nEncerrando o programa..."); //Frase de efeito para marcar o fim do programa 
 printf("\n...."); //.... 
 printf("\n..."); //... 
 printf("\n.."); //.. 
 printf("\n."); //. 
 printf("\n"); // 
 
} 
