 //c dili ile yazılması:
 /*
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int yas;
     printf("Yasinizi giriniz:");
     scanf("%d",&yas);
     switch(yas)
     case 0: { printf("Bebeklik..."); break; }
     case 1:
     case 2: 
     case 3: { printf("Cocukluk"); break; }
     case 13: { printf("Ergenlik"); break; }
     case 18..34: { printf("Genclik"); break;}
     case 35..57: { printf("Yetiskinlik"); break;  }
     case 57..90: { printf(" Yaslilik "); break; }
     case default: { printf("Olmustur"); break; }
     return 0;
 }
 
  * */
  /*
   
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
 
class otel
{
    string *musteri_adi[100], *soyadi[100]; 
    int toplam, sayac1, sayac2;
    enum statu{
        bos,dolu;
    }odalar[45];
public:
    otel();
    void otel_isletmesi();
    void oda_rezervasyonu();
    void oda_bosalt();
    void musterilerin_sayisi();
    void yatak_odasi_raporu();
    void seminer_odasi_raporu();
    void gelir();
    
};

otel::otel(){
    sayac1=0;
    sayac2=0;
    toplam=0;
    oda_isletmesi();
}
void otel::oda_isletmesi()
{
    
    for(int a=1;a<46;a++)
    {
        odalar[a]=bos;
    }
    int sayi;
    do{
        cout<<"\n \t\t ---OMER DOGU OTELLERI ---\n"<<endl;
        cout<<"\t \t1.Oda Rezervasyonu:"<<endl;
        cout<<"\t \t2.Oda Bosaltma:"<<endl;
        cout<<"\t\t3. Dolu Oda Sayisi:  "<<endl;
        cout<<" \t\t4. Yatak Oda Raporu:"<<endl;
        cotu<<"\t\t5.Seminer Odasi Raporu: "<<endl;
        cout<<"\t\t6.Gunluk toplam Gelir: "<<endl;
        cout<<"\t\t7.Cikis Yap "<<endl;
        cin>sayi;
        switch(sayi){
        case 1: { oda_rezevasyonu(); break; }
        case 2: { oda_bosaltma(); break;
        case 3: { musteri_sayisi(); break;
        case 4: { yatak_odasi_raporu(); break;
        case 5: { gelir(); break; }
        case 6: { seminer_odasi_raporu(); break; }
        case 7: { exit(1); break; }
        default: { cout<<"n Yanlis bir deger girdiniz luten dogru bir deger giriniz:"<<endl; }
        } 
        while(sayi!=7);
         
} //otel işletmesi sona erdi. 

void otel::oda_rezevasyonu()
    {
        int sayi,x2,i=1,j=6, k=16;
        string ad,o_adi;
        cout<<"\n \t \t -Lutfen bir oda tipi seciniz - \n"<<endl;
        cout<<"\t\t1. Bir kisilik oda(40TL) "<<endl;
        cout<<"\t\t2. Ikı kisilik oda(60TL) "<<endl;
        cout<<"\t\t3. Seminer Odası(300TL) "<<endl;
        cin>>sayi;
        switch(sayi)
        {
            case 1: 
            {
                for(;j<16;j++)
                {
                    if(odalar[j]=!dolu)
                    {
                        odalar[j]=dolu;
                        cout<<"Adiniz:"<<endl;
                        cin>>ad;
                        cout<<"Soyadiniz:"<<endl;
                        cin>>o_ad;
                        cout<<"Kac gun kalacaksiniz?"<<endl;
                        cin>>x2;
                        toplam+=x2*40;
                        sayac2++;
                        musteri_adi[j]=new string;
                        *musteri_adi[j]=ad;
                        soyadi[j]=new string;
                        *soyadi[j]=o_ad;
                        break;
                    } //if döngüsü
                } //for döngüsü
                if(j==16)
                {
                    cout<<"Malesef 1 kisilik butun odalar doldu."<<endl;
                   
                }
                break;
            } //case 1 bitti 
            case 2: 
            {
                for(;k<46;k++)
                {
                    if(odalar[k]!=dolu)
                    {
                        odalar[k]=dolu;
                        cout<<"Adiniz:"<<endl;
                        cin>>ad;
                        cout<<"Soyadiniz:"<<endl;
                        cin>>o_ad;
                        cout<<"Kac gun kalacaksiniz:"<<endl;
                        cin>>x2;
                        toplam+=x2*60;
                        sayac2++;
                        musteri_adi[k]=new string;
                        *musteri_adi[k]=ad;
                        soyadi[k]=new string;
                        *soyadi[k]=o_ad;
                        break;
                        
                    }
                }
                if(k==46)
                {
                    cout<<"Malesef butun odalar dolu."<<endl;
                
                }
                 break;
            }
           
            case 3: 
            {
                for(;i<6;i++)
                {
                    if(odalar[i]!=dolu)
                    {
                        odalar[i]=dolu;
                        cout<<"Adiniz:"<<endl;
                        cin>>ad;
                        cout<<"Soyadiniz:"<<endl;
                        cin>>o_ad;
                        cout<<"Kac gun kalacaksiniz:"<<endl;
                        cin>>x2;
                        toplam+=x2*300;
                        sayac2++;
                        musteri_adi[i]=new string;
                        *musteri_adi[i]=ad;
                        soyadi[i]=new string;
                        *soyadi[i]=o_ad;
                        break;
                        
                    }
                }
                if(i==6)
                {
                    cout<<"Malesef butun odalar dolu."<<endl;
                
                }
                 break;
                
            }
            default:
            {
                cout<<"Lutfen dogru kullanim yapinizi:"<<endl;
            }
        }
    }
}

void otel::oda_bosaltma()
{
    cout<<"Bostacaginiz oda numarasi:";
    int sayi;
    cin>>sayi;
    if(odalar[sayi]==dolu)
    {
        if(sayi>0)&&sayi<6)
        {
            odalar[sayi]=bos;
            delete musteri_adi[sayi];
            delete soyad[sayi];
            sayac1--;
            cout<<"Oda silindi."<<endl;
            
            
        }
        else
        {
            if(sayi>5&& sayi<46)
            {
                odalar[sayi]=bos;
                delete musteri_soyadi[sayi];
                delete soyadi[sayi];
                sayac--;
                cout<<"Oda silindi."<<endl;
                
            }
        }
    }
    else 
    {
        cout<<"Lutfen oda numarasini dogru giriniz."<<endl;
        
    }
}

void otel::musterilerin_sayisi()
{
    cout<<"Dolu oda sayisi"<<sayac1+sayac2<<endl;
    
}

void otel::yatak_odasi_raporu()
{
    if(sayac2==0)
    {
        cout<<"butun odalar bostur."<<endl;
        
    }
    else
    {
        cout<<" Oda numrasi ||  Musteri adi  ||  musteri soaydi "<<endl;
        cout<<"=================================================="<<endl;
        for(int i=6;i<46;i++)
        {
            if(odalar[i]==dolu)
            {
                cout<<i<<"\t"<<*musteri_adi[i]<<"\t"<<*soyadi[i]<<endl;
                
            }
        }
    }
}

void otel::seminer_odasi_raporu()
{
    if(sayac1!=6)
    {
        cout<<"Seminer odasi doludur."<<endl;
        cout<<"Oda numarasi"<<endl;
        for(int i=1;i<6;i++)
        {
            if(odalar[i]==dolu)
            {
                cout<<i<<endl;
                
                
            }
        }
        
    }
    else 
    {
        cout<<"Butun seminer odalari bos"<<endl;
        
    }
}
void otel::gelir()
{
    cout<<"Gelir :"<<toplam;
}

int main()
{
    otel a;
    return 0;
    
}

*/
