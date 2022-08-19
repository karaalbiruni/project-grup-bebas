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

int main(){
	struct Bot bot;
	strcpy(bot.initial, "Maira");
		
	struct User user;
	
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
	printf("%s, Kamu mau pilih yang mana?? %s sudah enggak sabar!!! ", user.name, bot.initial);
	scanf("%d", &choice);
	getchar();
	//KALO MO NAMBAH FITUR LAIN DISINI NAMBAH OPTIONNY!!
	return 0;
}       
