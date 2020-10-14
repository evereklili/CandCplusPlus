/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int a,b,carp;
    cin>>a;
    cin>>b;
    carp=a*b;
    cout<<carp<<endl;
    return 0;
}
*/

/* //c programming language
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    
    printf("Selam!");
    return 0;
}
*/
/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int sayi=0, sayac=1;
    char secim='e';
    while(secim=='e')
    {
        cout<<"Asal olup-olmadigi kontrol edilecek:"<<endl;
        cin>>sayi;
        if(sayi>2)
        {
            while(sayac<sayi-1)
            {
                sayac++;// sayı sayaca tam bölünüyor mu? 
                if(sayi%sayac==0)
                {
                    cout<<"Sayi asal değildir!"<<endl;
                    break;
                    
                }
                else if(sayac+1==sayi)
                {
                    cout<<"Sayi asaldir"<<endl;
                }
            }//while close 
        }
        else if(sayi==2)
        {
            cout<<"Girilen sayi en kucuk asal sayidir"<<endl;
        }
        else
        {
            cout<<"Asallik pozitifi sayilarda aranir."<<endl;
        }
        cout<<"e -devam; h- cikis"<<endl;
        cin>>secim;
        sayac=1;
        
    }
    return 0;
}
*/
/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    int tahmin;
    char cevap='e';
    srand(time(NULL)); 
    while(cevap=='e')
    {
        int rastgele_sayi=rand()%100;
        cout<<"0 ile 100 arasinda  bir sayi tuttum."<<endl;
        cout<<"Hadi tahmin et"<<endl;
        cin>>tahmin;
        while(tahmin!=rastgele_sayi)
        {
            if(tahmin<rastgele_sayi)
            {
                cout<<tahmin<<" tuttugun sayidan kucuk"<<endl;
            }
            else
            {
                cout<<tahmin<<"tuttugun sayidan buyuk"<<endl;
            }
            cout<<"tekrar tahmin et"<<endl;
            cin>>tahmin;
        }
        cout<<"Buldun tebrikler. Tuttugum sayi:"<<rastgele_sayi<<" idi."<<endl;
        cout<<"Yeniden oynamak ister misin?"<<endl;
        cout<<"Evet -e, Hayir- h"<<endl; 
        cin>>cevap;
    }                   
    cout<<"Gule Gule"<<endl;
    
    
    return 0;

}
*/

/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    //calculator 
    //
    int s_1, s_2,sonuc;
    //bool degisken turu true, false 2 deger alır. 
    bool sonuc_hesapla;
    char islem, cevap='e';
    while(cevap=='e')
    {
        cout<<"Islem giriniz: "<<endl;
        cin>>s_1>>islem>>s_2;
        sonuc_hesapla=true;
    
        switch(islem)
        {
            
            case '+':
            {
                sonuc=s_1+s_2;
                break;
            }
            case '-':
            {
                sonuc=s_1+s_2;
                break;
            }
            case '*':
            {
                sonuc=s_1+s_2;
                break;
            }
            case '/':
            {
                if(s_2==0)
                {
                   sonuc_hesapla=false;
                   break;
                }
                else
                {
                    sonuc=s_1+s_2;
                    break;
                    
                }
                
            }
            case '%':
            {
                sonuc=s_1%s_2;
                break;
            } 
            default: 
            {
                cout<<"Yanlis islem yaptiniz."<<endl;
                sonuc_hesapla=false;
                break;
            }           
        }
                İF()
                cout<<"Sonuc:"<<endl;
                cout<<s_1<<" "<<islem<<" "<<s_2<<"= "<<sonuc<<endl;
                
            }
        }
            
  
        
        cout<<"islem yapmaya devam etmek istiyor musunuz?"<<endl;
        cout<<"e -Evet; h- hayir"<<endl;
        cin>>cevap;
        
        
        
    }
    
    
    return 0;
}
*/

/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    //kullanıcıdan bir sayi iste ve girilen sayı adedince alt alta yıldız yazdır. 
    int yildiz_sayisi;
    cout<<"yildiz sayisini giriniz:"<<endl;
    cin>>yildiz_sayisi;
    for(int i=0;i<yildiz_sayisi;++i)
    {
        cout<<"*"<<endl;
    }
    
    
    return 0;
}
*/

