/*===================================================*/
/*
Comparator - NOT, AND, OR, NAND, NOR, XOR, GT, LT, GTE, LTE and E

Author: Estevao Coelho
Date: 2024-02-08
*/ 

/*===================================================*/
/*libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "operations.h"

/*===================================================*/
/*global variables*/


/*===================================================*/
/*auxiliare functions*/

int banner (void){
	printf("\n==============================================================\n");
	printf("Comparator\n");
	printf("NOT, AND, OR, NAND, NOR, XOR, GT, LT, GTE, LTE and E\n");
	printf("==============================================================\n\n");
}

int menu (void){
	printf("================================\n");
	printf("Select the desired operation:\n\n");
	printf("01. NOT \n");
	printf("02. AND \n");
	printf("03. OR  \n");
	printf("04. NAND\t - Not AND\n");
	printf("05. NOR \t - Not OR\n");
	printf("06. XOR \t - OR exclusive\n");
	printf("07. GT  \t - Greater than\n");
	printf("08. LT  \t - Lower than\n");
	printf("09. GTE \t - Greater than or equal\n");
	printf("10. LTE \t - Lower than or equal\n");
	printf("11. E   \t - Equals\n");
	printf("\n12. Exit\n");
	printf("================================\n\n");
}

/*===================================================*/
/*main function*/

int main (){
	
	int i = 0;
	char ch[10];

	while(i != 12){
		
		system("clear");

		banner();
		menu();
		
		printf("Choose the operation (1 - 11) or exit (12): ");
		scanf("%d", &i);
		printf("\n");

		switch(i){
			case 1: not(); break;
			case 2: and(); break;
			case 3: or(); break;
			case 4: nand(); break;
			case 5: nor(); break;
			case 6: exor(); break;
			case 7: gt(); break;
			case 8: lt(); break;
			case 9: gte(); break;
			case 10: lte(); break;
			case 11: equals(); break;
			case 12: printf("Exiting ...\n\n"); system("sleep 0.5"); return 0;
			default: printf("Invalid value\n"); break;
		}
		
		printf("\nPress enter to continue ...");
		
		do{
			fgets(ch, 10, stdin);
		} while ((bool)(fgets(ch, 10, stdin)) != 1);
	}
} /*end of main*/
/*===================================================*/
