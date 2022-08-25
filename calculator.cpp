//tambah ??
//kurang ??
//kali ??
//bagi ??
//rata2 ??
//factorial ??
//pangkat ??
//akar ??
//cari min ??
//cari max ??
//median
//modus ??
#include <stdio.h>

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


void calculator(){	
	int operasi;

	//perulangan while dijalankan jika kondisi kalkulator true 
	while(true){

		//menu kalkulator , berhenti jika angka yang diimput adalah 1 - 13
		do{
				
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
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukin nomer2 nya\n");
			
			printf("the result is %d\n\n", tambah(x));
		}

		//kurang
		else if (operasi == 2)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukin nomer2 nya\n");
			
			printf("the result is %d\n\n", kurang(x, sum));
		}

		//kali 
		else if (operasi == 3)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukin nomer2 nya\n");
			
			printf("the result is %d\n\n", kali(x, sum));
		}
		
		//bagi
		else if (operasi == 4){
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			float sum = 0;
			printf("masukin nomer2 nya\n");
			
			printf("the result is %.2f\n\n", bagi(x, sum));
		}
		
		//rata2
		else if (operasi == 5)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			float sum = 0;
			printf("Masukin nomer2 nya\n");
			
			printf("the result is %.2f\n\n", rata2(x, sum));
		}
		
		//faktorial
		else if(operasi == 6){
			unsigned int angka;
			puts("Masukkan bilangan yang diinginkan");
			scanf("%u", &angka);
			
			printf("hasilnya adalah %d\n\n", factorial(angka));

		}

		//pangkat
		else if (operasi == 7)
		{
			int base, exp;
			puts("masukin base");
			scanf("%d", &base);
			puts("masukin exponent");
			scanf("%d", &exp);
			int power;
			power = 1;
			
			for (int i = 1; i <= exp; i++)
			{
				power *= base;
			}
			
			printf("hasilnya adalah %d\n\n", power);
		}


		//akar dua
		else if (operasi == 8)
		{
			int input;
			puts("Masukkan angka yang ingin diakarkan");
			scanf("%d",&input);
			printf("hasilnya adalah %d\n\n",squareRoot(input));
		}	
		
		//minimum
		else if (operasi == 9)
		{
			printf("Mau berapa nomer\n");
			int arrayLen;
			scanf("%d", &arrayLen);
			int array_res;

			printf("Masukin nomer2 nya\n");
			
			printf("the result is %d\n\n", minimum(array_res, arrayLen));
			
		}


		//maksimum
		else if (operasi == 10)
		{
			printf("Mau berapa nomer\n");
			int arrayLen;
			scanf("%d", &arrayLen);
			int array_res;

			printf("Masukin nomer2 nya\n");
			
			printf("the result is %d\n\n", maximum(array_res, arrayLen));
			
		}

        //median
		else if(operasi == 11){
			
			puts("mau berapa nomor");
			int n; 
			scanf("%d", &n);
			int arr[n];
			puts("masukin nomornya");
			
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			
			int sortCond = sorted(arr);
			
			if(sortCond != 1){
				mergeSort(arr,0,n-1);
			}
			

			printf("The result is %.2llf \n\n", median(arr,n));
			
		}
		
		//modus
		else if (operasi == 12)
		{
			puts("mau berapa nomer");
			int n; // testcase
			scanf("%d", &n);
			int arr[n];
			puts("masukin nomer2nya");
			
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			
			printf("The result is %d\n\n", modus(n, arr));
			
			
		}
		
		else{
			break;
		}
		
		
		char pilihan;
		
		do{
			getchar();
			printf("Apakah anda ingin membuka kalkator lagi?(Y/T) : ");
			scanf("%c", &pilihan);
		}while((pilihan != 'T') && (pilihan != 'Y'));
		
		
		if(pilihan == 'T'){
			break; // ganti function submenu
		}else{
			NULL; //ganti function calculator
		}
	
	}

}

int main(){
	calculator();
	return 0;
}
