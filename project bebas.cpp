#include<stdio.h>
#include<string.h>

struct Bot
	{
		char initial[50];
	};
	
	struct User
	{
		char name[50];
		char jurusan[50];
		char gender[50];
	};

struct User user;
struct Bot bot;	

void subMenu(); 

void blackJack(); 


int main(){
	struct Bot bot;
	strcpy(bot.initial, "Maira");
		
	
	//input data diri 
	puts("==================================================");
	puts("              _                            _ ");
	puts("             | |                          | |  ");
	puts("__      _____| | ___ ___  _ __ ___   ___  | |  ");
	puts("\\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | | ");
	puts(" \\ V  V /  __/ | (_| (_) | | | | | |  __/ |_| ");
	puts("  \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___| (_) ");
	puts("==================================================");
	printf("Halo user! Perkenalkan, nama saya %s!\n", bot.initial);
	printf("Enggak enak nih, manggil kamu user... Nama kamu siapa yaaa? ");
	scanf("%[^\n]", user.name);
	getchar();
	
	
	printf("Halo %s! Nah gini kan baru enak kan?? Kamu mengambil jurusan apa ya?? ", user.name);
	scanf("%[^\n]", user.jurusan);
	getchar();
	
	
	printf("Oh ternyata kamu ngambil jurusan %s yaaa.. Sebentar... Kamu ini cowok atau cewek ya? Aku penasaran... ", user.jurusan);
	scanf("%s", user.gender);
	getchar();
	subMenu();
	//KALO MO NAMBAH FITUR LAIN DISINI NAMBAH OPTIONNY!!
	return 0;
}      

void subMenu() {
	printf("Oke %s, %s sudah mencatat bahwa kamu adalah seorang %s yang bernama %s dan kamu mengambil jurusan %s!\n", user.name, bot.initial, user.gender, user.name, user.jurusan);
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");	
	puts("  ______  __    __    ______     ______        _______. _______      ______   .__   __.  _______     __    ");
 	puts(" /      ||  |  |  |  /  __  \\   /  __  \\      /       ||   ____|    /  __  \\  |  \\ |  | |   ____|   |  |     ");
	puts("|  ,----'|  |__|  | |  |  |  | |  |  |  |    |   (----`|  |__      |  |  |  | |   \\|  | |  |__      |  | ");
	puts("|  |     |   __   | |  |  |  | |  |  |  |     \\   \\    |   __|     |  |  |  | |  . `  | |   __|     |  | ");
	puts("|  `----.|  |  |  | |  `--'  | |  `--'  | .----)   |   |  |____    |  `--'  | |  |\\   | |  |____    |__| ");
	puts(" \\______||__|  |__|  \\______/   \\______/  |_______/    |_______|    \\______/  |__| \\__| |_______|   (__) ");
	puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	puts("1. KALKULATOR SUPER CANGGIH");
	puts("2. MINIGAME (BLACKJACK/21)");

	int choice;
	//perulangan jalan terus kalau choicenya diluar 1-2
	do{
		printf("%s, Kamu mau pilih yang mana?? %s sudah enggak sabar!!! ", user.name, bot.initial);
		scanf("%d", &choice);
	}
	while(choice >3 || choice < 1);
	getchar();

	if(choice == 1){
		//lanjut kalkulator
		NULL; // ganti null jadi function calculator
	}else if (choice == 2){
		//lanjut blackjack
		blackJack(); // ganti null jadi function blackjack
	}
}

