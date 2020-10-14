//ömer doğu 
//5.10.2020
//c programlama dersi
/*
#include<stdio.h>
int main()
{
    int arr[3][4]={{1,2,3,4},{1,2,3},{0}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
        {
            printf("%d",arr[i][j]);
            
        }
        printf("\n");
    }
    
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    int a; //tipi ve ismi
    a=10; //deger atama
    cout<<a<<endl;
    a++; //bir artır postfix
    cout<<a<<endl;
    ++a; //icrement bir artır prefix önce artıracak, sonra atayacaktır. 
    cout<<a<<endl;
    int b=20;
    cout<<a+b<<endl; //10+20=30
    cout<<10+20*2<<endl; //operater precedd  operator onceliği var. 
    //temel dor işelm * / + - % 
    cout<<15%2<<endl;  // sonuç 1 çıkacaktır. 
    a--; //a=a-1 olur. assignment olarak geçmektedir. 
    cout<<a<<endl;
    cout<<a--<<endl;//ÖNce atar sonra deger verir. 
    cout<<--a<<endl;
    cout<<a++<<endl;  //Postincrement a nın degeri alınıp kullanılır sonra 1 artırılır. 
    cout<<++a<<endl; // preincremnet a nın degeri 1 artırılıp ve sonra işleme alınır. 
    
                   
    
    
    return 0;
}

*/
/*
 * 
#include<iostream>
using namespace std;

int main()
{
    cout<<"Uc tam sayi giriiz"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<((a+b+c)*(a+b+c))<<endl;;
    
    
    
    return 0;
}
*/
  /*
#include<iostream>
using namespace std;

int main()
{
   int a;
   a=10;
   cout<<a<<endl;
   int b=a<<2;
   cout<<b<<endl;
   b=(b>>3);
   cout<<b<<endl; 
   
   
   
   int c=(01101&10110);
   cout<<c<<endl;
   int d=(22&13);
   cout<<d<<endl;
   
   
   int x=(22^13);
   cout<<x<<endl;
   x=22|13;
   cout<<x<<endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    
    int a=20;
    
    if(a<20){ //true dönerse 
        cout<<"a 20 den kucuktur."<<endl;
    }
    else 
        cout<<"a 20den kucuktur."<<endl;
    if(a==20)
            cout<<a<<endl;
    
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    
    int a;//tip isim
    cout<<"kullanıcıya sayı gr"<<endl;
    cin>>a;
    if(a<50)
    {
        cout<<"F"<<endl;
    }
    else if(a<70)
    {
        cout<<"C"<<endl;
        
    }
    else if(a<90)
    {
        cout<<"B"<<endl;
        
    }
    else 
    {
        cout<<"A"<<endl; 
    }
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    
     int a;
     cin>>a;
     switch(a)
     {
         case 1: cout<<'1'; break;
         case 2: cout<<'2'; break; //break olmaassa bütün switch key basar. 
        
     }
    
    
    return 0;
}
*/

/*

#include<iostream>
using namespace std;
int main(){
    
     int a,b;
     cin>>a>>b;
     if(a==b)
     {
         cout<<"iki sayi esittir"<<endl;
     }
     else 
         cout<<"sayi esit degildir."<<endl;
    
    if(a!=b)
    {
        cout<<"sayilar farklıdır"<<endl;
    }else 
        cout<<"iki sayi farkli değildir"<<endl;
    if(a<b)
    {
        cout<<"ilk sayi kucuk"<<endl;
    }else 
        cout<<"ilk sayi kucuk degildir."<<endl;
        
    if(a<=b)
    {
        cout<<"ilk sayi kucuk esittir."<<endl;
    }else 
        cout<<"ilk sayi kucuk esit degildir"<<endl;
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
int enbuyuk(int,int,int);
int main()
{
    int x,y,z;
    cout<<"Uc sayi giriniz:";
    cin>>x>>y>>z;
    cout<<"Sayilarin en buyugu:"<<enbuyuk(x,y,z)<<endl;
    
    
    system("PAUSE");    
    return 0;
}

int enbuyuk(int a,int b,int c)
{
    int enb;
    if(a>b)
    {
        enb=a;
    }
    else{
        enb=b;
    }
    if(enb<c)
    {
        enb=c;
    }
    return enb;
    
}
*/

