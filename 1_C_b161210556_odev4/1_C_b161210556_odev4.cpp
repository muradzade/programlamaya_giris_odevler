/****************************************************************************
*						   	 SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*					    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ						*
*				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*						ÖDEV NUMARASI : 4									*
*						ÖÐRENCÝ ADI : Murad Abaszade						*
*						ÖÐRENCÝ NUMARASI : 1612.10556						*
*						DERS GRUBU : C (1.öðretim)							*
*****************************************************************************/

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void olustur(int matris[][10]);
bool elemanKontrol(int eleman, int i, int matris[][10]);
void matrisYaz(int matris[][10]);
int sirala(int matris[][10]);

int main()
{
	int matris[10][10] = {};
	srand(time(NULL));
	olustur(matris);
	cout << "Rasgele olusan ve elemanlari bir birinden farkli olan matris\n" << endl;
	matrisYaz(matris);
	cout << "\n\n\nBuyukten kucuge siralanmis matris\n" << endl;
	sirala(matris);
	matrisYaz(matris);

	system("pause");
	return 0;
}
void olustur(int matris[][10])
{
	int randSayi = 0;
	int gecici;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10;)
		{
			gecici = rand() % 100 + 1;//matrisin her bir elemanina deger atamadan once alinan rasgele sayiyi gecici degiskene ataniyor
			randSayi++;
			if (elemanKontrol(gecici, i, matris))//gecici degiskenindeki rasgele sayi kontolden gecerek matrise ataniyor
			{
				matris[i][j] = gecici;
				j++;
			}
		}
	}
	cout << "Toplam rasgele cagirim adedi : " << randSayi << "\n\n";
}

bool elemanKontrol(int eleman, int i, int matris[][10])
{
	int flag = 0;
	for (int satir = 0; satir <= i; satir++)
	{
		for (int sutun = 0; sutun < 10; sutun++)
		{
			if (matris[satir][sutun] == eleman)//eger elemandan matrisin icinde var ise bayrak 1 olur ve bu eleman matrise atanmaz
				flag = 1;
		}
	}
	if (flag == 1)
		return false;
	return true;
}

void matrisYaz(int matris[][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << matris[i][j] << setw(4);
		}
		cout << "\n\n";
	}
}
int sirala(int matris[][10])
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int m=0; m < 10; m++)
			{
				for (int  n = 0; n < 10; n++)
				{
					if (matris[i][j] > matris[m][n])
					{
						int temp = matris[i][j];
						matris[i][j] = matris[m][n];
						matris[m][n] = temp;
					}
				}
			}
		}
	}
	return matris[10][10];
}
