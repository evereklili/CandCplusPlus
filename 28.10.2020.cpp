//#include<iostream>
//#include<string>
//using namespace std;
//class Dortgen {
//public:
//	int kenar1, kenar2;
//	Dortgen() { };
//	void alan() { cout << "Dortgen Alani:" << kenar1 * kenar2 << endl; }
//};
//class Kare:private Dortgen {
//public:
//	Kare(int x) { kenar1 = x; kenar2 = x; }
//	void alanCagir() {
//		alan();
//	}
//};
//int main()
//{
//	Kare nesne(4);
//	//nesne.alan() //hatalidir. 
//	nesne.alanCagir();
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//class Okul {
//protected : 
//	string ad;
//public:
//	Okul() { }; //varsayılan yapıcı
//	Okul(string s)
//	{
//		ad = s;
//	}
//	string ad_Dondur() {
//		return ad;
//	}
//};
//
//class Ogrenci :public Okul {
//	string soyad;
//	int numara;
//public:
//	Ogrenci() {}; //varsayılan yapılandırıcı 
//	Ogrenci(string a, string b, int no)
//	{
//		ad = a;
//		soyad = b;
//		numara = no;
//
//
//	}
//	void goster()
//	{
//		cout << "Adı:" << ad << endl;
//		cout << "Soyadı:" << soyad << endl;
//		cout << "Numarası:" << numara << endl;
//		cout << "************************" << endl;
//
//	}
//};
//int main()
//{
//	Okul ok1("Eskisehir Osmangazi Universitesi");
//	Ogrenci ogr1("Busra", " Demirel", 1), ogr2("Omer", "Dogu", 4), ogr3("Sarı", "Selim", 2);
//	ogr1.goster();
//	ogr2.goster();
//	ogr3.goster();
//	system("pause");
//	return 0;
//}
/*
* yukaridaki örnekte, ana sınıfımız olan Okul  protected olarak bir string tanımladık. Okul sınıfından bir tane public olarak Okul sınıfı tanımladık. 
* Ogrenci sınıfını, Okul sınıfı olan public yapıdakinden bir sınıf tanımladık ve bu sınıf da publici publictir. Ana sınıf da protected olsaydı bu da protected olurdu
* Ogrenci sınıfının içine private soyad ve numara değiskenlerini tanımladık. 
* main sınıfı içine ilk olarka okul sınıfan bir nesne tanımlaıdk ve yapıcı sınıfa parametre olarak bir string gönderdik. 
* daha sonra öğrenci sınıfına 3 tane nesne gönderdik.yapıcı fonksiyona ad soyad ve noumraır verdik. yapıcı fonksiyon bu prametereleri private değişkenlere atadı. (assigned),
* main içerinden  yazdığımız cout<<"ok1.ad işlei hatalı olur. Çünkü ad Okul sınıfının içinde protected olarak tanımlanmıştır.  
* cout<<ogr1.ad<<ogr1.soyad<<<<ogr1.numara<<endl; kullanımı da hatalıdır. 
* 
* 
*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//class A {
//protected:
//	int x, y;
//public: 
//
//	A() {};
//};
//class B :private A {
//public:
//	B(int sayi1, int sayi2)
//	{
//		x = sayi1; y = sayi2;
//	}
//	void goruntule();
//	void degistir(int a, int b)
//	{
//		x = a; y = b;
//	}
//
//};
//void B::goruntule() {
//	cout << x << endl;
//	cout << y << endl;
//	cout << "*********"  << endl;
//
//}
//
//int main() {
//	B nesne1(1, 2), nesne2(3, 4);
//	nesne1.goruntule();
//	nesne2.goruntule();
//	nesne1.degistir(10, 20);
//	nesne1.goruntule();
//	return 0;
//}
/*
* örnekte private olarak türetme işleminde protected üyelerin davranışını daha iyi anlıyoruz. Burada A sınıfnıın protected üyeleri x , y tam sayıları değşenlerin bulundukları 
* sınıf için private gibi davranmaktadır. Yani bulundukları sınıftan ir nesne bu elemanlara erişemez. 
* protected üye private  olarak türetilen sınıfın private öğesi haline gelir. 
* 
*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calisan {
//protected: 
//	string ad, soyad;
//public:
//	Calisan() { };
//	void isim(string a, string b) { ad = a; soyad = b;  }
//};
//
//class Muhendis :protected Calisan {
//	int maas;
//public:
//	Muhendis(){ };//varsayılan yapıcı
//	void Muhendis_Maas(int m) {
//		maas = m;
//	}
//	void erisim(string a, string b) {
//		isim(a, b);
//	}
//	friend void listele(Muhendis&);
//
//};
//
//void listele(Muhendis &x)
//{
//	cout << "Adi:" << x.ad << endl;
//	cout << "Soyadi:" << x.soyad << endl;
//	cout << "Maasi:" << x.maas << endl;
//	cout << "-------------**************" << endl;
//}
//
//int main()
//{
//	Muhendis kisi[3];
//	kisi[0].erisim("OMER ", "DOGU");
//	kisi[1].erisim("Busra", "DEMIREL");
//	kisi[2].erisim("RAMAZAN ", "ARIKAN");
//	kisi[0].Muhendis_Maas(2500);
//	kisi[1].Muhendis_Maas(3000);
//	kisi[2].Muhendis_Maas(4000);
//	for (int i = 0; i < 3; i++) {
//		listele.(kisi[i]);
//	}
//	return 0;
//	
//
//}
 
//#include <iostream>
//using namespace std;
//class Ornek1
//{
//public:
//    int i;   // veri üye
//    void yaz()  // fonksiyon üye
//    {
//        cout << i << endl;
//    }
//};
//int main()
//{
//    Ornek1 x;   // Ornek1 sınıfı tipinde x nesnesi tanımlanır
//    x.i = 5;      // nesnesinin i üyesine 5 atanır
//    x.yaz();      // x nesnesinin yaz() fonksiyonu çağrılır
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Ornek2
//{
//public:
//    int i;   // Her yerden erişile bilen üyeler
//    void yaz()
//    {
//        y = 5.2; // üye fonksiyonundan özel y üyesine erişelebilir
//        z = 9;
//        cout <<"i=" << i << endl;
//        cout <<"y=" << y << endl;
//        cout <<"z="<< z << endl;
//    }
//
//private:  // sadece sınıf içinde erişilebilen üyeler
//    float y;  // bu alan sadece sınıf içinden erişilir. 
//    int z;
//};
//
//int main()
//{
//    Ornek2 nsn;     //Ornek2 Sınıfı tipinde nsn isimli nesne tanımı
//    nsn.i = 5;       // nsn nesnesin i üyesine 5 atanır; 
//    nsn.yaz();       // nsn nesnesinin yaz() fonksiyonunu çağırır
//    return 0;
//}
//
//// 
//#include<iostream>
//using namespace std;
//int main()
//{
//    // Kullanıcıdan girdi isteyelim
//    cout << "Yari Capini giriniz:" << endl;
//    // Değişkeni tanimlayalim
//    int yaricap;
//    // Kullanicinin girdisini okuyalım
//    cin >> yaricap;
//    // Pi sayisini isim sabiti olarak tanimlayalim
//    const float pi = 3.14;
//    // Daire çevresini hesaplayi ekrana yazdiralim
//    cout <<        "Dairenin cevresi = " << pi * 2 * yaricap << endl;
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//void fonk1();         // değişken döndürmeyen fonksiyon
//void fonk2();        // değişken döndürmeyen fonksiyon
//
//int a = 5; // Globalde tanımlanan değişken
//
//int main()
//{
//    int a = 6;
//    cout << a << endl;
//    fonk1();       // a değeri 7 olur fonk1 den çağırılmış
//    cout << a << endl;
//    fonk2();      // a değeri 5 olur fonk2 den çağırılmış 
//    cout  << a << endl;//yereldeki değeri almış
//
//  
//    return 0;
//}
//
//void fonk1()
//{
//    int a = 7;    // Yerelde tanımlana a bu fonk1 
//    cout << a << endl;  // değişmedikçe 7 dir
//}
//
//void fonk2()   // her hangi bir a değeri belirlenmemiş 
//{
//    cout << a << endl;    // globaldeki a değerini alır
//}
//
/* 
#include<iostream>
using namespace std;
class Bitki {

};
class Agac :public Bitki {
	Bitki* bt, b;
	Agac a, * apt;
	bt = &a;
	apt = bt;
	apt = (Agac*)bt;
};

*/
//TÜRETİLMİŞ SINFITAN TEMEL SINIF ÜYELERİNİN YENİDEN TANIMLANMASI. 
//Türetilmiş sınıfta temel sınıfın elemanları yeinden tanımlanabilinir. Bu durumda öncelik türetilmiş sınıf elemanlarında geçerlidir .
//exaple: 
//#include<iostream>
//#include<string>
//using namespace std;
//class calisan {
//public:
//	string ad, soyad; 
//	calisan() {}; //temel varsayılan yapıcı fonksiyson 
//	void isim(string a, string b) {
//		ad = a;
//		soyad = b;
//	}
//};
//class muhendis :private calisan {
//	int maas;
//public:
//	muhendis() { };
//	void muhendis_maas(int m) {
//		maas = m;
//	}
//	void isim(string, string);
//	void listele();
//
//};
//void muhendis::listele()
//{
//	cout << "Adi:" << ad << endl;
//	cout << "Soyadi:" << soyad << endl;
//	cout << "Maasi:" << maas << endl;
//	cout << "-------------**************" << endl;
//}
//void muhendis::isim(string a, string b) {
//	calisan::isim(a, b);
//}
//int main() {
//	muhendis ogr1, ogr2;
//	ogr1.isim("OMER", "DOGU");
//	ogr2.isim("Bursa", "DEMIREL");
//	ogr1.muhendis_maas(3000);
//	ogr2.muhendis_maas(3002);
//	ogr1.listele();
//	ogr2.listele();
//	return 0;
//
//}
/*
* Yukaridaki örnekte calisan sınıfı, public erişim ile ad ve soyad değişkenleri ve bu ddeğişkenelre atama yapılmakta kullanılan bir isim fonksiyonunu içeriyor. 
*calisan sınıfımızdan türetilen muhendis snıfı sie private olarak bir maas degiskeni ve bu değişkene atama yapmakta kullanılanpublic eriimli muhendis_maas() fonksiyonu iceriyor. 
*isim() fonksiyonu, calisan sınıfında tanımlıdır. biz bu tanımı muhendis sınıfı icin yeniden tasarladık. içerisinde calisan::isim() şeklinde yeniden cağırdık. Burada temel sınıfn isim fonksiyonunu çağırmak yerine kendi isim fonkisyonumuz da yazabilirdik. 
* 
*/

