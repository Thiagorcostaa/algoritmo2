// EXALG2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int lerValor() {
	int variavel = 0;
	printf(" Numero:");
	scanf_s("%i", &variavel);
	return variavel;
}
//EX1
//int main()
//{
//	float raiz;
//	int d;
//	int x1 = lerValor();
//	int x2 = lerValor();
//	int y1 = lerValor();
//	int y2 = lerValor();
//	d = (x2*x2 - 2 * x1*x2 + x1*x1) + (y2*y2 - 2 * y2*y1 + y1*y1);
//	raiz = sqrt(d);
//	printf("RESPOSTA:%0.2f", raiz);
//	system("pause");
//    return 0;
//}

//EX2
//int main()
//{
//	float Z;
//	int  R, S, D;
//	int A = lerValor();
//	int B = lerValor();
//	int C = lerValor();
//	R = (A*A) + (B*B);
//	S = (B*B )+ (C*C);
//	D = R + S;
//	Z = (D / 2);
//	printf("RESPOSTA:%0.2f", Z);
//	system("pause");
//	return 0;
//
//}


//EX3
//int main()
//{
//	int idade, ano, mes = 12, dia = 365, calc, calcular, calcular1;
//
//	printf("Digite a idade: \n");
//	scanf_s("%i", &idade);
//
//	ano = idade * mes;
//	mes = idade * ano;
//	dia = idade * ano + mes;
//	//calc = idade * ano;
//
//	printf("Por dia e: %i , %i, %i", ano, mes, dia);
//
//	system("pause");
//	return 0;
//}
//

//int main()
//{
//	float media;
//	int d;
//	int nota1 = lerValor();
//	int nota2 = lerValor();
//	int nota3 = lerValor();
//	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
//	printf("A media e:%0.2f", media );
//	system("pause");
//    return 0;
//}
//

//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int total = 0, imposto = 0, dis = 0, custo = 0;
//
//	printf("Digite o custo de um carro: ");
//	scanf_s("%i", &custo);
//
//	imposto = ((45 * custo)) / 100;
//	dis = ((28 * custo)) / 100;
//
//	total = custo + imposto + dis;
//	printf("Seu carro sa�ra pelo valor total de: %i", total);
//	printf("\n\n");
//
//	system("pause");
//	return 0;
//
//}

//EX 6
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int n, i, soma;
//
//	printf("Digite o valor de N: ");
//	scanf_s("%i", &n);
//
//	soma = 0;
//	i = 1;
//	while (i <= n)
//	{
//		soma = soma + i;
//		i ++;
//	}
//
//	printf("A soma dos %i primeiros numeros inteiros �: %i", n, soma);
//
//	system("pause");
//	return 0;
//	
//}

//EX 7
//int main()
//{
//	setlocale(LC_ALL, "portuguese");
//
//	int a = lerValor();
//	int b = lerValor();
//
//	if (a > b)
//	{
//		if (a % b == 0)
//		{
//			printf("S�o multiplos");
//		}
//		else
//		{
//			printf("N�o s�o multiplos  ");
//		}
//	}
//
//	system("pause");
//	return 0;
//
//}

//EX 8
//int main()
//{
//	int idade, op = 0;
//	
//	printf("Digite sua idade: ");
//	scanf_s("%i", &idade);
//
//	if (idade < 5)
//	{
//		printf("Abaixo de todas as categorias \n");
//	}
//	else if ((idade >= 5) && (idade <= 7))
//	{
//		printf("Categoria Infantil A \n");
//	}
//	else if ((idade >= 8) && (idade <= 10))
//	{
//		printf("Categoria Infantil B \n");
//	}
//	else if ((idade >= 11) && (idade <= 13))
//	{
//		printf("Categoria Juvenil A \n");
//	}
//	else if ((idade >= 14) && (idade <= 17))
//	{
//		printf("Categoria Juvenil B \n");
//	}
//	else if (idade > 18)
//	{
//		printf("Categoria Adulto \n");
//	}
//	else
//	{
//		printf("Idade invalida \n");
//	}
//
//	system("pause");
//	return 0;
//}

//Ex9

