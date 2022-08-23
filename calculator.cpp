//tambah ✔✔
//kurang ✔✔
//kali ✔✔
//bagi ✔✔
//rata2 ✔✔
//factorial ✔✔
//pangkat ✔✔
//akar ✔✔
//cari min ✔✔
//cari max ✔✔
//median
//modus ✔✔
#include <stdio.h>

//tambah
int tambah(int x, int sum)
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
			sum += y[i];
		}
	}
	
	return sum;
}

//kurang
int kurang(int x, int sum)
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
		scanf("%d", &y[i]);
		
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
int factorial(int number){
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

int main(){	
	int operasi;

	//perulangan while dijalankan jika kondisi kalkulator true 
	while(true){

		//menu kalkulator , berhenti jika angka yang diimput adalah 1 - 13
		do{
		printf("Enter mau melakukan operasi apa\n");
		printf("Ketik 1 untuk tambah\n");
		printf("Ketik 2 untuk kurang\n");
		printf("Ketik 3 untuk kali\n");
		printf("Ketik 4 untuk bagi\n");
		printf("Ketik 5 untuk rata2\n");
		printf("Ketik 6 untuk factorial\n");
		printf("Ketik 7 untuk pangkat\n");
		printf("Ketik 8 untuk akar\n");
		printf("Ketik 9 untuk minimum\n");
		printf("Ketik 10 untuk maximum\n");
		printf("Ketik 11 untuk median\n");
		printf("Ketik 12 untuk modus\n");
		printf("Ketik 13 untuk kembali ke menu utama\n");

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
			
			printf("the result is %d\n\n", tambah(x, sum));
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
			int angka;
			puts("Masukkan bilangan yang diinginkan");
			scanf("%d", &angka);
			
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
			printf("Under construction\n");
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
		
		else if (operasi == 13){
			break;
		}
	}
	return 0;

}
