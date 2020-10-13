//OMER DOGU
//ESKİŞEHİR
//Bir sayının kendisi hariç, pozitif bölenlerinin toplamı; kendisinden büyükse bu sayıya zengin sayı; kendisine eşitse; mükemmel sayı; 
//kendisinden küçükse fakir sayı olduğunu bulan programı yazınız. zengin sayı, fakir sayii mükemmel sayı şekinde yazsın. 
//
//
/*
#include<stdio.h>
int main()
{
    int i,N,toplam=0;
    scanf("%d",&N);
    for(i=1;i<=N/2;i++)
    {
        if(N%i==0)
        {
            toplam+=i;
        }
    }
    if(toplam>N) { printf("Zengin sayıdır\n" ); }
    else if(toplam==N) { printf("Mukemmel sayıdır \n \a \a \a"); }
    else { printf("Fakir Sayidir. \n");  }
    
    
    
    return 0;
}
*/
//ebob bulunması  

/*
#include<stdio.h>
int main(){
    int i,M,N;
    scanf("%d,%d",&M,&N);
    for(i=M;i>=1;i--)
    {
        printf("M sayisi %d, --  N sayisi%d, -- i sayisi %d dir.\n ",M,N,i);
        if(M%i==0&&N%i==0)
        {
            printf("%d\n,",i);
            break;
        }
    }
    
    
    return 0;
}
 * 
 * */
/*
#include<stdio.h>
 int main()
 {
     int i,M,N;
     scanf("%d,%d",&M,&N);
     for(i=M;i>=1;i--)
     {
         if(M%i==0&&N%i==0)
         {
             printf("%d \n",M*N/i);
         }
     }
     
     return 0;
 }
 */
 
 //
/* 
 #include<stdio.h>
 int main()
 {
     int i,M,N;
     scanf("%d,%d",&M,&N);
     for(i=M;i>=1;i--)
     {
         if(M%i==0&&N%i==0)
         {
             break;
             
         }
     }        
     printf("%d:",M*N/i);
     
     
     return 0;
 }
*/

/*
 #include<stdio.h>
 int main()
 {
     int i,M,N;
     scanf("%d,%d",&M,&N);
     for(i=M;i>=1;i--)
     {
         printf("M %d, N %d, i %d\n",M,N,i);
         if(M%i==0&&N%i==0)
         {
             break;
         }
     }
     printf("%d / %d \n",M/i,N/i);
     return 0;
 }
 */
 
 /*
 #include<stdio.h>
 int main()
 {
     
     int i, a, b,c;
     scanf("%d,%d,%d",&a,&b,&c);
     for(i=a;i>=1;i--)
     {
         if(a%i==0&&b%i==0&&c%i==0)
         {
             printf("%d",i); 
             break;
         }
     }
     
     return 0;
 }
 
 */
  
  
  /*
   * fibanocci serisi

#include<stdio.h>
int main()
{
    
    int i,a=1,b=1,c=1,N;
    scanf("%d",&N);
    for(i=3;i<=N;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    
    printf("%d",c);
    
    return 0;
}
 
 */
/* 
#include<stdio.h>
int main()
{
    int i,N; 
    //bir sayı yarısına kadar olan sayılara bölünebilir. o zaman yarısına kadar olan hiçbir sayıyı bölünmeyen sayı asal sayıdır. 
    int durum=1;
    scanf("%d",&N);
    for(i=2;i<=N/2;i++)
    {
        durum=0;
        break;
    }
    printf("%d",durum);
    
    
    return 0;
}
*/

/*

#include<stdio.h>
int main()
{
    int i,a,b,us=1;
    scanf("%d,%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        us*=2;
        
    }   
    printf("%d,%d",us-1,a*b);
    return 0;
}

*/

/*
 #include<stdio.h>
 int main(){
     int i,N,x;
     int buyuk,kucuk,toplam;
     scanf("%d,%d",&N,&x);
     buyuk=x;
     kucuk=x;
     toplam=x;
     for(i=2;i<=N;i++)
     {
         scanf("%d",&x);
         if(buyuk<x) { buyuk=x; }
         if(kucuk>x) { kucuk=x; }
         toplam+=x;
     }
     printf("%d,%d,%d",buyuk,kucuk,toplam/N);
     
     return 0;
     
 }
 */
 /*
 
 #include<stdio.h>
 int main()
 {
      //verilen sayının kaç basamaklı olduğunu bulan programı yazınız. 
      int N,sayac=0;
      scanf("%d",&N);
      while(N>0)
      {
          sayac++;
          N/=10;
          
      }
      printf("%d",sayac);
      return 0;
 }
 
 */
 /*
  * 
 #include<stdio.h>
 int main()
 {
     int N,i,x,sayi=0;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         scanf("%d",&x);
         sayi=sayi*10+x;
     }  
     printf("%d",2*sayi);
     return 0;
     
 }
 */
 
 /*
 #include<stdio.h>
 int main(){
     
     char c=65;
     char d='A';
     printf("%d %c \n",c,d);
     printf("%c %d \n",c,d);
     printf("%d %c \n",c+32,c+32);
     printf("%d",'a'-'A');
     printf("%d %c %c",'0','0','0'+1);
     return 0;
     
 }
 */
 /*
#include<stdio.h>
int main()
{
   char c='a';
   char t;
   printf("Bir karakter giriniz:");
   scanf("%c",&t);
   printf("%c %c",t,c);

    
    return 0;
} 
*/

/*
#include<stdio.h>
int main(){
    
    double d=3.25;
    int i=3.25;
    printf("sonuc-1: %.200lf ",(double)(d-i/2));
    printf("sonuc-1: %d ",(int)(d-i/2.0));
    printf("sonuc-1: %.lf ",(double)(d-i/2.0));
    printf("sonuc-1: %lf ",(d-(double)i/2));
    printf("sonuc-1: %lf ",(double)(d-i/2.0));
    printf("sonuc-1: %lf ",(double)(d-i/2.0));
    
    
    
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int a=4, b=5;
    a+=b+=a<b;printf("%d %d",a,b);
    
    
    return 0;
}
*/

/* BÜYÜK HARFİ KÜÇÜK HARFE ÇEVİRİR. */
/*
#include<stdio.h>
int fonksiyon(char x);
int main()
{
    char ch;
    scanf("%c",&ch);
    
     printf("%c",fonksiyon(ch));
     
    
    return 0;
}

int fonksiyon(char x){
    char ch=x;
    int k=(int)ch;
    k=k+32;
    
    
    return (char)k; 
}
*/

/*
#include<stdio.h>
int main()
{
    etiket:
    char islem;
    int x,y;
    scanf("%d,%c,%d",&x,&islem,&y);
    switch(islem)
    {
        case '+': printf("%d",x+y); break;
        case '-': printf("%d",x-y); break;
        case '*': printf("%d",x*y); break;
        case '/': printf("%d",x/y); break;
        case '%': printf("%d",x%y); break;
        default: { printf("yanlis secim"); goto etiket;  }
    }
    
    return 0;   
}

*/
#include<stdio.h>
int main(){
    
    char islem;
    int a,b,c,d;
    scanf("%c,%d,%d,%d,%d",&islem,&a,&b,&c,&d);
    if(islem=='T')
    {
        printf("%d,%d,%d,%d",a,c,b,d);
        
    }
    else if(islem=='D')
    {
        printf("%d",a*d-b*c);
        
    }
    else
    {
        printf("%d,%d,%d,%d",a*a+b*d,a*b+b*d,a*c+c*d,b*c+d*d);
        
    }
    
    
    return 0;
}