//int main()
//{
//	int op = 0;
//	float media;
//	float mediaP;
//	float mediaH;
//	int nota1 = lerValor();
//	int nota2 = lerValor();
//	int nota3 = lerValor();
//	printf("Escolha um op\n");
//	printf("1. Aritmetica\n");
//	printf("2. Ponderada\n");
//	printf("3. Harmonica\n");
//	scanf_s("%i", &op);
//	
//	if (op == 1) {
//		system("cls");
//		printf("Aritimetica\n");
//		media = (nota1 + nota2 + nota3) / 3;
//		printf("A media do aluno e:%0.2f", media);
//	}
//	else if (op == 2) {
//
//		printf("Ponderada\n");
//		mediaP = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / 10;
//		printf("A media ser� de:%0.2f", mediaP);
//
//	}
//	else if (op == 3) {
//		printf("Harmonica\n");
//	/*	mediaH =  ((1 / nota1) + (1 / nota2) + (1 / nota3)) / 3;*/
//		printf("A ser� de:%0.2f", 3 /((1 / nota1) + (1 / nota2) + (1 / nota3)));
//	}
//	else {
//		printf("N�o Valido!");
//	}
//		
//
//
//	system("pause");
//	return 0;
//}

// EX10
//int main()
//{
//	setlocale(LC_ALL, "Portuguese");
//	float cod = 0, valor = 0, preco = 0;
//	int  quant = 0;
//
//
//
//	printf("1 - Calcular salario\n");
//	printf("Digite o cod: ");
//	scanf_s("%f", &cod);
//	printf("Digite a quantidade: ");
//	scanf_s("%i", &quant);
//
//
//	if (cod == 1001) {
//		preco = 5.32;
//		valor = (preco * quant);
//		printf("O preco �:%0.2f" , valor);
//	}
//
//	else if (cod == 1324) {
//		preco = 6.45;
//		valor = (preco * quant);
//		printf("O preco �:%0.2f", valor);
//
//	}
//	else if (cod == 6548) {
//		preco = 2.37;
//		valor = (preco * quant);
//		printf("O preco �:%0.2f", valor);
//	}
//
//	else if (cod == 947) {
//		preco = 5.32;
//		valor = (preco * quant);
//		printf("O preco �:%0.2f", valor);
//	}
//	else if(valor = (cod == 7623)){
//		preco = 6.45;
//		valor = (preco * quant);
//		printf("O preco �:%0.2f", valor);
//	}
//
//
//	system("pause");
//	return 0;
//}
//

//ex12
//int main()
//{
//
//	int base, altura;
//		float area;
//	
//	printf("Digite a base:");
//	scanf_s("%i", &base);
//	printf("Digite a altura:");
//	scanf_s("%i", &altura);
//	area =( base + altura )/ 2;
//	printf("A area e:%0.2f" , area);
//	system("pause");
//	return 0;
//}

//ex13
//int main() {
//
//	int i, n, soma = 0;
//	printf("Digite o valor de n: ");
//	scanf_s("%d", &n);
//		for (i = 0; i<n; i++)
//			printf(" %d ", i * 2 + 1);
//		return 1;
//	}

//ex14
//int main() {
//
//	printf("XXXXX\n");
//	printf("X   X\n");
//	printf("X   X\n");
//	printf("X   X\n");
//	printf("XXXXX\n");
//	system("pause");
//	return 0;
//}

//ex15

//int main() {
//	       
//	int potencia, contador;
//
//	printf("Calculo de potencias\n");
//	int x = lerValor();
//	int n = lerValor();
//
//	potencia = 1;
//	contador = 0;
//
//	while (contador != n) {
//		potencia = potencia * x;
//		contador = contador + 1;
//	}
//
//	printf("\nO valor de %i elevado a %i: %i\n", x, n, potencia);
//	system("pause");
//	return 0;
//}


//ex 16

//ex17
//
//int main() {
//
//	printf("        X       \n");
//	printf("       XXX       \n");
//	printf("      XXXXX       \n");
//	printf("     XXXXXXX      \n");
//	printf("    XXXXXXXXX       \n");
//	printf("   XXXXXXXXXXX      \n");
//	printf("  XXXXXXXXXXXXX       \n");
//	printf(" XXXXXXXXXXXXXXX       \n");
//	printf("       XX      \n");
//	printf("       XX      \n");
//	printf("      XXXX     \n");
//	system("pause");
//	return 0;
//}

//ex18

//int main() {
//	int c, x, y;
//
//	printf("\nEntre com um valor de 2 a 20: ");
//	scanf("%d", &x);
//
//	for (c = 1; c <= x; c++) {
//		for (y = 1; y <= c; y++)
//			printf("%d", y);
//		printf("\n");
//	}
//
//	for (c = c - 2; c>0; c--) {
//		for (y = 1; y <= c; y++)
//			printf("%d", y);
//		printf("\n");
//	}
//
//	printf("\n");
//	return 0;
//}

