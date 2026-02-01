/****************************************************************
Title:
	My calculator in C language with the Linux kernel coding
	style.

About:
	CLI calculator project using standard C libraries, 
	therefore, can compile and run on any OS
	with a C compiler.

License:
	The Unlicense - please refer to <https://unlicense.org>
Author: 
	Estevão Salles <mail.estevao.s@gmail.com>

*****************************************************************/ 
 
// Libraries/Headers
#include <stdio.h>
#include <stdint.h>
#include <math.h>


// Functions
void sum(void);
void sub(void);
void multi(void);
void div(void);
void power(void);
void sqroot(void);


// --- Main ---
int main(void)
{
	printf("Hi! I'm the calculator!\nDo you want to calculate? (Y/N) ");
	char confirmation;
	scanf("%s", &confirmation);

	if (confirmation == 'N' || confirmation == 'n')

		printf("Alright, goodbye.\n");
    
	while (confirmation == 'Y' || confirmation == 'y') {

		printf("Operations:\n1. + \n2. - \n3. * \n4. / \n5. ^\n6. Sqroot\n \n");
		int operation;
		printf("Choose your operation number: ");
		scanf("%i", &operation);

		switch (operation) {
		
			case 1:
				// runs sum function
				sum();
				break;

			case 2:
				// runs sub function
				sub();
				break;
			
			case 3:
				// runs multiplication function
				multi();
				break;

			case 4:
				// runs division function
				div();
				break;

			case 5:
				// runs power function
				power();
				break;

			case 6:
				// runs sqroot function
				sqroot();
				break;
		}
		
		printf("\n");
		printf("Do you want to calculate more? (Y/N) ");
		scanf("%s", &confirmation);
		
		if (confirmation == 'N' || confirmation == 'n') {
			
			printf("Alright, goodbye.\n");
			break; // Break loop and exit program.
		}
		
		if (confirmation == 'Y' || confirmation == 'y') {
			printf("\n");	
			continue; // Program keeps running.
		}
	}
	
	return 0;
}
// --- Main End ---


// Functions Logic:

void sum(void)
{

	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x + y;
	printf("Result: "), printf("%.2f", z);

}

void sub(void)
{

	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x - y;
	printf("Result: "), printf("%.2f", z);
}

void multi(void)
{
	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x * y;
	printf("Result: "), printf("%.2f", z);
}

void div(void)
{
	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x / y;
	printf("Result: "), printf("%.2f", z);
}

void power(void)
{
	float x, y, z;
	printf("base number: ");
	scanf("%f", &x);
	printf("Exponential number: ");
	scanf("%f", &y);
	z = pow(x, y);
	printf("Result: "), printf("%.2f", z);
}

void sqroot(void)
{
	float x, y;
	printf("Base number: ");
	scanf("%f", &x);
	y = sqrtf(x);
	printf("Result: "), printf("%.2f", y);
}
