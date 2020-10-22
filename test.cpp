//aşırı yükleme göreceğiz.
//aşırı yüklemede en az iki fonksiyon olmalıdır. 
//aynı isimde olmalıdır bu iki fonksiyon
//farklı argümanlara sahip olmalıdır. 
//bu durumda aşırı yükleme dediğimiz yapı ortaya çıkr 
//example 1
/*
#include<iostream>
using namespace std;
int toplama(int a, int b){
    return a+b;
}
int toplama(double a, double b)
{
    return a+b;
}
int  toplama(double a, int b)
{
    return a+b;
}

int toplama(int a, double b)
{
    return a+b;
}
int main(){
    int a; double b; double c,e;
    a=toplama(5,8);
    b=(10.8,15.8);
    c=(10.9,5);
    e=(5,10.01);
    
    cout<<"Tamsayilari toplayalim(5+8):"<<a<<endl;
    cout<<"Ondalikli sayilari toplayalim(10.8+15.8):"<<b<<endl;
    cout<<c<<endl;
    cout<<e<<endl;
    return a;
}
*/
/*
 * 
 * Yukaridaki toplama işleminde iki tane aynı isimde farklı parametrelerde fonksiyon mevcuttur. bu fonksiyonlardan 
 * birisi int döndürürüken diğeri de double döndürmektedir. işte bu paradoks gibi görünen yapıya aşırı yükleme diyoruz. 
 * 
 * /
 
*/
/*
#include<iostream>
using namespace std;
int kare_al(int sayi)
{
    return sayi*sayi;
}

double kare_al(double sayi)
{
    return sayi*sayi;
}


int main()
{
    int a;
    double b;
    cin>>a;
    cin>>b;
    cout<<a<<" sayisini karesi:"<<kare_al(a)<<endl;
    cout<<b<<" sayisinin karesi:"<<kare_al(b)<<endl;
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
void sayi(int a)
{
    cout<<a<<endl;
}
void sayi(int a,int b)
{
    cout<<a<<"-"<<b<<endl;
}
void sayi(double a)
{
    cout<<a<<endl;
    
}
int main()
{
    sayi(3);
    sayi(5,8);
    sayi(6.3);
    return 0;
}
 */
 //burada 3 farklı fonksiyon var ama tek bir "sayi" ismi altında birleşmiş durumdadır. 
 //ik fonksiyon int argumanı, ikinci fonkisyon int arguman; ucuncu fonksiyonda double argunamı mevcuttur. 
 //sıfırdan kucukse sayının pozitifini yazsın. degilse o sayiyiy yazsin. 
 /*
 #include<iostream>
 using namespace std;
 void  mutlak_deger(int a)
 {
     if(a>0)
     {
         cout<<"girilen sayi zaten pozitiftir."<<endl;
         
     }
     else
     {
         cout<<"girilen sayi negatiftir ve pozitif hali(durumu):"<<a*-1<<endl;
         
     }
     
 }
 void mutlak_deger(double a)
 {
     if(a>0)
     {
         cout<<"girilen sayi pozitiftir."<<endl;
         
     }
     else 
     {
         cout<<"girilen ayi negatiftir.pozitif hali(durumu):"<<a*-1<<endl;
         
     }
 }
 
 int main()
 {
     int x,y,sayi1=-15,sayi2=25;
     double sayi3=-6.75;
     mutlak_deger(sayi1);
     mutlak_deger(sayi2);
     mutlak_deger(sayi3);
     
    
     return 0;
 }
*/
  /*
#include<iostream>
using namespace std;
class varsayilan{
public:
    void fonk(int a=0, float b=1.1,char ch='m',string s="OMERDOGU")
    {
        cout<<a<<" - "<<b<<" - "<<ch<<" - "<<s<<"\n \n";
    }
    
}nesne;
int main()
{
    cout<<"1"<<endl;
    nesne.fonk();
    cout<<"2"<<endl;
    
    nesne.fonk(5);
    cout<<"3"<<endl;
    nesne.fonk(5,2.3);
    cout<<"4"<<endl;
    nesne.fonk(5,2.3,'a');
    cout<<"5"<<endl;
    nesne.fonk(5,2.3,'a',"C++");
    cout<<"6"<<endl;
    return 0;
}

<pre>1
0 - 1.1 - m - OMERDOGU
 
2
5 - 1.1 - m - OMERDOGU
 
3
5 - 2.3 - m - OMERDOGU
 
4
5 - 2.3 - a - OMERDOGU
 
5
5 - 2.3 - a - C++
 
6
Hit any key to continue...


</pre>
*/
/*
#include<iostream>

using namespace std;
class yapicilar{
    double sayi1, sayi2;
public:
    yapicilar(){
        sayi1=1;
        sayi2=2;
    }
    yapicilar(double x, double y)
    {
        sayi1=x+3;
        sayi2=y+3;
        
        
    }
    void goruntule()
    {
        cout<<"Sayi1:"<<sayi1<<" - sayi2:"<<sayi2<<endl;
    }
    
    
};
int main()
{
    yapicilar nes1,nes2(10,20);
    nes1.goruntule();
    nes2.goruntule();
    return 0;
}

*/
/*

#include<iostream>
#include<string>
using namespace std;

class nesnedizileri{ //sınıf tanımladık. 
    char harf; //private bir char harf tanımladık. 
public:
    nesnedizileri()  //yapıcı fonksiyon tanımladık. içine private tanımlana sınıf içinde kullanıclacak harf değişkenine 'A' atadık. 
    {
        harf='A';
    }
    nesnedizileri(char x)  //
    {
        harf=x;
    }
    char don(){  //dondur fonksiyonu ile getter ve setterlera yaptık. 
     * 
        return harf;
    }
};
int main()
{
    nesnedizileri dizi1[12];
    nesnedizileri dizi2[12]={'B','U','S','R','A','D','E','M','I','R','E','L'};
    for(int i=0;i<12;i++)
    {
        cout<<dizi1[i].don()<<" -";
    }
    cout<<"\n----------------\n";
    for(int i=0;i<12;i++)
    {
        cout<<dizi2[i].don()<<" - ";
        
    }
    cout<<"\n----------------\n";
    return 0;
        
}
*/