//KALITIMDA YAPICI VE YIKICI FONKSİYONLR. 
//#include<iostream>
//using namespace std;
//class A {
//public: 
//	A() {
//		cout << "Temel sinif yapici fonksiyonu." << endl;
//
//	}
//	~A() { cout << "Temel sinif yikici fonksiyonu." << endl; }
//};
//class B :private A {
//public:
//	B() {
//		cout << "Turetilmis sinif yapici fonksiyonu." << endl;
//
//	}
//	~B() { cout << "Turetilmis sinif yikici fonksiyonu." << endl; }
//};
//
//int main()
//{
//	B nesne(); 
//	
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//class A {
//	int a, b;
//public:
//	A(int x, int y) { a = x; b = y; cout << "1.Temel sinif olustu." << endl; }
//	~A() { cout << "1.temel sinif yikilcisi" << endl; system("PAUSE"); }
//	void goster_a() { cout << a << "\t" << b << endl; }
//};
//class B {
//	int c, d;
//public:
//	B(int x, int y) {
//		c = x;  y = d;
//		cout << "2.Temel sinif yapicisi olusturuldu." << endl;
//
//	}
//	~B() { cout << "2.temel sinif yikicisi" << endl;  }
//	void goster_b() { cout << c << "t" << endl; }
//
//};
//class C :public A, public B {
//	int e, f;
//public:
//	C(int z, int t) :A(z, t), B(z, t) {
//		e = z;
//		f = t;
//		cout << "turetilmis sinif yapicisi" << endl;
//
//	}
//	~C() { cout << "Turetilmis sinif yikicisi" << endl;  }
//	void goster_c() {
//		cout << e << "\t " << f << endl;
//	}
//};
//int main() {
//	C deneme(10, 20);
//	deneme.goster_a();
//	deneme.goster_b();
//	deneme.goster_c();
//	return 0;
//}

 
