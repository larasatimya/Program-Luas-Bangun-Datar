#include <stdio.h>
#define phi 3.14
void luassegitiga()
{
int a, t, luas;
printf("\n");
printf("===========================\n");
printf("| Hitung Luas Segitiga |\n");
printf("===========================\n");
printf(" Input Alas (cm) : ");
scanf("%d",&a);
printf(" Input Tinggi (cm) :");
scanf("%d",&t);
luas=(a*t)/2;
printf(" Luas Segitiga : %d \n",luas);
}

void luaslingkaran()
{
int r;
float luas;
printf("\n");
printf("===========================\n");
printf("| Hitung Luas Lingkaran |\n");
printf("===========================\n");
printf(" Input Jari-jari (cm) : ");
scanf("%d",&r);
luas = phi*(r*r);
printf(" Luas Lingkaran : %.2f \n",luas);
}

void luaspersegipanjang()
{
int p, l, luas;
printf("\n");
printf("==========================\n");
printf("| Hitung Luas Persegi Panjang |\n");
printf("==========================\n");
printf(" Input Panjang (cm) : ");
scanf("%d",&p);
printf(" Input Lebar (cm) : ");
scanf("%d",&l);
luas=p*l;
printf("Luas Persegi Panjang : %d \n",luas);
}

void luaspersegi()
{
int sisi, luas;
printf("\n");
printf("==========================\n");
printf("| Hitung Luas Persegi |\n");
printf("==========================\n");
printf("Input sisi (cm) : ");
scanf("%d",&sisi);
luas=sisi*sisi;
printf("Luas Persegi : %d \n",luas);
}

//Program Utama
void main()
{
int pilih;
char ulang;
do
{
printf("========================================\n");
printf("| Program Menghitung Luas Bangun Datar |\n");
printf("========================================\n");
printf("| 1. Hitung Luas Segitiga |\n");
printf("| 2. Hitung Luas Lingkaran |\n");
printf("| 3. Hitung Luas Persegi Panjang |\n");
printf("| 4. Hitung Luas Persegi |\n");
printf("========================================\n");
printf(" Pilihan Anda : ");
scanf("%d", &pilih);
switch(pilih)
{
case 1 : luassegitiga();
break;
case 2 : luaslingkaran();
break;
case 3 : luaspersegipanjang();
break;
case 4 : luaspersegi();
break;
default : printf(" Pilihan Anda Salah!\n");
}
printf("\n");
printf("=================================\n");
printf(" Kembali ke Menu Utama ? (Y/T) : ");
scanf("%c", &ulang); scanf("%c",&ulang);
printf("=================================\n");
}
while(ulang=='y' || ulang=='Y');
}
