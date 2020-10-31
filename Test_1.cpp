/*
* Kalıtımda birbiriyle ilişkili sınıfların her birinin yeniden tanımlanmış fonkisyonlarının  tek bir sınıfın nesnesiyle çağrılmasına çok biçimlilik denir.
* temel sınıftaki bir üye fonksiyonun türetilmiş sınflarda yeinden tanımlanmasındadır.
* temel sınıftaki bir fonksiyonunun türetilmiş diğer sınıflar için değişik biçimlerde tanımlanmştır. çok biçimlilikte esas olan temel sınıftaki fonkisyondur esas olan da odur. Çok biçimlilikte fonksiyonu çağıran nesnenin türü ne ise çağrılan fonksiyon o sınıfın fonksiyonudur.
* aşırı yükleme de çok biçimliliğin bir çeşididir. Fonksiyonların aşırı yüklemesi deleyici zamanlı çok biçimliliktir.
* Sanal fonksiyonlar ile yapacağımız çok biçimlilik ise yürütme zamanlı çok biçimliliktir.
*/
/*
class A
{
public:
	void eleman() {

	}
};

class B :public A {  //A class dan B sınıfı türetti.
	void eleman() {

	}
};

main()
{
	B nesne1;
	A* aptr = &nesne1;
	aptr->eleman();
}// */
/*
* bu şekilde sınıf tanımlaması yapıaln A temle sınıfından B sınıf türetilmiştir. Ana fonksiyon içerisinde
* tanımlanan B nesnesinin adresinin temel sınıf göstericisine atanması ve daha sorna da bu gösterici ile eleman() fonksiyonunun çağrılması çok biçimlilik
* bir kullanımıdır. peki aptr-> eleman() şeklinde bir komut A sınıfının elamanını mı çağırıyor yoksa b sınıfının elemaanını mı çağırıyor?
* Cpp de tam bu sırada sanal sınıf devreye girer. Sanal fonksiyonun bildirimi temel sınıfta yapılır. türemiş sınıfta tekrar tanımlanır.
* ortak olarak bulunan bu fonkisyon temle sınıftaki tanımlanmasının önüne virtual anahtar kelimesi getirilerek tanımlaması yapılır.
*
* */
/*
#include<iostream>
using namespace std;
class X {
	int t;

public:
	X() { };
   ~X() { };
   virtual void goster()
   {
	   cout << t << endl;

	}


};

class A: public X {
	int a, b;
public:
	A(int x, int y)
	{
		a = x;
		y = b;
	}
	void goster()
	{
		cout << a << "\t" << b << endl;
	}
};

class B :public X {
	int c, d;
public:
	B(int x, int y) {
		c = x;
		d = y;
	}
	void goster()
	{
		cout << c << "\t" << d << endl;
	}
};
int main()
{
	A nesne(10, 20);
	B nesne2(20, 45);
	X* ptr;
	ptr= &nesne;
	ptr->goster();
	ptr = &nesne2;
	ptr->goster();
	system("pause");
	return 0;
}
*/
/*
* X temel sınıfını oluşturduk içine goster sanal sınıfını tanımladık.
* X sınıfında A ve B sınıflarını türettik. goster fonksiyonunu çok biçimliliğe uygun olarak yenidne tanımladık.
* virtual kelimesini temle sınıfta kullandıık diğerlerinde kullanmaya gerek yoktur.
* main fonksiyonunda 2 tane nesne oluşturduk ve Bu sınıflar A ve B sınıflarına aittir.
* X sınıfan oluşturduğumuz bir nesne göstericisi ile sırasıyla A ve  B sınflarına ait adresini atayıp;
* ptr-> goster (); temel sınıftaki fonksiyonu çağırdık.
*peki hangi fonksiyon çağrılacağına nasıl karar veriyor?
* Örnekte de görüldüğü gibi sanal fonksiyonlar çağrılırken nesne işaretçilerini kullandık.
* nesne işaretçileri yerine daha önce diğer üye fonksiyonları çağrırken kullandığımız nokta operatörü, kullanılabilirdi.
* fakat temel sınıf göstericileri yardımıyla türetimiş sınıflara ait fonksiyonlrı çağrımak çok biçimliliğidesteklemediği için sanla fonksyonalr çağrılırkne nesne işaretçileri kullanılır.
*

*/
/*
#include<iostream>
using namespace std;
class Dortgen {
public:
	int kenar1, kenar2;
	Dortgen() { };
	virtual void alan() {
		cout << "Dortgenin alani:" << kenar1 * kenar2 << endl;
	}
};

class Kare:public Dortgen {
public:
	Kare(int x)
	{
		kenar1 = x;
	}
	void alan()
	{
		cout << "Karenin alani: " << kenar1 * kenar1 << endl;
	}
};

class Dikdortgen :public Dortgen {
public:
	Dikdortgen(int x, int y)
	{
		kenar1 = x;
		kenar2 = y;
	}
	void alan()
	{
		cout << "Dikdortgenin alani: " << kenar1*kenar2 << endl;
	}
};
int main()
{
	Kare sekil1(4);
	Dikdortgen sekil2(4, 5);
	Dortgen* p;
	p = &sekil1;
	p->alan();
	p = &sekil2;
	p->alan();
	return 0;

}
*/

