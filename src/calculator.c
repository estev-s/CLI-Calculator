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
int clean_buffer();
void sum(void);
void sub(void);
void multi(void);
void div(void);
void power(void);
void sqroot(void);


// --- Main ---
int main(void)
{
	
	char confirmation;
	do {
		printf("Hi! I'm the calculator!\nDo you want to calculate? (Y/N) ");
		scanf("%s", &confirmation);
		
		if (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n')
			
			printf("Invalid answer, try again...\n");

	} while (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n');

	if (confirmation == 'N' || confirmation == 'n')

		printf("Alright, good bye.\n");
    
	while (confirmation == 'Y' || confirmation == 'y') {

		printf("Operations:\n1. + \n2. - \n3. * \n4. / \n5. ^\n6. Sqroot\n \n");
		int operation;
		printf("Choose your operation number: ");
		scanf("%i", &operation);

		switch (operation) {

		case 1:
			sum();
			break;

		case 2:
			sub();
			break;
			
		case 3:
			multi();
			break;

		case 4:
			div();
			break;

		case 5:
			power();
			break;

		case 6:
			sqroot();
			break;
		}

		do {
			printf("\n");
			printf("Do you want to calculate more? (Y/N) ");
			scanf("%s", &confirmation);

			if (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n')
				
				printf("Invalid answer, try again...\n");
			
		} while (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n');

		
		if (confirmation == 'N' || confirmation == 'n') {
			
			printf("Alright, goodbye.\n");
			break; // exit loop.
		}
		
		if (confirmation == 'Y' || confirmation == 'y') {
			
			printf("\n");	
			continue; // go straight to the beginning of loop.
		}

	}
	
	return 0;
}
// --- Main End ---


// Functions Logic:

int clean_buffer()
{
	/* This makes sure no buffer overflow happens when doing printf/scanf.
	 * Also, enables for strict user answers to prompts.
	 * Must be called after every scanf function. */


}
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
