/****************************************************************************
*							SAKARYA ÜNİVERSİTESİ							*
*			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ				*
*						  BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ					*
*						    PROGRAMLAMAYA GİRİŞİ DERSİ						*
*																			*
*				ÖDEV NUMARASI:3												*
*				ÖĞRENCİ ADI: MURAD ABASZADE									*
*				ÖĞRENCİ NUMARASI:1612.10556									*
*				DERS GRUBU:C  (1.OGRETIM)									*
*****************************************************************************/

#include "stdafx.h"
#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

bool harfMi(char harf);
int harfSay(string cumle);
int kelimeSay(string cumle);
void noktalamaIsaret(string cumle);
void kelimelerdeHarfSay(string cumle);
void palindromMu(string cumle);
int sesliHarfSay(string cumle);
void kelimePalindromMu(string cumle);
bool ekKelimePalindromMu(string kelime);

struct Cumle
{
	string cumle;
	int kelimeSayi;
	int harfSayi;
	int sesliHarfSayi;
};
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	Cumle cumle1;
	getline(cin, cumle1.cumle);
	cumle1.kelimeSayi = kelimeSay(cumle1.cumle);
	cumle1.harfSayi = harfSay(cumle1.cumle);
	cumle1.sesliHarfSayi = sesliHarfSay(cumle1.cumle);

	cout << "\nCumlenin icindeki harflerin sayi : " << cumle1.harfSayi << "\n\n";
	cout << "Cumlenin icindeki kelimelerin sayi : " << cumle1.kelimeSayi << "\n\n";
	noktalamaIsaret(cumle1.cumle);cout<< "\n";
	cout << "Bu cumle "; palindromMu(cumle1.cumle);cout<< "\n";
	kelimelerdeHarfSay(cumle1.cumle);cout<< "\n";
	cout << "Cumlenin icindeki sesli harflerin sayi : " << cumle1.sesliHarfSayi << "\n\n";
	kelimePalindromMu(cumle1.cumle);
	
	system("pause");
	return 0;
}

bool harfMi(char harf)//verilen karakterin harf olup olmadigini bulan fonksiyon
{					  //diger fonksiyonlarin icinde kolaylik saglamak icin yazilmistir
	if ((harf >= 65 && harf <= 90) || (harf >= 97 && harf <= 122))
		return true;
	return false;

}
int harfSay(string cumle)
{
	int harfSayisi = 0;//sayac
	for (int i = 0; i <= cumle.length(); i++)
	{
		if (harfMi(cumle[i]))//cumlede harfle karsilasdigi zaman sayacin degeri artar
			harfSayisi++;
	}
	return harfSayisi;
}

int kelimeSay(string cumle)
{
	int adet = 0;//sayac
	for (int i = 0; i <= cumle.length(); i++)
	{
		if (!harfMi(cumle[i]))//cumlede harfden baska bir simgeyle(. , ! ? : ve s.) karsilasirsa sayacin degeri artar
		{
			adet++;
		}
	}//bu dongu cumlenin sonunda simge koyulmadigini varsayarak calisti
	if (!harfMi(cumle[cumle.length() - 1]))//eger cumlenin sonun bir simge olarsa sayacin degerinden azalir
		adet--;
	return adet;
}

void noktalamaIsaret(string cumle)
{
	cout << "Noktalama isaretleri : ";
	for (int i = 0; i <= cumle.length(); i++)
		if ((33 <= cumle[i] && cumle[i] <= 47) || (58 <= cumle[i] && cumle[i] <= 64) || (91 <= cumle[i] && cumle[i] <= 96) || (123 <= cumle[i] && cumle[i] <= 126))
			cout << setw(3) << cumle[i];
	cout << endl;
}

void kelimelerdeHarfSay(string cumle)
{
	int baslangic = 0;//bu degisken dongu degiskeni her sefer 0 dan baslamamasi icin
	for (int i = baslangic; i <= cumle.length(); i++)
	{
		if (!harfMi(cumle[i]))
		{

			string gecici(cumle.begin() + baslangic, cumle.begin() + i);//cumlenin icindeki kelimeyi tutmak icin
			cout << "'" << gecici << "' kelimesinin harf sayisi : " << gecici.length() << endl; //kelimelerin sayi hesaplanir
			baslangic = i + 1;//bir dahaki sefere dongu degiskeni aradaki simgenin uzerinden atlayarak diger kelimeden baslar

		}
	}
}

void palindromMu(string cumle)
{
	int a = 0, b = 0;//cumlenin sol terefden harf disi birsey olarsa a sagdan harf disi birsey olarsa b ile diger harfa gecilir
	int flag = 0;
	for (int i = 0; i < cumle.length()/2; i++)
	{
		if (harfMi(cumle[i + a]) && harfMi(cumle[cumle.length() - 1 - i - b]))
		{
			if (cumle[i + a] == cumle[cumle.length() - 1 - i - b])
			{
			}
			else
			{
				flag = 1;
				break;
			}
		}
		else if (!harfMi(cumle[i + a]) && harfMi(cumle[cumle.length() - 1 - i - b]))
		{
			a++;
			if (cumle[i + a] == cumle[cumle.length() - 1 - i - b])
			{
			}
			else
			{
				flag = 1;
				break;
			}
		}
		else if (harfMi(cumle[i + a]) && !harfMi(cumle[cumle.length() - 1 - i - b]))
		{
			b++;
			if (cumle[i + a] == cumle[cumle.length() - 1 - i - b])
			{
			}
			else
			{
				flag = 1;
				break;
			}
		}
		else
		{
			a++;
			b++;
			if (cumle[i + a] == cumle[cumle.length() - 1 - i - b])
			{
			}
			else
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		cout << "palindromdur" << endl;
	else
		cout << "palindrom degil" << endl;
}

int sesliHarfSay(string cumle)
{
	int adet = 0;
	for (int i = 0; i <= cumle.length(); i++)
	{
		if (cumle[i] == 'a' || cumle[i] == 'o' || cumle[i] == 'u' || cumle[i] == 'e' || cumle[i] == 'i' || cumle[i] == 'A' || cumle[i] == 'O' || cumle[i] == 'U' || cumle[i] == 'E' || cumle[i] == 'I')
			adet++;
	}
	return adet;
}

void kelimePalindromMu(string cumle)
{
	int flag = 0;
	int baslangic = 0;
	int son = 0;
	do
	{
		for (int i = baslangic; i <= cumle.length(); i++)
		{
			int a = 0;
			if (!harfMi(cumle[i]))
			{
				
				string gecici(cumle.begin() + baslangic, cumle.begin() + i);
				if (ekKelimePalindromMu(gecici))
				{
					flag = 1;
				}		
				baslangic = i + 1;
				
			}
		}
	} while (baslangic<cumle.length());
	if (flag == 0)
		cout << "Cumlede palindrom kelime yoktur" << endl;
	else
		cout << "Cumlede palindrom kelime vardir" << endl;
}

bool ekKelimePalindromMu(string kelime)//kelime palindromsa true degilse false dondurur
{
	int flag = 0;
	for (int k = 0; k <= kelime.length()/2; k++)
	{

		if (kelime[k] == kelime[kelime.length() - 1 - k])
		{

		}
		else//kelimenin ilk ve son harfi esit olmazsa bayrak kalkar ve false olur
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return true;
	return false;
}