void blackJack() {
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
	printf("Pilihlah sebuah angka dari 1-10! \n");
	scanf("%d", &input );
	if (input == 1) {
		int A;
		printf("Kartu anda adalah: %s\n", set1);
		   do {
            printf("Karena anda mendapatkan kartu A, berapa nilai kartu yang anda pilih (1/11)? : \n");
            scanf("%d", &A);
            getchar();
        } 
        while (A != 1 && A != 11);
        total = A+6;
		printf("Karena anda memilih %d, jumlah angka kartu anda %d...\n", A, total);

    }
	else if (input == 2) {
		printf("Kartu anda adalah: %s\n", set2);
		total = 9+2;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 3) {
		int A;
		printf("Kartu anda adalah: %s\n", set3);
		   do {
            printf("Karena anda mendapatkan kartu A, berapa nilai kartu yang anda pilih (1/11)? : \n");
            scanf("%d", &A);
            getchar();
        } 
        while (A != 1 && A != 11);
        total = A+10;
		printf("Karena anda memilih %d, jumlah angka kartu anda %d...\n", A, total);

    }
	else if (input == 4) {
		printf("Kartu anda adalah: %s\n", set4);
		total = 8+7;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 5) {
		printf("Kartu anda adalah: %s\n", set5);
		total = 8+9;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 6) {
		printf("Kartu anda adalah: %s\n", set6);
		total = 11+2;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 7) {
		printf("Kartu anda adalah: %s\n", set7);
		total = 11;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 8) {
		printf("Kartu anda adalah: %s\n", set8);
		total = 15;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 9) {
		printf("Kartu anda adalah: %s\n", set9);
		total = 16;
		printf("Jumlah angka kartu anda %d...", total);
	}
	else if (input == 10) {
		printf("Kartu anda adalah: %s\n", set10);
		total = 17;
		printf("Jumlah angka kartu anda %d...", total);
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
        printf("Apakah anda ingin STAND/HIT?\n");
        scanf("%s", &choice);
        getchar();
    } 
    while (choice[0] != 'S' && choice[0] !='H');
		
	if (choice[0] == 'H') {
	    int input1;
	    printf("Pilihlah sebuah angka dari 1-10! \n");
	    scanf("%d", &input1);
	    getchar();
	    
	    if(input1 == 1){
	        printf("Kartu anda adalah: %s\n", stand1);
	        total +=stand1;
	        printf("Jumlah angka kartu anda %d...", total);
	    }
	    else if(input1 == 2){
	        printf("Anda mendapatkan %c! \n", stand2);
	        int A2;
	        do {
	            printf("Karena anda mendapatkan kartu A, berapa nilai kartu yang anda pilih (1/11)? : \n");
	            scanf("%d", &A2);
	            getchar();
	        } 
	        while (A2 != 1 && A2 != 11);
	        total +=A2;
			printf("Karena anda memilih %d, jumlah angka kartu anda %d...\n", A2, total);
	    }
	    else if(input1 == 3){
	        printf("Anda mendapatkan %c! \n", stand3);
	        total+=stand3;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 4){
	        printf("Anda mendapatkan %d! \n", stand4);
	        total+=stand4;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 5){
	        printf("Anda mendapatkan %d! \n", stand5);
	        total+=stand5;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 6){
	        printf("Anda mendapatkan %d! \n", stand6);
	        total+=stand6;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 7){
	        printf("Anda mendapatkan %d! \n", stand7);
	        total+=stand7;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 8){
	        printf("Anda mendapatkan %d \n", stand8);
	        total+=stand8;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 ==9){
	        printf("Anda mendapatkan %d! \n", stand9);
	        total+=stand9;
	        printf("Jumlah angka kartu anda %d...\n", total);
	    }
	    else if(input1 == 10){
	        printf("Anda mendapatkan %d! \n", stand10);
	        total+=stand10;
	        printf("Jumlah angka kartu anda %d... \n", total);
	    }
    }
    else if(choice[0] == 'S') {
    	break;
	}
  }
    if (total > 21) {
    	printf("Jumlah angka kartu anda melebihi 21, yang artinya anda BUST\n");
    	printf("Anda kalah dalam permainan.\n");
	}
	else if (total == 21) {
		printf("Jumlah angka kartu anda 21.\nSelamat, anda telah memenangkan permainan.\n");
	}
	else if (total < 21) {
		int dealer = total + 5;
		if (dealer > 21) {
			printf("Jumlah angka kartu dealer adalah %d, yang artinya ialah BUST.\n", dealer);
			printf("Selamat, anda telah memenangkan permainan.\n");
		}
		else{
			printf("Jumlah angka kartu dealer adalah %d, jumlah angka kartu dealer melebihi jumlah angka milikmu.\nAnda telah kalah dalam permainan.");
		}
		
	}
	char pilihan;
	printf("Apakah anda ingin bermain lagi?(Y/T)");
	scanf("%c", &pilihan);
	(pilihan == 'Y')? blackJack() : subMenu();
}
