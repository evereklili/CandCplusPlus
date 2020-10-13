 /*#include<iostream>
 using namespace std;
 int main()
 {*/
     //single line tek satırlı yorum demektir. 
     /*çok satırlı yoru,
     
      * m. */
     /* 
      * herhangibibir programalama dilinde önemli bir etken değikendir. içine varlık konacak varlıklardır. int a tanımlamak bir int tipinde a isimli değişkendir. 
      * değişen tipi ve ismi ve değerden oluşur. int b=10; variable olarak da geçmektedir. Önce bir değişken tanımlanır ve içine bir sembol konur. Matematikteki eşitlik gibi 
      * düşünmeyin. Burada farklıdır. Atama sembolü (assignment) sembolüdür. kutu gibi düşünülebilinir. int kutusu ve  içinde bu tipten değişkenler tutabilimektedir. 
      * Bunun sınırlarını int ve makinenizin sınırları belirlemektedir. 
      * değişkenin bastırmak içn; 
      * */
     /* int a=100;
      cout<<a<<endl;
     a=20;
      cout<<a<<endl;
      
      //end of statement  yani her bitişe bir tane ; konur. 
      int c=10; int d=20; //burada satır bitmiş olark kabul edilebiinir. her durum sonunda ; bulunur. 
      int x=2, y=10;
      cout<<x<<" "<<y<<endl;
      
      
     return 0;
 }
 
*/
/*

#include<iostream>
using namespace std;
int main(){
    //değişken tanımlarken, anlamlı bir isme sahip olmasını istemeliyiz. C tarafından tanımlanmış bazı kavramları kullanamayız. 
    //reserved key olarak geçen rezerve edilen anahtar kelimelerdir. bunları kullanamayız. 
    //identifier değişken isimleri reserved key olamaz. 
    // yas1 yas2 olabilir. değişken içinde sayı kullanabiliriz. basında sayı olamaz. identifier başlaması için bir sembole ihtiyaç vardır. 
    //alfabetik harf gibi _ ile de başlayabilir. operatorler ile de başlayamaz. Kullanılması sakıncalı olan programlardır. c++ bir fonksiyon mu? bir değisken mi oluğunu 
    //ayırt edebilmesi önemlidir. 
    //değişkenler içine istediğimiz tipi atayabiliriz. 
    //integer değil tek değişken tipi. 
    //floting point var kayan nokta demektir. NULL pointer. 
    //charakter types: char tipinde değiken tipi vardır. Tek karakter konabilinir. her tuş bir karakter ifade edebilnir. ,
    //1 karakter yerleştirilebilinir. karakter tablomuz ne kadar büyükse o kadar büyük dünyadan bahsediyoruz. 
    //int signed int; unsigned int tipleri vardır. 2 üzeri 8 kadar çıkabilinir. 16 bit ne demek, 32 bit ne demek? burada ne ifade eder?
    //32 bit 1 ve 0 değerini alabilien 1 lerden oluşur. 32 basamaklı demektir. kaç farklı sayıyı ifade edebilir? 32 bit 2^32 bite kadar ifade konabilinir. 
    //2^31 tane bit kodlayabiliriz. bunlar için özel kelimeler konabilir. short 16 bit, long dersek 32 olabilir. 
    //floating pointler var. noktalı sayılar ya da ondalıklı ifade kullanılır. 3.14 olarak yazar. (us tr farkı!)
    //boolean 1 veya  0 olabilir. 
    //void ise tipsizdir. boş deriz. 
    
    int a=10;
    cout<<a<<endl;
    float pi=3.14;
    cout<<pi<<endl;
    long tl=3421424218349;
    cout<<tl<<endl;
    char c='O';
    cout<<c<<endl;
    
    
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
    //tipleri biri birine dönüştürmemiz mümkün mü? 
    int a=10;
    cout<<a<<endl;
    float pi=3.14;
    cout<<pi<<endl;
    long tl=3421424218349;
    cout<<tl<<endl;
    char c='x';
    cout<<c<<endl;
    int cc=c;
    cout<<cc<<endl;
    return 0;
}3

*/
/*
  long tipi int de dönüşür ancak bazı kayıplarımız olabilir. Upper casting ve downcasting yapılabilmektedir. 
   * int dönüşürse ondalıklı kısım int içine koyamaz. yuvarlama a yapıyor! Tam sayı kısmını alabilmesidr. 4.99 tam kısmını alıp 4 kullanır. 
   * karakteri int çevirirsek ascii karşılğını kullanır. ,
   * int float'a çevirirsek, float daha geniş ve ondalıklı kısmını alır ve tamsayı kısmını işgal edeceğiz. 
   * 
*/

/*

#include<iostream>
using namespace std;
int main()
{
    
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
int main()
{
    //bir tipi diğer tiper dönüştürmek istersek parantez içinde aşağıdaki gibi yazılabilinir. 
    int x=100; 
    cout<<"x in degeri:"<<x<<endl;
    char c='x';
    cout<<": "<<c<<endl;
    int at=64;
    char cat=at;
    cout<<cat<<endl;
    cout<<(char)at<<endl;
    cout<<(char)100<<endl;
    return 0;
}

*/

/*

#include<iostream>

int main()
{
    std::cout<<"Hello World!";
    
    system("PAUSE");
    cout<<"oku"
    
    
    
    return 0;
}

*/
/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"omer dogu \r \n";
    cout<<"omer dogu"<<endl;
    cout<<"omer dogu ankara \a";
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    double const pi=3.14;
    int r;
    cout<<"yaricapi giriniz:";
    cin>>r;
    cout<<"\n Alan="<<pi*r*r<<endl;
    system("PAUSE");
    
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    int sayi1,sayi2;
    cout<<"Birinci sayiyi giriniz:"<<endl;
    cin>>sayi1;
    cout<<"Ikinci sayiyi giriniz:"<<endl;
    cin>>sayi2;
    
    cout<<"Girilen iki sayinin toplami:"<<sayi1+sayi2<<endl;
    system("PAUSE");
    
    return 0;
}

*/

/*
#include<iostream>
using namespace std;
int main()
{
    cout<<"Programlama Dilleri"<<endl;
    cout<<"Programlama  \n";
    cout<<"Dilleri\n";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Diller \n";
    cout<<endl;
    cout<<"C++"<<endl;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
  
    int sayi1=6,sayi2=3;
    cout<<"2 sayinin toplami: "<<sayi1+sayi2<<endl;
    cout<<"2 sayinin carpimi:"<<sayi1-sayi2<<endl;
    cout<<"2 sayinin bolumu:"<<sayi1/sayi2;
    cout<<"2 sayinin farki:"<<sayi1-sayi2<<endl;
    
    system("PAUSE");
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
     int a;
     a=0;
     //a ++ demek a nın değeri alınıp, kullanılır ve sonra 1 artırılır. 
     //++a; demek a nın değeri artırılıp sonra kullanılır. 
     cout<<"a nin degeri: "<<a<<endl;
      cout<<"a++ nin degeri: "<<a++<<endl;
       cout<<"++a nin degeri: "<<++a<<endl;
    return 0;
}
 
 
 */
 
