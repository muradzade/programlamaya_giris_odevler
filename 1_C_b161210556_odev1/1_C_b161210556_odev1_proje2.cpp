/****************************************************************************
*							   SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*						  BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ					*
*							PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*				ÖDEV NUMARASI : 2											*
*				ÖÐRENCÝ ADI : MURAD ABASZADE								*
*				ÖÐRENCÝ NUMARASI : 1612.10556								*
*				DERS GRUBU : C GRUBU (1. OGRETIM)							*
*****************************************************************************/

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Lutfen 0 ve 20 araliginda bir buyuk ve bir kucuk sayi giriniz \n";
	cout << "Buyuk sayi : "; cin >> a;
	cout << "Kucuk sayi : "; cin >> b;
	for (int x = 1; x <= 20; x++) 
	{
			cout << "1 ";
			for (int x = 1; x <= a; x++) //a'ya kadar olan boslugu bastirir
			{
				cout << "  ";
			}
			for (int x = a+1; x < 20; x++) //a'dan sonra gelen yildizlari bastirir
			{
				cout << "* ";
			}
			cout << endl;
			cout << "0 ";
			for (int x = 1; x < b; x++) //b'ye kadar olan boslugu bastirir
			{
				cout << "  ";
			}
			for (int x = b; x <= a; x++) // a ve b araligindaki yildizlari bastirir
			{
				cout << "* ";
			}
			cout << endl;
			cout << "-1 ";
			for (int x = 1; x < b; x++) //b'ye kadar olan yildizlari bastirir
			{
				cout << "* ";
			}
			cout << endl;
			break;
	}
	system("PAUSE");
}