//Operator de aşırı yükleme
//c ++ da operatorere bilinen anlamalrının dışında yeni anlamlar kazandırılabilinir. 
// kendi istediğimiz işlemlerin yapılması sağlanabilinir. 
// buna operatörlerin aşırı yüklemesi denir. 
//operatorleri aşırı yükleyerek yapılabilecek her şey sürekli olarak kullandığımız normal fonksiyonlar ile de de elde edilelinir. 
//ancak yapacaklarımızı aşırı yükleme ile yaparak programın daha anlaşılır ve okunaklı olması sağlanır. 
//TEK OPERANTLI OPERATORLERİ AŞIRI YÜKLEMEK 
//2 yolla olabilir. 1. Argümansız üye fonksiyon kullanarak 2. Tek argümanlı arkadaş fonksiyon kullanarak 

/*
//1. Argümansız üye fonksiyon kullanarka aşırı yükleme
#include<iostream>
using namespace std;
class sinif{
    double sayi1, sayi2;// private iki tane double değişken tanımladık. 
public:
    sinif() { sayi1=0; sayi2=0; } //varsayılan 
    sinif(double a1, double a2){ sayi1=a1; sayi2=a2; } //burada gelen sinif sayıların aldık. sonra da eşitledik. 
    sinif& operator--() { sayi1--; sayi2--; return *this; } //sonra sinif operator--() şeklinde aşırı yükleme fonksiyonu tanımladık. 
    void ekranaYaz() { cout<<sayi1<<"\t"<<sayi2<<endl; 
    }
};

int main()
{
    sinif nesne(11.2,8.5);
    --nesne;
    nesne.ekranaYaz();
    return 0;
}
*/
//2.TEK ARGUMANLI ARKADAŞ FONKSİYONLARI İLE AŞIRI YÜKLEME 

/*
#include<iostream>
using namespace std;
class deneme{ 
    bool x,y;
public:
    deneme() { x=0; y=0; }; //varsayılan yapıcı fonksiyon 
    deneme(bool j, bool k) { x=j; y=k; };
    void ekranYaz() { cout<<"x: "<<x<<"  y: "<<y<<endl; } 
    friend deneme& operator!(deneme a); //arkadaş fonksiyon bildirimi 
 };
 deneme operator!(deneme a) { 
     deneme temp;
     temp.x=!a.x;
     temp.y=!a.y; 
     return temp;
 }
int main()
{
    deneme ilk(1,0), son; son=ilk; son.ekranaYaz();  return 0;
}
*/

//İKİ OPERANTLI OPERATORLERLE ASIRI YUKLEME
//Adından da anlaşılacağı gibi, iki operand arasında şlem yapan operatrlerin aşırı yüklenemsini , tek parameterli üye fonksiyonları veya arkadaş fonksiyonların tek paremetre alırlar. 
//Burada fonksiyonu çağıran nesne operatörün solunaki nesnedir fonksiyon parametresi de operatörün sağındaki nesnedir. 
//Example:

/*
#include<iostream>
#include<stdarg.h>
using namespace std; 
class topla{
    double x,y; //topla sınıfına double 2 tane eleman tanımladık. 
public: 
    topla(){ }; //yapıcı fonksiyon varsayılan. 
    topla(double a, double b) { x=a; y=b; }
    topla operator+(topla a) { topla tmp; tmp.x=x+a.x; tmp.y=y+a.y; return tmp; } //önce tmp isimli topla nesnesi tanımladık. tmp.x solundaki nesnenin x degerini operatorün solundaki
    topla& operator=(topla b){  x=b.x; y=b.y; return *this; }
    void ekranaYaz(){ cout<<"x:"<<x<<"  y: "<<y<<endl; }
};
int main()
{
    topla toplam1(1.2,1.4), toplam2(4.6,5.1), toplam3;
    toplam3=toplam1+toplam2;
    toplam3.ekranaYaz();
    return 0; 
    
}
*/

#include<iostream>
using namespace std;

class Karsilastirma
{
    int x,y;
public:
    Karsilastirma(){ };
    Karsilastirma(int a, int b){ x=a; y=b; }
    bool operator<(Karsilastirma a) { if((x+y)<(a.x+a.y)){ return 1; } else { return 0; } } 
    bool operator>(Karsilastirma b) { if((x+y)>(b.x+b.y)){ return 1; } else { return 0; } } 

};

int main()
{
    Karsilastirma nesne1(70,20), nesne2(20,50);
    if(nesne1<nesne2) { cout<<"1.nesne 2. nesneden daha buyuk"<<endl; }
    if(nesne1<nesne2) { cout<<"1.nesne 2. nesneden daha buyuk"<<endl; }
     
     return 0;
}
