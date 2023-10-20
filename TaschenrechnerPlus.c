
/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF
 *------------------------------------------------------------------------------
 *                      Jan Ritt
 *------------------------------------------------------------------------------
 *  Description:       Calculator with switch
 *----------------------------------------------------------------------------*/
#include <stdio.h>     // input/output library    -  printf, scanf, ..
#include <string.h>    // string handling library -  strlen, strcpy, strcmp, ..
int main(void)
{
	/*  VARIABLES  */
	int numberOne;       // first Operand
	int numberTwo;       // second Operand
	float result;        // calculation result
	char operator;       // Operator
	//  INPUT  //
	printf("\n Einfacher Taschenrechner \n");
	printf("==========================\n");
	printf("Geben Sie den ersten ganzzahligen Operanden ein: ");
	scanf("%i", &numberOne);
	printf("\nGeben Sie den zweiten ganzzahligen Operanden ein: ");
	scanf("%i", &numberTwo);
	printf("\nWaehlen Sie einen Operator (+ - * / %%): ");
	scanf(" %c", &operator);
	/*  CALCULATION  */
		switch (operator)
		{
		case '+':
			result = numberOne + numberTwo;
			break;
		case '-':
			result = numberOne - numberTwo;
			break;
		case '*':
			result = numberOne * numberTwo;
			break;
		case '/':
			if (numberTwo != 0)
			{
				result = numberOne / numberTwo;
				break;
			}
			else
			{
				printf("Division durch 0 ist nicht erlaubt.\n");
				while (getchar() != '\n');    //  wait for [Enter]-Key
    	  getchar();                    //
			  return 1;
			}
		case '%':
			if (numberTwo != 0)
			{
				result = numberOne % numberTwo;
				break;
			}
			else
			{
				printf("\nModulo durch 0 ist nicht erlaubt.");
				while (getchar() != '\n');    //  wait for [Enter]-Key
	      getchar();                    //	
				return 1;
			}
		default:
		   printf("\n! Ungueltiger Operator gewaehlt: %c !", operator);
			 while (getchar() != '\n');    //  wait for [Enter]-Key
    	 getchar();                    //
			 return 1;
		}
		printf("\n--------------------------\n");
		printf("Ihr Ergebnis ist: %.4f", result);     //  %.4f .. format output float number to 4 decimal places after the comma
		printf("  (auf 4 Nachkommastellen genau)");
	//  END PROGRAM  //
	printf("\nEingabetaste zum Beenden druecken.");
	while (getchar() != '\n');    //  wait for [Enter]-Key
	getchar();                    //
	return 0;
}
