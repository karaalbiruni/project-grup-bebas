#include <stdio.h>

int main() {
	char set1[10] ="A 6";
	char set2[10] ="9 2";
	char set3[10] ="A 10";
	char set4[10] ="8 7";
	char set5[10] ="8 9";
	char set6[10] ="11 2";
	char set7[10] = "5 6";
	char set8[10] ="6 9";
	char set9[10] ="10 6";
	char set10[10] ="10 7";
	int input;
	int total = 0;
	printf("Choose a random number between 1-10! \n");
	scanf("%d", &input );
	if (input == 1) {
		int A;
		printf("Your cards are: %s\n", set1);
		   do {
            printf("Since you got an A card, what will you choose as it's value (1/11)? : \n");
            scanf("%d", &A);
            getchar();
        } 
        while (A != 1 && A != 11);
        total = A+6;
		printf("Since you picked %d, your total is now %d...\n", A, total);

    }
	else if (input == 2) {
		printf("Your cards are: %s", set2);
	}
	else if (input == 3) {
		int A;
		printf("Your cards are: %s\n", set3);
		   do {
            printf("Since you got an A card, what will you choose as it's value (1/11)? : \n");
            scanf("%d", &A);
            getchar();
        } 
        while (A != 1 && A != 11);
        printf("Since you picked %d, your total is now %d...\n", A, A+6);

    }
	else if (input == 4) {
		printf("Your cards are: %s", set4);
	}
	else if (input == 5) {
		printf("Your cards are: %s", set5);
	}
	else if (input == 6) {
		printf("Your cards are: %s", set6);
	}
	else if (input == 7) {
		printf("Your cards are: %s", set7);
	}
	else if (input == 8) {
		printf("Your cards are: %s", set8);
	}
	else if (input == 9) {
		printf("Your cards are: %s", set9);
	}
	else if (input == 10) {
		printf("Your cards are: %s", set10);
	}
	int stand1 = 5;
    char stand2 = 'A';
    int stand3 = 4;
    int stand4 = 8;
    int stand5 = 3;
    int stand6 = 10;
    int stand7 = 2;
    int stand8 = 7;
    int stand9 = 9;
    int stand10 = 6;
    char choice[200] = "";
    do {
        printf("Do you want to STAND/HIT? ");
        scanf("%s", &choice);
        getchar();
    } 
    while (choice[0] != 'S' && choice[0] !='H');
    int input1;
    printf("Choose a random number between 1-10! \n");
    scanf("%d", &input1);
    getchar();
    
    if(input1 == 1){
        printf("You got %d! \n", stand1);
        printf("Your total is now %d...", total+stand1);
    }
    return 0;
}
	
