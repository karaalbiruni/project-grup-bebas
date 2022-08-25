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

void calculator();

//tambah
int tambah(int x)
{
	int sum = 0;
	while(x>0){
		int tempnum;
		scanf("%d", &tempnum);
		sum+= tempnum;
		x--;
	}
	
	return sum;
}

//kurang
int kurang(int x, int sum){

	for (int i = 1; i <= x; i++)
	{	
		int y[i];
		scanf("%d", &y[i]);
		
		if (i == 1)
		{
			sum = y[i];
		}
		else
		{
			sum -= y[i];
		}
	}
	
	return sum;
}

//kali
int kali(int x, int sum)
{
	for (int i = 1; i <= x; i++)
	{
		int y[i];
		scanf("%d", &y[i]);
		
		if (i == 1)
		{
			sum = y[i];
		}
		else
		{
			sum *= y[i];
		}
	}
	
	return sum;
}

//bagi
float bagi(int x, float sum)
{
	for (int i = 1; i <= x; i++)
	{
		float y[i];
		scanf("%f", &y[i]);
		
		if (i == 1)
		{
			sum = y[i];
		}
		else
		{
			sum /= y[i];
		}
	}
	
	return sum;
}

//rata2
float rata2(int x, float sum)
{
	for (int i = 1; i<= x; i++)
	{
		float y[i];
		scanf("%f", &y[i]);
		
		if (i == 1)
		{
			sum = y[i];
		}
		else
		{
			sum += y[i];
		}
	}
	
	return sum / x;
}

//faktorial
int factorial(unsigned int number){
	if(number ==1){
		return 1;
	}else{
		return number * factorial(number-1) ;
	}
}

//pangkat
int minMax(int arrayLen, int min){
	int array[arrayLen];
	int res = 0;
	for (int i = 0; i < arrayLen; i++){

			int array[i];
			scanf("%d", &array[i]);
			
			if(min == 1){
				if (i == 0){
					res = array[i];
				}

				if (res >= array[i]){
					res = array[i];
				}
			}else{
				if(res<= array[i]){
					res = array[i];
				}
			}
			
		}
	return res;
}

//square root, we use binary search for find the output
int binarySquareRoot(int input,int start,int end){
	if(start <= end){
		long int  middle = (start + end)/2;
		long int  squareEq = middle * middle ;
		if(squareEq > input){
			return binarySquareRoot(input,start,middle-1);
		}else if(squareEq < input){
			return binarySquareRoot(input,middle+1,end);
		}else{
			return middle;
		}
	}else{
		return start-1 ;
	}
	
}



int squareRoot(int number){
	if (number < 0){
		return NULL;
	}else if(number >=0 && number <=1){
		return number;
	}else{
		int start = 1 , end = number ;
		return binarySquareRoot(number,start,end);
	}
}

//minimum
int minimum(int array_res, int arrayLen)
{
	array_res = minMax(arrayLen, 1);
	
	return array_res;
}

//maximum
int maximum(int array_res, int arrayLen)
{
	array_res = minMax(arrayLen, 0);
	
	return array_res;
}

//modus
int modus(int n, int arr[])
{
	int maxValue = 0, maxCount = 0;
	
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == arr[i])
			{
				count++;
			}
		}
		
		if (count > maxCount)
		{
			maxCount = count;
			maxValue = arr[i];
		}
	}
	
	return maxValue;
}

int sorted(int arr[]){
	for(int i = 1; arr[i] ; i++){
		if(arr[i] < arr[i-1]){
			return 0;
		}
	}
	return 1;
}



double median(int arr[],int length){

	switch (length){
	case 1:
		return arr[0];
		break;
	
	default:
		int middle = length/2;
		if(length % 2 != 0){	
			return arr[middle];
		}else{
			int midLeft = middle - 1;
			int midRight = middle + 1;
			double avg = (double)(arr[midLeft] + arr[midRight]) /2;
			return avg; 
		}
		break;
	}

}

