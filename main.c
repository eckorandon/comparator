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

/*===================================================*/
/*global variables*/

int op1, op2;

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
	printf("12. Exit\n");
	printf("================================\n\n");
}

int not (void){
	printf("================================\n\n");
	printf("NOT operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);

	printf("\n%d ───│>o─── %d\n", (bool)op1, !op1);
}

int and (void){
	printf("================================\n\n");
	printf("AND operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|&&", (bool)op1);
	printf("\n     |&&─── %d",((bool)op1 && (bool)op2));
	printf("\n%d ───|&&\n", (bool)op2);
}

int or (void){
	printf("================================\n\n");
	printf("OR operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|OR", (bool)op1);
	printf("\n     |OR─── %d",((bool)op1 || (bool)op2));
	printf("\n%d ───|OR\n", (bool)op2);
}

int nand (void){
	printf("================================\n\n");
	printf("NAND operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|AND", (bool)op1);
	printf("\n     |ANDo─── %d",!((bool)op1 && (bool)op2));
	printf("\n%d ───|AND\n", (bool)op2);
}

int nor (void){
	printf("================================\n\n");
	printf("NOR operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|OR", (bool)op1);
	printf("\n     |ORo─── %d", ((bool)op1 || (bool)op2));
	printf("\n%d ───|OR\n", (bool)op2);
}

int xor (void){
	printf("================================\n\n");
	printf("XOR operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|-|OR", (bool)op1);
	printf("\n     | |OR─── %d",((bool)op1 ^ (bool)op2));
	printf("\n%d ───|-|OR\n", (bool)op2);
}

/*===================================================*/
/*main function*/

int main (){
	
	int i = 0;
	char ch[100];

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
			case 6: xor(); break;
			case 7: printf("07.GT - Greater than\n"); break;
			case 8: printf("08.LT - Lower than\n"); break;
			case 9: printf("09.GTE - Greater than or equal\n"); break;
			case 10: printf("10.LTE - Lower than or equal\n"); break;
			case 11: printf("11.E - Equals\n"); break;
			case 12: printf("Exiting ...\n\n"); system("sleep 0.5"); return 0;
			default: printf("Invalid value\n"); break;
		}
		
		printf("\nPress enter to continue ...");
		
		do{
			fgets(ch, 100, stdin);
		} while ((bool)(fgets(ch, 100, stdin)) != 1);
	}
} /*end of main*/
/*===================================================*/
