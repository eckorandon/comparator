/*===================================================*/
/*
Library with NOT, AND, OR, NAND, NOR, XOR, GT, LT, GTE, LTE and E functions

Author: Estevao Coelho
Date: 2024-02-09
*/ 

int not (void){
	int op1;

	printf("================================\n\n");
	printf("NOT operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);

	printf("\n%d ───│>o─── %d\n", (bool)op1, !op1);
}

int and (void){
	int op1, op2;

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
	int op1, op2;
	
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
	int op1, op2;
	
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
	int op1, op2;
	
	printf("================================\n\n");
	printf("NOR operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	printf("\n%d ───|OR", (bool)op1);
	printf("\n     |ORo─── %d", !((bool)op1 || (bool)op2));
	printf("\n%d ───|OR\n", (bool)op2);
}

int exor (void){
	int op1, op2;

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

int gt (void){
	int op1, op2;
	
	printf("================================\n\n");
	printf("Greater than operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	if (op1 > op2)
		printf("\n%d is greater than %d\n", op1, op2);
	else
		printf("\n%d is not greater than %d\n", op1, op2);
}

int lt (void){
	int op1, op2;
	
	printf("================================\n\n");
	printf("Lower than operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	if (op1 < op2)
		printf("\n%d is lower than %d\n", op1, op2);
	else
		printf("\n%d is not lower than %d\n", op1, op2);
}

int gte (void){
	int op1, op2;
	
	printf("================================\n\n");
	printf("Greater than or equal to operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	if (op1 == op2)
		printf("\n%d is equal to %d\n", op1, op2);
	else if (op1 > op2)
		printf("\n%d is greater than %d\n", op1, op2);
	else 
		printf("\n%d is not greater than or equal to %d\n", op1, op2);
}

int lte (void){
	int op1, op2;
	
	printf("================================\n\n");
	printf("Lower than or equal to operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	if (op1 == op2)
		printf("\n%d is equal to %d\n", op1, op2);
	else if (op1 < op2)
		printf("\n%d is lower than %d\n", op1, op2);
	else 
		printf("\n%d is not lower than or equal to %d\n", op1, op2);
}

int equals (void){
	int op1, op2;
	
	printf("================================\n\n");
	printf("Equal to operation\n\n");
	printf("What is the value of op1:");
	scanf(" %d", &op1);
	printf("What is the value of op2:");
	scanf(" %d", &op2);

	if (op1 == op2)
		printf("\n%d is equal to %d\n", op1, op2);
	else 
		printf("\n%d is not equal to %d\n", op1, op2);
}