/*
#include<iostream>
using namespace std;
int deneme(){
    int x=10;
    return x;
}
int main(void)
{
    cout<<deneme()<<endl;
    
    return 0;
}
*/
/* 
#include<iostream>
using namespace std;
int topla()
{
    int x,y;
    cin>>x>>y;
    return x+y;
}
int main(void)
{
    cout<<"Sayıların toplami:"<<topla()<<endl;
    
    
    
    return 0;
}   
*/
/*

#include<iostream>
using namespace std;
void degerile(int y)
{
    y=9;
    cout<<"Deger ile cagirma!!!"<<endl;
}
int main()
{
    
    int a=5;
    cout<<"Degiskenin ilk degeri:"<<a<<endl;
    degerile(a);
    cout<<"Deger ile cagirdiktan sonra:"<<a<<endl;
    
    
    
    return 0;
}

*/
/*
<pre>Degiskenin ilk degeri:5
Deger ile cagirma!!!
Deger ile cagirdiktan sonra:5
Hit any key to continue...

*/
 /*
#include<iostream>
using namespace std;
void ekranaYaz(int);
int main() {
    int i;
    cout<<"bir sayi giriniz:"<<endl;
    cin>>i;
    ekranaYaz(i);
    return 0;
}
void ekranaYaz(int x)
{
    cout<<"Fonksiyona parametre olarak verilen deger:"<<x<<endl; 
    
}
*/
/*
#include<iostream>
using namespace std;
int ust_Alma(int, int);
int main()
{
    
    int a,b;
    cout<<"Taban"<<endl; cin>>a;
    cout<<"Ust : "<<endl; cin>>b;
    cout<<a<<" ^ "<<b<<" = "<<ust_Alma(a,b)<<endl;
    
    
    
    return 0;
}

int ust_Alma(int x,int y)
{
    int t=1;
    for(int i=1;i<=y;i++)
    {
        t=t*x;
        
    }
    return t;
}

*/

/*
 * 

#include<iostream>
using namespace std;
int faktoriyel(int);
int main()
{
    int x;
    cout<<"bir sayi giriniz:"<<endl;
    cin>>x;
    cout<<"Girilen sayinin faktoriyeli:"<<faktoriyel(x)<<endl;
    
    
    
    return 0;
}

int faktoriyel(int x)
{
    int i, faktoriyel=1;
    for(i=x;i>0;i--)
    {
        faktoriyel=faktoriyel*i;
    }
    return faktoriyel;
}

*/
/*
#include<iostream>
using namespace std;
int fak(int);
int main()
{
    int sayi; 
    cout<<"Faktoriyeli alınacak sayiyi giriniz: ";
    cin>>sayi;
    cout<<fak(sayi)<<endl;
    return 0;
}
int fak(int a)
{
    int x=1;
    if(a>1) x=x*fak(a-1);
    else x=1;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *ptr;
    ptr=&i;
    cout<<"i'nin adresi:"<<&i<<endl<<"ptr degiskenin degeri"<<ptr<<endl;
    cout<<endl;
    cout<<"i nin degeri: "<<i<<endl<<"*ptr nin degeri:"<<*ptr<<endl;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a,*aptr;
    cout<<"Bir sayi giriniz:";
    cin>>a;
    aptr=&a;
    cout<<endl;
    cout<<*aptr<<" sayisi bellekte"<<aptr<<" adresine yerlesiti."<<endl;
    cout<<endl;
    
    return 0;
}
*/