//ex19

//int main() {
//	int k, c, m, d, n, i, j;
//
//	printf("Digite a dimensao da matriz\n");
//	scanf_s("%d %d", &k, &c);
//
//	int a[5][5];
//	//aqui foi tirada a matriz b, que era desnecess�ria.
//
//	printf("Digite os valores da matriz\n");
//	for (i = 0; i<k; i++) {
//		printf("Digite os valores para a %d linha\n", i + 1);
//		for (j = 0; j<c; j++)
//			scanf_s("%d", &a[i][j]);
//	}
//
//	printf("A matriz digitada �\n");
//	for (i = 0; i<k; i++) {
//		for (j = 0; j<c; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("Se voc� quer multiplicar uma linha entre 1 e se quer multiplicar uma coluna entre 2.\n");
//	scanf_s("%d", &d);
//	if (d > 2 || d < 1)
//		printf("Entrada invalida\n");
//	else {
//
//		if (d == 1) {
//
//			printf("Digite qual a linha que vai ser multiplicada\n");
//			scanf_s("%d", &m);
//
//			printf("Digite o valor pelo qual quer multiplicar\n");
//			scanf_s("%d", &n);
//
//			for (i = 0; i<c; i++) {
//				a[m - 1][i] = n * a[m - 1][i]; //usa-se somente a matriz a percorrendo as colunas (limite: vari�vel c).
//			}
//
//			printf("A matriz multiplicada �\n");
//			for (i = 0; i<k; i++) {
//				for (j = 0; j<c; j++) {
//					printf("%d ", a[i][j]); //imprime-se a matriz j� multiplicada.
//				}
//				printf("\n");
//			}
//		}
//
//		if (d == 2) {
//
//			printf("Digite qual a coluna que vai ser multiplicada\n");
//			scanf_s("%d", &m);
//
//			printf("Digite o valor pelo qual quer multiplicar\n");
//			scanf_s("%d", &n);
//
//			for (j = 0; j<k; j++) {
//				a[j][m - 1] = n * a[j][m - 1]; //usa-se somente a matriz a percorrendo as linhas (limite: vari�vel k).
//			}
//
//			printf("A matriz multiplicada �\n");
//			for (i = 0; i<k; i++) {
//				for (j = 0; j<c; j++) {
//					printf("%d ", a[i][j]);
//				}
//				printf("\n");
//			}
//
//		}
//	}
//
//	system("pause"); 
//	return 0; 
//}

//ex20 =  faltaa

//ex 21 = faltaa

//int main()
//{
//	int i, n, soma = 0;
//	printf("Digite um Numero");
//	scanf_s("%d", &n); 
//	for (i = 1; i <= n; i++)
//		if ((n % 2) == 0) {
//			soma = soma + i;
//		}
//	printf(" soma = %d", soma);
//	system("pause");
//	return 0;
//}

//ex 22 = faltaaaa

//int main() {
//	int k, c, m, d, n, i, j;
//
//	printf("Digite a dimensao da matriz\n");
//	scanf_s("%d %d", &k, &c);
//
//	int a[3][3];
//	//aqui foi tirada a matriz b, que era desnecess�ria.
//
//	printf("Digite os valores da matriz\n");
//	for (i = 0; i < k; i++) {
//		printf("Digite os valores para a %d linha\n", i + 1);
//		for (j = 0; j < c; j++)
//			scanf_s("%d", &a[i][j]);
//	}
//
//	printf("A matriz digitada �\n");
//	for (i = 0; i < k; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("Matriz transposta:\n");
//
//	
//	system("pause");
//	return 0;
//}

//ex 23


//ex24
//int main() {
//	int aux = 0;
//
//	int A = lerValor();
//	int B = lerValor();
//
//	aux = A;
//	A = B;
//	B = aux;
//
//	printf("O valor de A:%i e o valor de B:%i", A, B);
//
//	system("pause");
//	return 0;
//}

//ex25
//int main() {
//	float desconto = 0, resto = 0;
//
//	float salario = lerValor();
//	
//	desconto = (salario * 10)/100;
//	resto = ((salario - desconto) * 5)/100;
//	float ultimo = salario - desconto - resto;
//	printf("O salario liquido e:%f", ultimo);
//
//	system("pause");
//	return 0;
//}

//ex 26

int main() {

	int mes= 12 ,dia = 365, ano;

	printf("Quantos anos a pessoa viveu?");
	scanf_s("%i", &ano);





}



