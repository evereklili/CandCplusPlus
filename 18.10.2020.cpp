/*
#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Hello World" << std::endl;
    return 0;
}
*/
/*
#include <iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char **argv)
{
    bool b1=true;
    bool b2=false;
    cout<<"b1..:"<<b1<<endl;
    cout<<"b2..:"<<b2<<endl;

    
    return 0;
}

*/
/*
#include <iostream>
#include<stdlib.h>
#include<stdbool.h>
int main(int argc, char **argv)
{
    bool b1=true;
    bool b2=false;
    printf("b1..:%d \n",b1);
    printf("b2..:%d \n",b2);
    
    

    return 0;

}
*/
//c++ class yapısı 
/*
#include <iostream>
 
using namespace std;
class dortgenler{
public:
    int kisa_kenar;
    int uzun_kenar;
    int alan(){
        return kisa_kenar*uzun_kenar;
    }
    int cevre()
    {
        return 2*(uzun_kenar+kisa_kenar);
    }
    
}x;  //class tanımı bitti. x nesnesine oluşturulan dortgenler klasını tanımladı. 

int main(int argc, char **argv)
{
    cout<<"Kisa kenar giriniz:"<<endl;
    cin>>x.kisa_kenar;
    cout<<"Uzun kenar giriniz:"<<endl;
    cin>>x.uzun_kenar;
    cout<<"Dortgenin alani:"<<x.alan()<<endl;
    cout<<"Dortgenin cevresi:"<<x.cevre()<<endl;
       
    return 0;
}
// burada class yapısını tanımladık. 
*/

/*
#include<iostream>
using namespace std;
class goster{
    int sayi; //private özelliğinde yani sınıf içnden erişilebilinr. 
public: 
    void atama_yap(int a)
    {
        sayi=a;
        
    }
    int ekrana_yaz()
    {
        return sayi;
    }
}x,y;

int main()
{
    x.atama_yap(50);
    y.atama_yap(100);
    cout<<x.ekrana_yaz()<<endl;
    cout<<y.ekrana_yaz()<<endl;
    //bu örnekte goster isimli sınıf oluşturduk. 
    //sayi isminde bir degisken tanımladik ve bu private özelliğinde. 
    //sonra pubic tipinde iki fonsiyon ve tanımladık. bunları x, y nesnesi yardımı ile yazdırdık. 
    
    
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class personel{
    int yas;
public:
    void gir(int Yas)
    {
        yas=Yas;
        
    }
    void yasyaz(){
        cout<<yas<<endl;
    }
}a;

int main()
{
    int x;
    cout<<"Personelin yasini giriniz:"<<endl;
    cin>>x;
    a.gir(x);
    cout<<"Personelin Yasi:"<<endl;
    a.yasyaz();
    cout<<endl;
    
    return 0;
}

*/

