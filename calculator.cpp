//tambah
//kali
//kurang
//bagi
//rata2
//factorial
//pangkat
//akar
//cari min
//cari max
//median
//modus

#include <stdio.h>

int main()
{
	printf("Enter mau melakukan operasi apa\n");
	printf("Ketik 1 untuk tambah\n");
	printf("Ketik 2 untuk kurang\n");
	printf("Ketik 3 untuk kali\n");
	printf("Ketik 4 untuk bagi\n");
	printf("Ketik 5 untuk rata2\n");
	printf("Ketik 6 untuk pangkat\n");
	printf("Ketik 7 untuk akar\n");
	printf("Ketik 8 untuk factorial\n");
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
		
		for (int i = 1; i <= x; i++)
		{
			int y;
			scanf("%d", &y);
			
			sum += y;
		}
		
		printf("%d", sum);
	}
	else if (operasi == 2)
	{
		printf("Mau berapa nomer\n");
		int x;
		scanf("%d", &x);
		int sum = 0;
		
		for (int i = 1; i <= x; i++)
		{
			int y;
			scanf("%d", &y);
			
			sum -= y;
		}
		printf("%d", sum);
	}
	
	/*
	1. tambah
	2. kurang
	*/
	
	return 0;
}