/*
 * 
#include<iostream>
using namespace std;
int main()
{
    int i[5]={1,2,3,4,5};
    int *ptr;
    ptr =i;
    cout<<ptr<<" adresindeki deger"<<*ptr<<endl;
    ++ptr;
    cout<<ptr<<" adresindeki deger: "<<*ptr<<endl;
    return 0;
    
    
    return 0;
}
*/
          /*/
           * 
#include<iostream>
using namespace std;
int main()
{
    int i[5]={1,2,3,4,5};
    int *ptr;
    ptr=i;
    cout<<ptr<<" adresindeki degeri :"<<*ptr<<endl;
    ++ptr;
    cout<<ptr<<" adresindeki degeri :"<<*ptr<<endl;
    
    
    
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
int main()
{
     int i[6]={1,2,3,4,5,6}; //dizi oluşturduk 6 elemanlı yeni dizi. 
     int *ptr;  //daha sonra int türünden ptr adına bir pointer oluşturuldu. 
     ptr=i; //bu göstericiye dizinin başlangıç adresini atadık. 
     cout<<"*ptr nin ilk degeri "<<*ptr<<endl; //*ptr nin ilk değeri yani pointerin işaret ettiği yerdeki ilveriyi ekrana yazdırıyor 
     cout<<"++*ptr nin  degeri :"<<++*ptr<<endl; //işlem önceliği öne çıkıyori  ve *ptr'nin degerini ++ ile arttırarak ptr göstericisinin işaret ettiği yerdeki değerin yani dizinin ilk elemanının değerinin 1 artırılmış hali ekrana yazılıyor. 
     cout<<"*++ptr nin degeri:"<<*++ptr<<endl; //++ 
     cout<<"*ptr++ nın degeri:"<<*ptr++<<endl;
     cout<<"* ptr nin yeni degeri: "<<*ptr<<endl;
    
    
    
    return 0;
}
*/

/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    
    char *ptr; 
    char isim[200];
    int i=0;
    cout<<"isim giriniz:";
    gets(isim);
    ptr=isim;
    while(ptr[i]!=NULL)
    {
        cout<<ptr[i]<<endl;
    }
    cout<<endl;
    
    return 0;
}

*/

       /*
        * 
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    gets(str);
    cout << "You entered: " << str;
    
    return 0;
},

*/
/*

#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    
    char *ptr, isim[20];
    int i=0;
    cout<<"isim giriniz:"<<endl;
    gets(isim);
    
    return 0;
}
*/

//   toplama yapar son basamsı 2 duyarlıdır. 
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double sayi1,sayi2, toplam;
    cout<<"Toplanacak iki sayi giriniz:"<<endl;
    cin>>sayi1;
    cin>>sayi2;
    toplam=sayi1+sayi2;
    cout<<fixed<<setprecision(2)<<toplam<<endl;
    
    
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int sayi_1,sayi_2,carpim;

cout<<"Bir sayi giriniz:"<<endl;
cin>>sayi_1;
cout<<"Bir sayi daha giriniz:"<<endl;
cin>>sayi_2;
carpim=sayi_1*sayi_2;
std::cout<<"Girilen iki sayini carpimi:"<<carpim;
    
    
    return 0;
}
*/