/*
#include<iostream>
using namespace std;
using namespace std;
class A{
	public:
		A(){
			cout<<"Temel sinif yapicisi"<<endl;
			cout<<"-----------------------------"<<endl;
		}
		virtual ~A(){
			cout<<"Temel sinifi yikicisi"<<endl;
			cout<<"\n \n";
		}
};
class B:public A{
	char *p;
	public:
		B(){
			cout<<"1.turetilmis sinif yapilandiricisi"<<endl;

		}
		~B(){
			cout<<"1.turetilmis sinifi yikicisi"<<endl;
			cout<<"--------------------------------"<<endl;

		}

};

class C:public B{
	double *x;
	public:
		C(){
			cout<<"2.turetilmis sinif yapilandiricisi"<<endl;
			cout<<"------------------------------------"<<endl;
		}
		~C(){
			cout<<"2.sinif yikicisi"<<endl;

		}
};

int main()
{
	A *aptr;
	aptr=new B;
	delete aptr;
	aptr=new C;
	delete aptr;
	system("pause");
	return 0;
}

*/
/*
Temel sinif yapicisi
-----------------------------
1.turetilmis sinif yapilandiricisi
1.turetilmis sinifi yikicisi
--------------------------------
Temel sinifi yikicisi


Temel sinif yapicisi
-----------------------------
1.turetilmis sinif yapilandiricisi
2.turetilmis sinif yapilandiricisi
------------------------------------
2.sinif yikicisi
1.turetilmis sinifi yikicisi
--------------------------------
Temel sinifi yikicisi


Press any key to continue . . .




*/
/*
Örnekte temel sinif A dir ve içine yikici fonksiyonu sanal tanimladik. böylece B ve C sinifinin yikici fonksiyonlari da sanal oldu.
ana sinif içine olusturdugumuz A sinifina ait bir nesne göstergeci bellekte dinamik olarak B sinifindan bir nsene için ayirdigimiz yere atatdik.
burda B sinifindan bir nesne için yer ayrirdigimizdan, kalitim hiyerarsisine göre ilk once temel sinif yapilandiricisi cagrilir. Sonra türetilmis sinif yapilandiricisi cagrilir.
Bir sonraki komutta delete operatoruyle A sinifindan bir gosterici olan aptr yikildi.
bu durum da yikici fonksiyonlar sanal oldugu icin calisma zamani gercek yikici fonksiyon olan B sinifinin yikici fonksiyonu calisti.
bir sonraki komutta delete operatorüyle A sinifinda bir gösterici olan aptr yikıldı. Bu durumda yıkıcı fonksiyonlar sanal olduğu için çalışma zamanında gerçek yıkıcı fonksiyon olan B sınfının yıkıcı fonkiyon çalıştı. Bellekten B sınıfından bir nsene için dinamiik olrak yer ayırırken temle sınıf yapıcı fonksiyonu da çağrılmıştı. bu nednele B sınıfının yıkıcısı çağrıldığktan sonra A sınıfı yhıkıcıs da çağrılır.
Aynı işlem aptr nesnes göstericisine, C sınıfından bir nesne için bellekte ayırılan yer atanarak tekrarlnaırdı. Yine çalıma zamında hangi yıkcı fonsiyonun önce çağrılacağı bulundu ve ilk o çağrıldı. daha sonra sınfı hiyerarşisine göre bir sornaki sınıfnı yıkcısı çağrıldı. En son olrak da temel sınıf yıkıcıs çağrıldı.
peki bu işelmleri sanal olarak yıkıcı fonksiyona uyuglamasak ne olurdu_?
dlelete operaörünü bir temel sınıf nesne göstericisinie uyguladığımız için dirke olarka temle yıkcı fonkiyonu çağrılacktı.

*/
//
////soyut sınıflar ve saf sanal fonksiyonlar
//#include<iostream>
//using namespace std;
//class Isletme {
//public:
//	int maas;
//	virtual void zamhesapla() = 0;
//};
//class Mudur :public Isletme {
//public: 
//	Mudur(int y) {
//		maas = y;
//
//	}
//	void zamhesapla()
//	{
//		cout << "Mudur zammi:" << maas * 0.2 << endl;
//
//	}
//};
//class Isci :public Isletme
//{
//public:
//	Isci(int x)
//	{
//		maas = x;
//
//	}
//	void zamhesapla()
//	{
//		cout << "isci zammi:" << maas * 0.1 << endl;
//
//	}
//};
//int main()
//{
//	int secim;
//	Isletme *ptr;
//	Mudur mdr(3000);
//	Isci calisan(2500);
//	cout << "1.mudur zammı" << endl;
//	cout << "2.isci zammi" << endl;
//	cout << "---------------------" << endl;
//	cout << "Seciminizi giriniz:" << endl;
//	cin >> secim;
//	switch (secim)
//	{
//	case 1: { ptr = &mdr; ptr->zamhesapla(); break; 	}
//	case 2: { ptr = &calisan; ptr->zamhesapla();  } break;
//	default: { cout << "kurtar beni artık yeter" << endl; break; }
//	}
//	return 0;
//}

//MANİPÜLATÖRLER
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char dizi[10];

	cin >> setw(10);
	cin >> dizi;
	cout << left;
	cout << setw(15);
	cout << setfill('x')  << dizi << endl;
	return 0;

}
*/

//int main()
//{
//	char ch;
//	while (cin.get(ch))
//	{
//		cout << ch;
//	}
//	return 0;
////}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char dizi[20];
//	cin.get(dizi, 20);
//	cout << dizi << endl;
//	
//	return 0;
//}
 /*
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	char dizi[10];
	char dizi2[20];
	cin.getline(dizi, 11);
	cout << dizi << endl;
	cin.getline(dizi2, 11);
	cout << dizi2 << endl;
	return 0;
}*/
//
#include<iostream>

#include<string>
using namespace std;
int main()
{
	string dizi;
	getline(cin, dizi);
	cout << dizi << endl;
	return 0;

}