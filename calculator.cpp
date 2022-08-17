//tambah ✔
//kurang ✔
//kali ✔
//bagi ✔
//rata2 ✔
//factorial ✔
//pangkat✔
//akar ✔
//cari min ✔
//cari max ✔
//median
//modus ✔
#include <stdio.h>

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
			printf("the result is %d\n", sum);
		}

		//kurang
		else if (operasi == 2)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukin nomer2 nya\n");
			
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
			printf("the result is %d\n", sum);
		}

		//kali 
		else if (operasi == 3)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			int sum = 0;
			printf("Masukin nomer2 nya\n");
			
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
			printf("the result is %d\n", sum);
		}
		
		//bagi
		else if (operasi == 4){
			printf("Masukkan pembilang dan penyebut!\n");
			float x, y;
			scanf("%f %f", &x, &y);
		
		
			printf("the result is %f\n", x/y);
		}
		
		else if (operasi == 5)
		{
			printf("Mau berapa nomer\n");
			int x;
			scanf("%d", &x);
			float sum = 0;
			printf("Masukin nomer2 nya\n");
			
			for (int i = 1; i <= x; i++)
			{
				float y[i];
				scanf("%f", &y[i]);
				
				if (i == 1)
				{
					sum += y[i];
				}
				else 
				{
					sum += y[i];	
				}
				
			}
			printf("the result is %f\n", sum/x);
		}
		
		//faktorial
		else if(operasi == 6){
			int angka;
			puts("Masukkan bilangan yang diinginkan");
			scanf("%d", &angka);
			
			printf("hasilnya adalah %d\n", factorial(angka));

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
			
			printf("hasilnya adalah %d\n", power);
		}


		//akar dua
		else if (operasi == 8)
		{
			// puts("Masukkan suatu bilangan dan pastikan bilangan tersebut >= 0");
			// int a;
			// scanf("%d", &a);
			// if (a < 2) {
			// 	printf("%d\n", 1);
			// } else {
			// 	int hasil = 1;
			// 	for (int i = a; i >= 1; i--) {
			// 		hasil *= i;
			// 	}
			// printf("hasilnya adalah %d\n", hasil);
			printf("under construction\n");
		}	
		
		//minimum
		else if (operasi == 9)
		{
			printf("Mau berapa nomer\n");
			int arrayLen;
			scanf("%d", &arrayLen);

			printf("Masukin nomer2 nya\n");
			int array_res = minMax(arrayLen,1);
			
			printf("the result is %d\n", array_res);
			
		}


		//maksimum
		else if (operasi == 10)
		{
			printf("Mau berapa nomer\n");
			int arrayLen;
			scanf("%d", &arrayLen);

			printf("Masukin nomer2 nya\n");
			int array_res = minMax(arrayLen,0);
			
			printf("the result is %d\n", array_res);
			
		}

        //median
		else if(operasi == 11){
			printf("Under construction\n");
		}
		
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
			
			int maxValue = 0, maxCount = 0, count = 0;
			
			for (int i = 0; i < n; i++)
			{
				count = 0;
				
				for (int j = 0; j < n; j++)
				{
					if (arr[i] == arr[j])
					{
						count++;
					}
				}
			}
			
			if (count == n)
			{
				printf("There is no mode\n");
			}
			else
			{
				for (int i = 0; i < n; i++)
				{
					if (count > maxCount)
					{
						maxCount = count;
						maxValue = arr[i];
					}
				}
				
				printf("Your mode is %d\n", maxValue);
			}
		}else if (operasi == 13){
			break;
		}
	}
	return 0;

}