//melakukan merge sort sebelum menemukan median
void merge(int arr[],int start , int mid , int end){
	int leftLength = mid - start + 1; 
	int rightLength = end - mid;
	
	int tempLeft[leftLength];
	int tempRight[rightLength];
	
	int leftStep, rightStep, arrStep;
	for(leftStep = 0; leftStep <= leftLength - 1; leftStep++){
		tempLeft[leftStep] = arr[start + leftStep];
	}
	
	for(rightStep = 0; rightStep <= rightLength - 1; rightStep++){
		tempRight[rightStep] = arr[mid + rightStep + 1];
	}
	
	for(rightStep = 0, leftStep = 0, arrStep = start ; arrStep  <= end ; arrStep++){
		if((rightStep >= rightLength) || (tempLeft[leftStep] <= tempRight[rightStep])){
			if(leftStep < leftLength){
				arr[arrStep] = tempLeft[leftStep];
				leftStep++;
			}
		}else{
			arr[arrStep] = tempRight[rightStep];
			rightStep++;
		}
	}
	
}

void mergeSort(int arr[], int start, int end){
	if(start < end){
		int mid = start + (end - start) / 2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		
		merge(arr,start,mid,end);
	}
	
	return;
}






int main(){
	struct Bot bot;
    strcpy(bot.initial, "Maira");
    int charBotName = strlen(bot.initial);
		
	
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
    int charUserName = strlen(user.name);
    if(strcmp(user.name, bot.initial)==0)
    {
        printf("Nama kita sama nichhh!!\n");
    }
	int bedaKata = charUserName - charBotName;
	if (bedaKata < 0) {
		bedaKata*=-1;
	}
    printf("Halo %s! Nah gini kan baru enak kan?? BTWWWW kita namanya beda %d huruf lohhh!! \n", user.name, bedaKata);
    printf("Aku penasaran nih, jurusan kamu apaan y? ");
    scanf("%[^\n]", user.jurusan);
    getchar();


    printf("Oh ternyata kamu ngambil jurusan %s yaaa.. Sebentar...\n", user.jurusan);
    printf("Kamu ini cowok atau cewek ya? Aku penasaran... ");
    scanf("%s", user.gender);
    getchar();
    subMenu();
    //KALO MO NAMBAH FITUR LAIN DISINI NAMBAH OPTIONNY!!
    return 0;
 

}      

void subMenu() {
	for(int i = 0; i < 30; i++)
		{
			printf("\n");
		}
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
	puts("3. EXIT");
	
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
		calculator(); // ganti null jadi function calculator
	}else if (choice == 2){
		//lanjut blackjack
		blackJack(); // ganti null jadi function blackjack
	}
	else if (choice == 3){
		return;
	}
}

