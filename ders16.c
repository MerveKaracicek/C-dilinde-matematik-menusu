#include <stdio.h>
#include <stdlib.h>

int main() {
    int islemno;
    printf("Matematik Menusu:\n");
    printf("********************\n\n");
    printf("1-Karede alan ve cevre hesabi:\n");
    printf("2-Girilen sayinin kupu:\n");
    printf("3-Dairede alan ve cevre hesabi:\n");
    printf("4-5a2+7a+9 a'ya gore islemin sonucu:\n");
    printf("5-Dikdortgende alan ve cevre hesabi:\n");
    printf("6-Faktoriyel hesaplama:\n");
    printf("7-Toplama islemi:\n");
    printf("8-Cikarma islemi:\n");
    printf("9-Carpma islemi:\n");
    printf("10-Bolme islemi:\n");
    printf("11-Girilen sayi ve usse gore sonuc hesaplama:\n");
    printf("12-Tabani ve yuksekligi girilen ucgenin alanini hesaplama:\n");
    
    printf("Islem numarasi giriniz:");
    scanf("%d",&islemno);
    
    switch (islemno){
    case 1 : ;
    int kenar,alan,cevre;
    printf("Karenin bir kenar uzunlugunu giriniz:");
    scanf("%d",&kenar);
    alan=kenar*kenar;
    cevre=4*kenar;
    printf("Alan=%d----Cevre=%d",alan,cevre);
    break;
    case 2: ;
    int sayi,kup;
    printf("Kupu alinacak sayiyi giriniz: ");
    scanf("%d",&sayi);
    kup=sayi*sayi*sayi;
    printf("Sonuc=%d ",kup);
    break;
    case 3: ;
    float pi=3;
    int yaricap;
    printf("Yaricap giriniz:");
    scanf("%d",&yaricap);
    alan=pi*yaricap*yaricap;
    cevre=2*pi*yaricap;
    printf("Alan=%d--------Cevre=%d ",alan,cevre);
    break;
    case 4: ;
    int sonuc,a;
    printf("A degeri giriniz: ");
    scanf("%d",&a);
    sonuc= a*a*5+7*a+9;
    printf("Sonuc=%d",sonuc);
    break;
    case 5: ;
    int kisa,uzun;
    printf(" Kisa kenar uzunlugu giriniz:");
    scanf("%d",&kisa);
    printf("Uzun kenari giriniz:");
    scanf("%d",&uzun);
    alan=kisa*uzun;
    cevre=2*(kisa+uzun);
    printf("Alan=%d--------Cevre=%d",alan,cevre);
    break;
    case 6: ;
    int i,sayii;
    int fakt=1;
    printf("Faktoriyeli alinacak sayiyi giriniz:");
    scanf("%d",&sayii);
    for (i=1;i<=sayii;i++){
    fakt=fakt*i;
}
    printf("Faktoriyel=%d ",fakt);
    break;
    case 7: ;
    int n1,n2;
    printf("Birinci sayi= ");
    scanf("%d",&n1);
    
    printf("ikinci sayi= ");
    scanf("%d",&n2);
    int sonucc=n1+n2;
    printf("Sonuc=%d ",sonucc);
    break;
    case 8: ;
    int no1,no2;
    printf("Birinci sayi= ");
    scanf("%d",&no1);
    
    printf("ikinci sayi= ");
    scanf("%d",&no2);
    int sonuccc=no1-no2;
    printf("Sonuc=%d ",sonuccc);
    break;
    case 9: ;
    int number1,number2;
    printf("Birinci sayi= ");
    scanf("%d",&number1);
    
    printf("ikinci sayi= ");
    scanf("%d",&number2);
    int r=number1*number2;
    printf("Sonuc=%d ",r);
    break;
    case 10: ;
    int num1,num2;
    printf("Birinci sayi= ");
    scanf("%d",&num1);                      
    
    printf("ikinci sayi= ");
    scanf("%d",&num2);
    int result=num1/num2;
    printf("Sonuc=%d ",result);
    break;
    case 11: ;
    int us,number;
    int res=1;
    printf("Sayi giriniz:");
    scanf("%d",&number);
    
    printf("Us giriniz:");
    scanf("%d",&us);
    
    for (i=1;i<=us;i++){
    int i;
    res= res*number;
}
    printf("Sonuc=%d ",res);
    break;
    case 12: ;
    int yukseklik,taban,alann;
    printf("Yukseklik giriniz:");
    scanf("%d",&yukseklik);
    
    printf("Taban uzunlugu giriniz:");
    scanf("%d",&taban);
    alann=(taban*yukseklik)/2;
    printf("Ucgen alani=%d ",alann);
    break;
}
  
  system("PAUSE");	
  return 0;
}
