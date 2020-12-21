/****************************************************************************
*							SAKARYA ÜNÝVERSÝTESÝ							*
*			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ				*
*						  BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ					*
*						    PROGRAMLAMAYA GÝRÝÞÝ DERSÝ						*
*																			*
*				ÖDEV NUMARASI:1												*
*				ÖÐRENCÝ ADI: MURAD ABASZADE									*
*				ÖÐRENCÝ NUMARASI:1612.10556									*
*				DERS GRUBU:C												*
*****************************************************************************/
#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int altUcgenYildizSayi = 1, altUcgenBoslukSayi = 5;
	int ustUcgenYildizSayi = 1, ustUcgenBoslukSayi = 5;
	int kucukUcgen1YildizSayi = 3, kucukUcgenBoslukSayi = 2;
	int kucukUcgen2YildizSayi = 3, kucukUcgen2BoslukSayi = 2;

	for (int ilksatirYildizi = 0; ilksatirYildizi < 24; ilksatirYildizi++)
		cout << "* ";
	cout << "\n* S A U  B I L G I S A Y A R\t\t      *\n*\t\t\t\t\t      *\n";
	for (int ucgenSatiri = 0; ucgenSatiri < 6; ucgenSatiri++)//ilk satirdaki 2 ucgeni ve cerceveyi bastirir
	{
		cout << "* ";//dongu her tekrarlandiginda cercevenin bir yildizi basilir
		for (int bosluk = 0; bosluk < ustUcgenBoslukSayi; bosluk++)//ucgenin her yildizina kadar olan bosluk basilir 
		{
			cout << "  ";
		}
		for (int yildiz = 0; yildiz < ustUcgenYildizSayi; yildiz++)//her satirda ucgenin belirli sayda yildizi basilir
		{
			cout << "* ";
		}
		//ilk ucgen gibi birinci satirin ikinci ucgeni basilir
		for (int bosluk = 0; bosluk < ustUcgenBoslukSayi * 2; bosluk++)//cikti simetrik oldugu icin aradaki bosluk sayisi 2 katina cikar
		{
			cout << "  ";
		}
		for (int yildiz = 0; yildiz < ustUcgenYildizSayi; yildiz++)//yildizlar belirli sayda basilir
		{
			cout << "* ";
		}
		if (ucgenSatiri<2) //ilk iki satirda kucuk ucgen basilir 
		{
			for (int bosluk = 0; bosluk < kucukUcgenBoslukSayi; bosluk++)
			{
				cout << "  ";
			}
			for (int yildiz = 0; yildiz < kucukUcgen1YildizSayi; yildiz++)
			{
				cout << "* ";
			}
			kucukUcgen1YildizSayi = kucukUcgen1YildizSayi - 2;
		}
		if (ucgenSatiri == 0)//cerceve ve ucgen arasindaki bosluk basilir
			cout << "";
		else if (ucgenSatiri == 1)
			cout << "  ";
		else//cerceve ve ucgen arasindaki diger bosluklar basilir
		{
			for (int bosluk = 0; bosluk < ustUcgenBoslukSayi; bosluk++)
			{
				cout << "  ";
			}
		}
		ustUcgenBoslukSayi--;//bosluk sayisi 1 azaltilir
		ustUcgenYildizSayi += 2;//yildiz sayisi 2 artirilir
		cout << "*\n";//her satirin sonunda * basilir ve bir alt satira iner
	}
	cout << "*\t\t\t\t\t      *\n* M U H E N D I S L I G I  B O L U M U\t      *\n*\t\t\t\t\t      *\n";

	for (int ucgenSatiri = 0; ucgenSatiri < 6; ucgenSatiri++)//alt satirdaki 2 ucgen ve cercevesi basilir
	{
		cout << "* ";
		for (int bosluk = 0; bosluk < altUcgenBoslukSayi; bosluk++)
		{
			cout << "  ";
		}
		for (int yildiz = 0; yildiz < altUcgenYildizSayi; yildiz++)
		{
			cout << "* ";
		}
		if (ucgenSatiri<2)//ikinci satirdaki ilk ucgenden sonra kucuk ucgen basilir 
		{
			for (int bosluk = 0; bosluk < kucukUcgen2BoslukSayi; bosluk++)
			{
				cout << "  ";
			}
			for (int yildiz = 0; yildiz < kucukUcgen2YildizSayi; yildiz++)
			{
				cout << "* ";
			}
			kucukUcgen2YildizSayi = kucukUcgen2YildizSayi - 2;
		}
		if (ucgenSatiri < 2)//arada kucuk ucgen oldugu icin alt satirin ikinci ucgeni ikiye ayrilir
		{
			for (int bosluk = 0; bosluk < 5; bosluk++)
			{
				cout << "  ";
			}
			for (int yildiz = 0; yildiz < altUcgenYildizSayi; yildiz++)
			{
				cout << "* ";
			}
		}
		else//alt satirin ikinci ucgeninin devami bastirilir 
		{
			for (int bosluk = 0; bosluk < altUcgenBoslukSayi * 2; bosluk++)
			{
				cout << "  ";
			}
			for (int yildiz = 0; yildiz < altUcgenYildizSayi; yildiz++)
			{
				cout << "* ";
			}
		}
		for (int bosluk = 0; bosluk < altUcgenBoslukSayi; bosluk++)//cerceve ve ucgen arasindaki bosluklar basilir
		{
			cout << "  ";
		}
		altUcgenBoslukSayi--;//bosluk bir azalir
		altUcgenYildizSayi += 2;//yildiz 2 artir
		cout << "*\n";//cerceve yildizi basilarak bir alt satira iner
	}
	cout << "*\t\t\t\t\t      *\n";
	for (int sonSatirYildizi = 0; sonSatirYildizi < 24; sonSatirYildizi++)//son satir yildizi basilir
		cout << "* ";
	cout << "\n\n\n";
	system("PAUSE");
}