void calculator(){	
	int operasi;

	//perulangan while dijalankan jika kondisi kalkulator true 
	while(true){

		//menu kalkulator , berhenti jika angka yang diimput adalah 1 - 13
		do{
			for(int i = 0; i < 30; i++)
			{
				printf("\n");
			}	
			puts("   _____      _            _       _             ");
			puts("  / ____|    | |          | |     | |            ");
			puts(" | |     __ _| | ___ _   _| | __ _| |_ ___  _ __ ");
			puts(" | |    / _` | |/ __| | | | |/ _` | __/ _ \\| '__|");
			puts(" | |___| (_| | | (__| |_| | | (_| | || (_) | |   ");
			printf("  \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|   \n\n\n");	
			
			printf("Ketik angka 1 - 13 untuk: \n\n");
			printf("1.  Penjumlahan\n");
			printf("2.  Pengurangan\n");
			printf("3.  Perkalian\n");
			printf("4.  Pembagian\n");
			printf("5.  Rata-rata\n");
			printf("6.  Factorial\n");
			printf("7.  Pangkat\n");
			printf("8.  Akar\n");
			printf("9.  Minimum\n");
			printf("10. Maximum\n");
			printf("11. Median\n");
			printf("12. Modus\n");
			printf("13. Kembali ke menu utama\n\n");
			printf("Input: ");
	
			scanf ("%d", &operasi);
		}while( operasi < 1 || operasi > 13);
	
		//pertambahan
		if (operasi == 1)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukkan value dari setiap nomor = \n");
			
			printf("Hasil akhirnya adalah %d!\n\n", tambah(x));
		}

		//kurang
		else if (operasi == 2)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukkan value dari setiap nomor = \n");
			
			printf("Hasil akhirnya adalah %d!\n\n", kurang(x, sum));
		}

		//kali 
		else if (operasi == 3)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukkan value dari setiap nomor = \n");
			
			printf("Hasil akhirnya adalah %d!\n\n", kali(x, sum));
		}
		
		//bagi
		else if (operasi == 4){
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int x;
			scanf("%d", &x);
			float sum = 0;
			printf("Masukkan value dari setiap nomor = \n");
			
			printf("Hasil akhirnya adalah %.2f!\n\n", bagi(x, sum));
		}
		
		//rata2
		else if (operasi == 5)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int x;
			scanf("%d", &x);
			float sum = 0;
			printf("Masukkan value dari setiap nomor = \n");
			
			printf("the result is %.2f\n\n", rata2(x, sum));
		}
		
		//faktorial
		else if(operasi == 6){
			unsigned int angka;
			puts("Masukkan bilangan yang diinginkan! = ");
			scanf("%u", &angka);
			
			printf("Hasil akhirnya adalah %d!\n\n", factorial(angka));

		}
		//pangkat
		else if (operasi == 7)
		{
			int base, exp;
			puts("Masukkan basis angka yang ingin dipangkatkan! = ");
			scanf("%d", &base);
			puts("Masukkan eksponen/pangkat dari basis! = ");
			scanf("%d", &exp);
			int power;
			power = 1;
			
			for (int i = 1; i <= exp; i++)
			{
				power *= base;
			}
			
			printf("Hasil akhirnya adalah %d\n\n", power);
		}


		//akar dua
		else if (operasi == 8)
		{
			int input;
			puts("Masukkan angka yang ingin diakarkan! = ");
			scanf("%d",&input);
			printf("Hasil akhirnya adalah %d!\n\n",squareRoot(input));
		}	
		
		//minimum
		else if (operasi == 9)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int arrayLen;
			scanf("%d", &arrayLen);
			int array_res;

			printf("Masukkan value dari setiap nomor = \n");
			
			printf("the result is %d\n\n", minimum(array_res, arrayLen));
			
		}


		//maksimum
		else if (operasi == 10)
		{
			printf("Kamu mau menginput berapa nomor ya?? = ");
			int arrayLen;
			scanf("%d", &arrayLen);
			int array_res;

			printf("Masukkan value dari setiap nomor = \n");
			
			printf("Hasil akhirnya adalah %d!\n\n", maximum(array_res, arrayLen));
			
		}

        //median
		else if(operasi == 11){
			
			puts("Kamu mau menginput berapa nomor ya?? = ");
			int n; 
			scanf("%d", &n);
			int arr[n];
			puts("Masukkan value dari setiap nomor = \n");
			
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			
			int sortCond = sorted(arr);
			
			if(sortCond != 1){
				mergeSort(arr,0,n-1);
			}
			

			printf("Hasil akhirnya adalah %.2llf!\n\n", median(arr,n));
			
		}
		
		//modus
		else if (operasi == 12)
		{
			puts("Kamu mau menginput berapa nomor ya?? = ");
			int n; // testcase
			scanf("%d", &n);
			int arr[n];
			puts("Masukkan value dari setiap nomor = \n");
			
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			
			printf("Hasil akhirnya adalah %d!\n\n", modus(n, arr));
			
			
		}
		
		else{
			subMenu();
		}
		
		
		char pilihan;
		
		do{
			printf("Apakah anda ingin membuka kalkulator lagi? (Y/T) : ");
			getchar();
			scanf("%c", &pilihan);
		}while((pilihan != 'T') && (pilihan != 'Y') && (pilihan != 'y') && (pilihan != 't'));
		if(pilihan == 'T' || pilihan == 't'){
			subMenu(); // ganti function submenu
		}else{
			calculator(); //ganti function calculator
		}
	
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
	for(int i = 0; i < 30; i++)
	{
		printf("\n");
	}
	printf("\n");
	puts(" ____  _     ____  ____  _  __    _  ____  ____  _  __");
	puts("/  __\\/ \\   /  _ \\/   _\\/ |/ /   / |/  _ \\/   _\\/ |/ /");
	puts("| | //| |   | / \\||  /  |   /    | || / \\||  /  |   /");
	puts("| |_\\\\| |_/\\| |-|||  \\__|   \\ /\\_| || |-|||  \\__|   \\");
	puts("\\____/\\____/\\_/ \\|\\____/\\_|\\_\\\\____/\\_/ \\|\\____/\\_|\\_\\");
	printf("\n");
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
		
	if (choice[0] == 'H' || choice[0] == 'h') {
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
    else if(choice[0] == 'S' || choice[0] == 's') {
    	break;
	}
  }
    bool win = 0;
	if (total > 21) {
    	printf("Jumlah angka kartu anda melebihi 21, yang artinya anda BUST\n");
    	printf("Anda kalah dalam permainan.\n");
	}
	else if (total == 21) {
		printf("Jumlah angka kartu anda 21.\nSelamat, anda telah memenangkan permainan.\n");
		win = 1;
	}
	else if (total < 21) {
		int dealer = total + 5;
		if (dealer > 21) {
			printf("Jumlah angka kartu dealer adalah %d, yang artinya ialah BUST.\n", dealer);
			printf("Selamat, anda telah memenangkan permainan.\n");
			win = 1;
		}
		else{
			printf("Jumlah angka kartu dealer adalah %d, jumlah angka kartu dealer melebihi jumlah angka milikmu.\nAnda telah kalah dalam permainan.");
		}
		
	}
	puts(" ,---.   ,--.            ,--.");
	puts("'   .-',-'  '-. ,--,--.,-'  '-. ,---.");
	puts("`.  `-.'-.  .-'' ,-.  |'-.  .-'(  .-'");
	puts(".-'    | |  |  \\ '-'  |  |  |  .-'  `)");
	puts("`-----'  `--'   `--`--'  `--'  `----' ");
	int totalGame;
	int totalWin = 0;
	int totalLoss = 0;
	FILE* fpappend = fopen("record.txt", "a");
	FILE* fpread = fopen("record.txt", "r");
	if (fscanf(fpread,"%d", &totalGame) == 0) {
		totalGame = 1;
		fprintf(fpappend,"%d\n", totalGame);
		(win == 1)? fprintf(fpappend,"\n%c", 'W') :fprintf(fpappend,"\n%c", 'L');
		printf("Total permainan Blackjack yang sudah dimainkan : %d\n", totalGame);
		(win == 1)? printf("Total kemenangan : %d\nTotal kekalahan : %d", 1,0): printf("Total kemenangan : %d\nTotal kekalahan : %d", 0,1);
	}
	else {
		fscanf(fpread,"%d", &totalGame);
		for (int i = 0;i<totalGame;i++) {
			char result;
			fscanf(fpread,"%c", &result);
			if (result == 'W') {
				totalWin++;
			}
			else {
				totalLoss++;
			}
		}
		if (win == 1){
			totalWin++;
		}
		else{
			totalLoss++;
		}
		totalGame++;
		printf("Total permainan Blackjack yang sudah dimainkan : %d\n", totalGame);
		printf("Total kemenangan : %d\n", totalWin);
		printf("Total kekalahan : %d\n", totalLoss);
		FILE* fpwrite = fopen("record.txt", "w");
		fprintf(fpwrite,"%d\n", totalGame);
		for(int i = 0;i<totalWin;i++) {
			fprintf(fpappend,"%c", 'W');
		}
		for(int i = 0;i<totalLoss;i++) {
			fprintf(fpappend,"%c", 'L');
		}
		fclose(fpwrite);
	}
	fclose(fpappend);
	fclose(fpread);
	char pilihan;
	printf("Apakah anda ingin bermain lagi?(Y/T) = ");
	scanf("%c", &pilihan);
	(pilihan == 'Y' || pilihan == 'y')? blackJack() : subMenu();
}
