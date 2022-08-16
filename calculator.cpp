//tambah ✔
//kurang ✔
//kali ✔
//bagi ✔
//rata2 ✔
//factorial ✔
//pangkat ✔
//akar
//cari min ✔
//cari max ✔
//median
//modus ✔

#include <stdio.h>

int main()
{
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
	int operasi;
	scanf ("%d", &operasi);
	
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
		printf("the result is %d", sum);
	}
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
		printf("the result is %d", sum);
	}
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
		printf("the result is %d", sum);
	}
	
	else if (operasi == 4)
	{
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
	
	else if (operasi == 6)
	{
		puts("Masukkan suatu bilangan dan pastikan bilangan tersebut >= 0");
		int a;
		scanf("%d", &a);
		if (a < 2) {
		printf("%d\n", 1);
	} else {
		int hasil = 1;
		for (int i = a; i >= 1; i--) {
		hasil *= i;
	}
	printf("%d\n", hasil);
	}
	}
	
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
		
		printf("hasilnya adalah %d", power);
	}
	
	else if (operasi == 9)
	{
		printf("Mau berapa nomer\n");
		int t;
		scanf("%d", &t);
		long long int sum = 0;
		printf("Masukin nomer2 nya\n");
		
		for (int i = 0; i < t; i++)
		{
			int arr[i];
			scanf("%d", &arr[i]);
			
			if (i == 0)
			{
				sum = arr[i];
			}
			else if (sum >= arr[i])
			{
				sum = arr[i];
			}
		}
		
		printf("the result is %d", sum);
		
	}
	
	else if (operasi == 10)
	{
		printf("Mau berapa nomer\n");
		int t;
		scanf("%d", &t);
		long long int sum = 0;
		printf("Masukin nomer2 nya\n");
		
		for (int i = 0; i < t; i++)
		{
			int arr[i];
			scanf("%d", &arr[i]);
			
			if (i == 0)
			{
				sum = arr[i];
			}
			else if (sum <= arr[i])
			{
				sum = arr[i];
			}
		}
		
		printf("the result is %d", sum);
		
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
	}
	
	
	
	
	/*
	1. tambah
	2. kurang
	*/
	
	return 0;
}