/*
#include<iostream>
 
int main()
{    
     int hiz;
     char tur;
     std::cout<<"Aracin turunu giriniz:";
     std::cout<<std::endl;
     std::cout<<"(Otomobil: o, Otobus: t, Kamyonet: k):";  
     std::cout<<std::endl;
     std::cin>>tur;
     std::cout<<"Aracin hizini giriniz:";
     std::cout<<std::endl;
     std::cin>>hiz;
     if(tur=='o'||tur=='O')
     {
         std::cout<<"Araciniz otomobildir.";
         std::cout<<std::endl;
         if(hiz>82)
         {
             
             
         }
         else
         {
              kurallara_uygundur();
         }
     }
     else if(tur=='t'||tur=='T')
     {
         std::cout<<"Arac otobustur.";
         std::cout<<std::endl;
         if(hiz>70)
         {
             arac_cezali();
         }
         else
         {
             kurallara_uygundur();
         }
     }
     
    
    
void arac_cezali(void)
{
    std::cout<<"Arac cezaliidir.";
    std::cout<<std::endl;
    
}
void kurallar_uygun(void)
{
    std::cout<<"Kurallara uygundur.";
    std::cout<<std::endl;
}
    return 0;
}

*/
/*
#include<iostream>
 
int main()
{    
     tercihe_git:
     int hiz;
     char tur;
     std::cout<<"Aracin turunu giriniz:";
     std::cout<<std::endl;
     std::cout<<"(Otomobil: o, Otobus: t, Kamyonet: k):";  
     std::cout<<std::endl;
     std::cin>>tur;
     std::cout<<"Aracin hizini giriniz:";
     std::cout<<std::endl;
     std::cin>>hiz;
     if(tur=='o'||tur=='O')
     {
         std::cout<<"Araciniz otomobildir.";
         std::cout<<std::endl;
         if(hiz>82)
         {
             
             std::cout<<"Araciniz cezalidir";
             std::cout<<std::endl;
             
         }
         else
         {
              std::cout<<"kurallara uygundur.";
              std::cout<<std::endl;
         }
     }
     else if(tur=='t'||tur=='T')
     {
         std::cout<<"Arac otobustur.";
         std::cout<<std::endl;
         if(hiz>70)
         {
              std::cout<<"Araciniz cezalidir";
              std::cout<<std::endl;
              
         }
         else
         {
             std::cout<<"kurallara uygundur.";
             std::cout<<std::endl;
         }
     }
       else if(tur=='k'||tur=='K')
     {
         std::cout<<"Arac kamyonettir.";
         std::cout<<std::endl;
         if(hiz>50)
         {
              std::cout<<"Araciniz cezalidir";
              std::cout<<std::endl;
              
         }
         else
         {
             std::cout<<"kurallara uygundur.";
             std::cout<<std::endl;
         }
     }
     else
     {
         std::cout<<"Arac turunu yanlis girdiiz.";
         goto tercihe_git;
     }
     
     
    

return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int sayi_1,sayi_2,sonuc;
    char islem;
    cout<<"Islem giriniz:"<<endl;
    cin>>sayi_1>>islem>>sayi_2;
    if(islem=='+')
    {
        sonuc=sayi_1+sayi_2;
        
    }
    else if(islem=='-')
    {
        sonuc=sayi_1-sayi_2;
    }
    else if(islem=='*')
    {
        sonuc=sayi_1*sayi_2;
        
    }   
    else if(islem='/')
    {
        if(sayi_2==0)
        {
            cout<<"Bolum sifir olamaz.";
            return 0; //programı sonlandır. 
        }
        else
        {
            sonuc=sayi_1/sayi_2;
            
        }
    }
    else if(islem=='%')
    {
        sonuc=sayi_1&sayi_2;
    }
    else
    {
        cout<<"Yanlis islem girdiniz. Hatali is akisi yaptiniz."<<endl;
        return 0; //programı sonlandır. 
    }
    cout<<"sonuc:"<<endl;
    cout<<sayi_1<<" "<<islem<<" "<<sayi_2<<" = " <<sonuc<<endl;
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    int sayi;
    cout<<"Tam sayi giriniz:"<<endl;
    cin>>sayi;
    int i=1;
    while(i<=sayi){
        cout<<i<<"\t ";
        ++i;
        
    }
    i=1;
    int j;
    j=++i;
    cout<<"i= "<<i<<"\t"<<"j= "<<j<<endl;
    i=1;
    j=i++;
    cout<<"i="<<i<<"\t"<<"j="<<j<<endl;
    

    
    
    return 0;
}
*/