/*
#include<iostream>
#include<cstring>
 
using namespace std;

class personeller{
    char personel_adi[20],personel_soyadi[20];
    int yas;
public:
    void arsiv(char *padi, char *psoyadi, int sayi)
    {
        strcpy(personel_adi, padi); // padi geleni personel_adi aktar. 
        strcpy(personel_soyadi,psoyadi);
        yas=sayi;
        
    }
    void goruntule()
    {
        cout<<"Personel adi:"<<personel_adi<<endl;
        cout<<"Personel soyadi:"<<personel_soyadi<<endl;
        cout<<"Personel yasi:"<<yas<<endl;
    }
    
}p1,p2,p3;

int main()
{
    p1.arsiv("OMER","DOGU",33);
    p2.arsiv("Busra","DEMIREL",25);
    p3.arsiv("Ibrahim","DOGU",27);
    p1.goruntule();
    p2.goruntule();
    p3.goruntule();
    
 
    return 0;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;

class personeller{
    string personel_adi,personel_soyadi;
    int yas;
public:

    void arsiv(string padi,string psoyadi,int sayi)
    {
        personel_adi=padi;
        personel_soyadi=psoyadi;
        yas=sayi;
    }
    void goruntule()
    {
        cout<<"personel adi:"<<personel_adi<<endl;
        cout<<"personel soyadi:"<<personel_soyadi<<endl;
        cout<<"personel yasi:"<<yas<<endl;
        
    }
};

int main()
{
    personeller p1,p2,p3; //nesne oluşturduk sınıfımızdan. 
    p1.arsiv("Omer","DOGU",33);
    p2.arsiv("Busra","DEMIREL",25);
    p3.arsiv("Ibrahim","DOGU",27);
    
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
class isciler{
    string ad, soyad;
    int saat_ucreti, calistigi_saat;
    double aylik_maas;
public:
    void bilgi_gir()
    {
        cout<<"İscinin adini giriniz:"<<endl;
        cin>>ad;
        cout<<"iscinin soyadini giriniz:"<<endl;
        cin>>soyad;
        cout<<"iscinin 1 saatte aldigi ucret"<<endl;
        cin>>saat_ucreti;
        cout<<"iscinin 1 ayda kac saat calistigi:"<<endl;
        cin>>calistigi_saat;
        
    }
    double maas()
    {
        return aylik_maas=saat_ucreti*calistigi_saat;
        
    }
    void goster()
    {
        cout<<"İscinin adi:"<<ad<<endl;
        cout<<"iscinin soyadi:"<<soyad<<endl;
        cout<<"iscinin maasi:"<<maas()<<endl;
        yorum(maas());
        
    }
    void yorum(double aylik_maas)
    {
        if(aylik_maas>800)
        {
            cout<<"Maas asgari ucretten yuksektir."<<endl;
        }
        else 
            cout<<"maas asgari ucretten dusuktur."<<endl;
            
    }
    
}is1,is2;

int main()
{
    
    is1.bilgi_gir();
    is2.bilgi_gir();
    is1.goster();
    is2.goster();
    return 0;
    
}
*/
/*
#include<iostream>
#include<ctime>
using namespace std;
class constOrnek{
    
public:
    int sayi;
    constOrnek()
    {
        sayi=0;
    }
    void sayiAta(int x)
    {
        sayi=x;
    }
    int dondur() const{
        return sayi;
    }
};

int main()
{
    const constOrnek test; //Nesneyi const olarak tanımladık. 
    constOrnek test2; //nesne const olmadan tanımladık. 
    test.dondur(); // nesne const --fonksiyon const. 
    test.sayiAta(5); //nesne const- fonksiyon const değil. !
    test2.dondur(); //nesne const değil, fonksiyon const
    test2.sayiAta(5); //nesne const değil fonksiyon const değil!
    
    return 0;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;
class sayilar{
public:
    int a,b,c;
    sayilar(){
        a=1;b=4;c=15;
    }
    
}sayi;

int main(){
     cout<<"A degeri:"<<sayi.a<<endl;
     cout<<"B degeri:"<<sayi.b<<endl;
     cout<<"C degeri:"<<sayi.c<<endl;
     
     return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
class insanlar{
    string ad, soyad;
    int yas;
public:
    insanlar(string a, string s, int y)
    {
        ad=a;
        soyad=s;
        yas=y;
        
    }
    void goster(){
        cout<<"Ad:"<<ad<<endl;
        cout<<"Soyad:"<<soyad<<endl;
        cout<<"Yas:"<<yas<<endl;
        cout<<"---------\n"<<endl;
    }
    
    
};
int main()
{
    
    insanlar insan1("Busra","Demirel",25);
    insanlar insan2("Omer","DOGU",33);
    insanlar insan3("Ibrahim","DOGU",27);
    
    insan1.goster();
    insan2.goster();
    insan3.goster();
    return 0;
}
*/
    
/*
#include<iostream>
#include<string>
using namespace std;
class test{
    int a;
public:
    test();
    ~test();
    void goruntule();
    
}x;
test::test(){
    cout<<"Yapici fonksiyon calisti\n";
    a=5;
}
test::~test(){
    cout<<"Gorev bitti, yokediliyor...\n";
}
void test::goruntule(){
    cout<<"a degeri: "<<a<<endl;
}

int main()
{
    x.goruntule();
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
class nesneden_nesneye{
    int a;
public:
    void atama_yap(int);
    int goruntule();
    
};

void nesneden_nesneye::atama_yap(int sayi){
    a=sayi;
    
}
int nesneden_nesneye::goruntule()
{
    return a;
}

int main()
{
    nesneden_nesneye nesne1, nesne2;
    nesne1.atama_yap(123);
    nesne2=nesne1;
    cout<<"Nesne 1 degeri:"<<nesne1.goruntule()<<endl;
    cout<<"Nesne 2 degeri:"<<nesne2.goruntule()<<endl;
    return 0;
    
}
*/
/*
#include<iostream>
using namespace std;
inline int dikdortgen(int s1,int s2)
{
    return s1*s2;
}
int main()
{
    int sayi1,sayi2;
    cout<<"Kısa kenari giriniz:"<<endl;
    cin>>sayi1;
    cout<<"Uzun kenarı giriniz:"<<endl;
    cin>>sayi2;
    cout<<"Dikdörgenin alanı:"<<dikdortgen(sayi1,sayi2)<<endl;
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class ornek{
    int sayi;
public:
    friend int sayi_fonk(ornek deneme);
    ornek(){
        sayi=12;
        
    }
}a;

int main(){
    cout<<sayi_fonk(10)<<endl;
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
class kup{
    int sayi;
public:
    kup(){
        sayi=5;
        
    }
    friend int kup_al();
    
}k;
int kup_al(){
    return k.sayi*k.sayi*k.sayi;
}
int main()
{
    cout<<kup_al()<<endl;
    return 0;
}
*/

