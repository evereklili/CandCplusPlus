 /*
  * #include<stdio.h>
 int main()
 {
     if(1071&1023)
     {
         if(!0)
             printf("Ömer\n");
             else
                 printf("Faruk \n");
                 
     }
     return 0;
 }
 */
 /*
 #include<stdio.h>
 int main()
 {
     // girilen sayı tek mi çift mi sonucu ekran yazdır. 
     int x;
     printf("Sayinizi giriniz:");
     scanf("%lf",&x);
     if((x%2==0))
     {
         printf("Sayiniz çifttir.");
         
     }
     else
         printf("Sayiniz tektir.");
         
  return 0;
 }
 
 */
 /*
 #include<stdio.h>
 int main()
 {
     double x,y;
     scanf("%lf %lf",&x,&y);
     if(x<y)
     {
         printf("1.sayiniz kucuktur. \n");
         
     }else if(y<x)
     {
         printf("2.sayiniz kucuktur.\n");
     }
     else
         printf("Sayilariniz esittir. \n");
 }
 */
 /*
 #include<stdio.h>
 int main(){
     bas:
     int x,y,z;
     scanf("%d %d %d",&x,&y,&z);
     if(x>1000||y>1000||z>1000||x<-1000||y<-1000||z<-1000){
          printf("[-1000,1000] araliginda olmalidir."); goto bas;
     }
        else{
         
             if(x>y&&y>z)
                 printf("%d",x);
                 else if(y>x&&x>z)
                 {
                     printf("%d",y);
                     
                 }
                 else if(z>x&&x>y)
                     printf("%d",z);
                     
        }   
    return 0;
 } 
 // çözüm oluşmamıştır. 
 */
 /*
  * 
 
 #include<stdio.h>
 int main()
 {
     int a,b,c, maxx=-10000;
     scanf("%d, %d, %d",&a,&b,&c);
     if(a>maxx)
         maxx=a;
         if(b>maxx)
             maxx=b;
             if(c>maxx)
                 maxx=c;
                 printf("%d", maxx);
                 return 0;
                 
 }
 
 */
 /*
 #include<stdio.h>
 int main(){
    //a ve b tamsayilari, ekrana sirasi ile şu durumda şartı sağliyorsa ilk durumu yazdirmalidir. 
    // girilen sayilar eşitse, eşittir, ikinci sayi birinci sayiyi tam bölüyorsa, b/a; bu durumun hiç birini sağlamaz ise belirsiz yazdırmalıdır. 
    int a,b;
    scanf("%d, %d",&a,&b);
    if(a==b)
    {
        printf(" sayilar esittir.");
        
    }
    else if(a%b==0) 
        {
            printf("%d |%d",b,a);
        }
    else 
        {
            printf("Belirsizlik mevcuttur.");
        }
    return 0;
    
 }
 */
 
/*
 * 
#include<stdio.h>
int main()
{
    int L,G;
    scanf("%d, %d",&L,&G);
    if(L<35) printf("kisa boylu");
    else if(L<65) printf("orta boylu");
    else printf("uzun boylu");
    
    if(G<45) printf("zayif");
    else if(G<70) printf("normal");
    else printf("agir");
    return 0;
    
    
}
*/
/*
// verilen üç adet programı küçükten büyüğe doğru sıralayan programı bulunuz.(tamsayiyi)
#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d, %d, %d",&x,&y,&z);
    if(x<=y && y<=z)  printf("%d %d %d ",x,y,z);
    else if(x<=z&&z<=y) printf("%d %d %d ",x,y,z);
    else if(y<=x&&x<=z) printf("%d %d %d ",y,x,z);
    else if(y<=z&&z<=x) printf("%d %d %d ",y,z,x);
    else if(z<=x&&x<=y) printf("%d %d %d ",z,x,y);
    else if(z<=y&&y<=x) printf("%d %d %d ",z,y,x);
    
    return 0;
    

}
*/
/*
 * 
//sıfır 10 aralıiğinda olan sayıların okunuşunu yazan programı yazınız. 
#include<stdio.h>
int main()
{
    bas: 
    int x;
    scanf("%d",&x);
    switch(x) 
    {
        case 1:printf("Bir"); break;
        case 2:printf("İki"); break;
        case 3:printf("Uc"); break;
        case 4:printf("Dort"); break;
        case 5:printf("Bes"); break;
        case 6:printf("Alti"); break;
        case 7:printf("Yedi"); break;
        case 8:printf("Sekiz"); break;
        case 9:printf("Dokuz"); break;
        case 10:printf("On"); break;
        default: printf("Durum yok. Sayiyi 0 ile 10 arasinda giriniz."); goto bas;
    }
    return 0;
}

*/
/*
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d, %d, %d, %d, %d",&a,&b,&c,&d,&e);
    if(a%2==0&&b%2==0&&c%2==0&&d%2==0&&e%2==0) printf("Tumu cift sayidir.");
    else if(a%2==1&&b%2==01&&c%2==1 && d%2==1 &&e%2==1) printf("Tumu tek sayidir.");
    else printf("Karisik ortalik.");
    return 0;
    
}*/

/*
 * 
 * 
#include<stdio.h>
int main(){
    
    int ay;
    scanf("%d",&ay);
    if(ay<0||ay>12)
    {
        printf("0");
    }
    else if(ay==4||ay==6||ay==9||ay==11)
        printf("30");
    else if(ay==2) //subat ayi içindir
        printf("28");
        else 
            printf("31"); //tum iflerden geçerse 31 gunluk aylar kalır. 
                
    
    return 0;
    
}
*/
/*
#include<stdio.h>
int main()
{
    int musteri_tipi;
    double alisveris_tutari;
    printf("Musteri Tipi: 1.Ogrenci, 2.Ogretmen, 3. Diger\n");    
    scanf("%d",&musteri_tipi);
    printf("AlisVeris Tutari Giriniz: \n");
    scanf("%lf",&alisveris_tutari);
    double a,b,c;
    a=(alisveris_tutari-alisveris_tutari*10/100);
    b=(alisveris_tutari-alisveris_tutari*20/100);
    c=(alisveris_tutari-alisveris_tutari*1/100);
    switch(musteri_tipi)
    {
        case 1: printf("%lf",a); break;
        case 2: printf("%lf",b); break;
        case 3: printf("%lf",c);break;
        default: printf("Diger durumlar canim..."); break;
        
    }
    
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int gun, ay, yil;
    scanf("%d, %d, %d",&gun,&ay, &yil);
    if(yil<0||yil>9999)
    {
        printf("0");
        
    }
    else if(ay<1||ay>12)
    {
        printf("0");
        
    }else if((ay==4||ay=6||ay==9||ay==11)&&(gun<1||gun>30))
    {
        printf("0");
        
    }
    
}