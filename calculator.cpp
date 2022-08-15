//tambah
//kali
//kurang
//bagi
//factorial
//pangkat
//akar

#include <stdio.h>

int main()
{
	printf("Enter mau melakukan operasi apa\n");
	printf("Ketik satu untuk tambah\n");
	printf("Ketik 2 untuk kurang\n");
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