/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    //kullanıcıdan bir sayi iste ve girilen sayı adedince alt alta yıldız yazdır. 
    int en,boy;
    cout<<"boy giriniz:"<<endl;
    cin>>boy;
    cout<<"en giriniz:"<<endl;
    cin>>en;
   
    for(int i=0;i<boy;++i){
        for(int j=0;j<en;++j)
        {
            cout<<"*"; //kapatamayız. 
            
            
        }
        cout<<endl;
    }
    
    
    
    return 0;
}

//en 5 boy 3 girdik. 
//
*/
/*
#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    int kenar;
    cout<<"Kenar uzunlugu giriniz:"<<endl;
    cin>>kenar;
    for(int i=kenar;i>0;--i)//satır kısmı;
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/*

#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
     //YILDIZLARLA ÜÇGEN ÇİZDİRME
     int kenar;
     cout<<"Kenar degeri giriniz:"<<endl;
     cin>>kenar;                                    //kenar =5;
     for(int i=0;i<kenar;++i){                  // i=0    0<5      i=1      i=2;
         for(int k=0;k<i;++k)                   // k=0;   0<1      k=1      i=2
         {
             cout<<" ";                         //boşluk yazdır. 
         }
         for(int j=kenar;j>i;--j)                //j=5;    
         {
             cout<<"*";
         }
         cout<<endl;
     }
    
    return 0;
}

*/

/*
 *
#include<iostream>
using namespace std;
int main()
{
    int kenar;
    cout<<"kenar uzunlugunu giriniz:"<<endl;
    cin>>kenar;
    for(int i=0;i<kenar;++i){
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
   return 0; 
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    
    int kenar;
    cout<<"kenar gir: "<<endl;
    cin>>kenar;
    for(int i=0;i<kenar;++i)
    {
        
        for(int j=kenar-1;j>i;--j)
        {
            cout<<" ";  
            
        }
        for(int j=0;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    
     
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
float daire_alan(int r);
int karenin_alan(int kenar);
int dikdortgen_alan(int en, int boy);
void alan_yazdir(float alan);  //prototipler tanımlandı. 
int main()
{
    char secim;
    cout<<"Hangi seklin alanini hesaplamak istiyorsunuz?"<<endl;
    cout<<"Daire: d, Dikdortgen : i, Kare: k):";
    cin>>secim;
    float alan;
    switch(secim)
    {
        case 'd':
        {
            int yaricap;
            cout<<"Yaricap giriniz:"<<endl;
            cin>>yaricap;
            alan=daire_alan(yaricap);
            alan_yazdir(alan);
            break;
        }
        case 'i':
        {
            int en, boy;
            cout<<"En ve boy giriniz:"<<endl;
            cin>>en>>boy;
            alan=dikdortgen_alan(en,boy);
            alan_yazdir(alan);
            break;
        }
        case 'k':
        {
            int kenar;
            cout<<"Kenar uzunlugu giriniz:"<<endl;
            cin>>kenar;
            alan=karenin_alan(kenar);
            alan_yazdir(alan);
            break;
        }
        default:
        {
            cout<<"Desteklenmeyen sekil:"<<endl;break;
            
        }
        
    }
    
    return 0;
}
    
float daire_alan(int r)
{
    return 3.14*r*r;
     
}
int karenin_alan(int kenar)
{
    return dikdortgen_alan(kenar,kenar);
}
int dikdortgen_alan(int en, int boy)
{
    return en*boy;
}
void alan_yazdir(float alan)
{
    float x=alan;
    cout<<"Sekil alani:"<<x<<endl;
}
 
*/
 
/*
#include<iostream>
using namespace std;
int fabonacci(int n);
int main()
{
    int nn;
    cout<<"Fibonacci icin sayi giriniz:"<<endl;
    cin>>nn;
    cout<<"Sayinin fibonaccisi: "<<fabonacci(nn)<<endl;
    return 0;
}
int fabonacci(int n)
{
    if(n<0)
    {
        return -1;
    }
    else if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 0;
    }
    else
    {
        return fabonacci(n-1)+fabonacci(n-2);
        
    }
    
}
*/
/*

#include<stdio.h>
int main()
{
    
    int F;
    float C;
    printf("Gir, fahrenhayti");
    fflush(stdout);
    scanf("%d",&F);
    C=(float)(F-32)/1.8;
    printf("Sicaklik...:%.2f \n",C);
    return 0;
}

*/
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int F;
    float C;
    cout<<"Gir,fahrenhayti:"<<endl;
    cin>>F;
    C=(float)(F-32)/1.8;
    cout<<"Sicaklik...:"<<setprecision(4)<<C;
    return 0;
    
    return 0;
}
*/
