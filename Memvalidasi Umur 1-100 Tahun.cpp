#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
int main ()
{
	int tgllhr,blnlhr,thnlhr;
	char nama [50];
	printf("masukkan nama anda :"); scanf("%s",&nama);
	printf("masukkan tanggal lahir anda :"); scanf("%d",&tgllhr);
	printf("masukkan bulan lahir anda :"); scanf("%d",&blnlhr);
	printf("masukkan tahun lahir anda :"); scanf("%d",&thnlhr);
	printf("hai %s :) \n",nama);
	printf("usia anda saat ini : %d tahun \ ",2016-thnlhr); printf("%d bulan \ ", 10-blnlhr);
	printf("%d hari \n=========================================================",9-tgllhr);
	return 0;
}
