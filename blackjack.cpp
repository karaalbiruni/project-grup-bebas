#include <stdio.h>

int main() {
	char set1[10] ="A 6"; //3 kasus
	char set2[10] ="9 2"; //9 kasus
	char set3[10] ="A 10"; //W
	char set4[10] ="8 7"; //5 kasus
	char set5[10] ="8 9"; //3 kasus
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
		total = 9+2;
		printf("Your total is now %d...", total);
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
        total = A+10;
		printf("Since you picked %d, your total is now %d...\n", A, total);

    }
	else if (input == 4) {
		printf("Your cards are: %s\n", set4);
		total = 8+7;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 5) {
		printf("Your cards are: %s\n", set5);
		total = 8+9;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 6) {
		printf("Your cards are: %s\n", set6);
		total = 11+2;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 7) {
		printf("Your cards are: %s\n", set7);
		total = 11;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 8) {
		printf("Your cards are: %s\n", set8);
		total = 15;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 9) {
		printf("Your cards are: %s\n", set9);
		total = 16;
		printf("Your total is now %d...\n", total);
	}
	else if (input == 10) {
		printf("Your cards are: %s\n", set10);
		total = 17;
		printf("Your total is now %d...\n", total);
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
    while (total < 21) {
	do {
        printf("Do you want to STAND/HIT?\n");
        scanf("%s", &choice);
        getchar();
    } 
    while (choice[0] != 'S' && choice[0] !='H');
		
	if (choice[0] == 'H') {
	    int input1;
	    printf("Choose a random number between 1-10! \n");
	    scanf("%d", &input1);
	    getchar();
	    
	    if(input1 == 1){
	        printf("You got %d! \n", stand1);
	        total +=stand1;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 2){
	        printf("You got %c! \n", stand2);
	        int A2;
	        do {
	            printf("Since you got an A card, what will you choose as it's value (1/11)? : \n");
	            scanf("%d", &A2);
	            getchar();
	        } 
	        while (A2 != 1 && A2 != 11);
	        total +=A2;
			printf("Since you picked %d, your total is now %d...\n", A2, total);
	    }
	    else if(input1 == 3){
	        printf("You got %d! \n", stand3);
	        total+=stand3;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 4){
	        printf("You got %d! \n", stand4);
	        total+=stand4;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 5){
	        printf("You got %d! \n", stand5);
	        total+=stand5;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 6){
	        printf("You got %d! \n", stand6);
	        total+=stand6;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 7){
	        printf("You got %d! \n", stand7);
	        total+=stand7;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 8){
	        printf("You got %d! \n", stand8);
	        total+=stand8;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 ==9){
	        printf("You got %d! \n", stand9);
	        total+=stand9;
	        printf("Your total is now %d...\n", total);
	    }
	    else if(input1 == 10){
	        printf("You got %d! \n", stand10);
	        total+=stand10;
	        printf("Your total is now %d... \n", total);
	    }
    }
    else if(choice[0] == 'S') {
    	break;
	}
  }
    if (total > 21) {
    	printf("Your cards total sum exceeds 21, which means it's a BUST\n");
    	printf("Unfortunately, you have lost the game.\n");
	}
	else if (total == 21) {
		printf("Your cards total sum is 21\nCongrats, you have won the game.\n");
	}
	else if (total < 21) {
		int dealer = total + 5;
		if (dealer > 21) {
			printf("The dealer's card total sum is %d, which means it's a BUST.\n", dealer);
			printf("Congrats, you have won the game\n");
		}
		else{
			printf("The dealer's card total sum is %d, it's greater than your total sum.\nUnfortunately, you have lost the game.");
		}
		
	}
    return 0;
}
	
