//ömer doğu 
//diziler(array)

/*
#include<stdio.h>
int main()
{
    int dizi[5]={7,3,4,2};
    int x;
    x=dizi[dizi[4]]/3+dizi[dizi[1]];
    x=dizi[x-3]++;
    printf("%d",dizi[dizi[x]-1]);
    
}
*/
/*
#include<stdio.h>
int main()
{
    int i,max;
    int dizi[7];
    for(i=0;i<7;i++)
    {
        scanf("%d,",&dizi[i]);
    }
    max=dizi[0];
    for(i=1;i<7;i++)    //diziyi 0'den 7 hariç 7 elemanı sıralayınız. 
    {
        if(dizi[i]>max)  //eğer dizi[i] elemanı büyükse max 'dan 
        {
            max=dizi[i]; //o dizinin dizi[i] elamanını max yap.
        }
    }
    
    printf("bu dizinin en buyuk elemani: %d",max);
    return 0;
}
*/

/*
 * 
#include<stdio.h>
int main()
{
    int i; //değişken tanımlaması yapılıyor. 
    int n[10]={1,1}; //n[0] ve n[1] 1 değerleri atanıyor geri kalan 8 değer de 0 tanımlamasını otomatik yapılıyor. 
    for(i=2;i<=10;i++) //tanımlanan i değeri 2 den başlaypı 10 kadar 8 değer şeklinde tek tek artıyor. 
    {
        n[i]=n[i-1]+n[i-2];    // n[i] sayısına n[n-1]+n[n-2] değerlerini atama yap. 
        
    }
    for(i=0;i<10;i++){
             printf("%d \n",n[i]); //bura da da yazdırma yapıyoruz. 
        
    }
       
    
    return 0;
}
*/
/*

#include<stdio.h>
int main(){
    
    int i,j;
    int n[10]={1};
    for(i=2;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            n[i]+=n[j];
        }
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d \n",n[i]);
        
    }
    
    
    return 0;
}
*/
    
    /*
#include<stdio.h>
int main()
{
    
    int i;
    int dizi[10],dizi2[10];
    for(int i=0;i<=9;i++)
    {
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        
    }
    for(int i=0;i<=9;i++)
    {
        printf("%d. eleman %d: \n",i,dizi[i]);
    }
    for(i=9;i>=0;i--)
    {   
        printf("%d. elemanı: %d \n",i,dizi[i]); 
    }
   
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    char dizi[10];
    for(i=0;i<=9;i++)
    {
        scanf("%c",&dizi[i]);
        
    }
    for(i=0;i<5;i++)
    {
        if(dizi[i]!=dizi[9-i])
        {
            break;
        }
    }
    printf("%d",(i==5))  ;

    

    return 0;
  
}

*/
/*
#include<stdio.h>
int main()
{
    basa_git:
    int i,N;
    int dizi[21]={0,1};
    scanf("%d",&N);
    if(N>20)
    {
        
        printf("yeniden sayi giriniz basa gittiniz: \n"); goto basa_git;
        
        
    }
    for(i=2;i<=N;i++)
    {
        dizi[i]=dizi[i-1]+dizi[i-2];
        
    }
    for(i=N;i>=0;i--)
    {
        printf("%d\n",dizi[i]);
    }
    
    return 0;
}
*/
    /*
     * 
#include<stdio.h>
int main()
{
    int i,N;
    int dizi[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d,",&dizi[i]);
    }
    for(i=0;i<N/2;i++)
    {
        printf("%d,%d \n",dizi[i],dizi[N-i-1]);
    }
    
    return 0;
}
*/

/*
 * 
#include<stdio.h>
int main(){
    
    int i,N,fark, toplam=0;
    int dizi[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&dizi[i]);
    }
    for(i=1;i<N;i++)
    {
        fark=dizi[i]-dizi[i-1];
        if(fark<0)
        {
            fark=-fark;
        }
        toplam+=fark;
    }
    printf("%d,",toplam);
    
    return 0;
}
*/

/*

#include<stdio.h>
int main()
{
    int i,N,artis,maxArtis; //int tipinde i, N, artis, maxArtis tanımlanı. 
    int dizi[100];          //int tipinde dizi 100 tanımlandı. 100 elamanlı  maksimum. 
     scanf("%d",&N);        //tam sayı girişi yaptık. 
    for(i=0;i<N;i++)        //i tamsayısı 0 başladı ve n kadar n hariç tek tek attı. artış işlem sornası işlem++ olduğundan. 
    {
        scanf("%d",&dizi[i]);      //100 den küçük N kadar sayının girişini sağladık 
        
    }
    maxArtis=dizi[1]-dizi[0];  // maksimum dizinin ikinci elemanı ile dizini 1. elemanı farkı yaptık. 
    for(i=2;i<N;i++)       //dizinin i sayisi 2 den başladı. ve N sayısına kadar n hariç devam edecektir. i tam sayısı işlem sonrası artacaktır. 
    {
        artis=dizi[i]-dizi[i-1];    //artiş ilki dizi[2]-dizi[1] başlayacak ve N kadar devam edecek. dizi[N-1]-dizi[N-2] son olacaktır. 
        if(artis>maxArtis)     // eger artis sayısı maksimum artiştran büyükse maksimum artışa artisi atayacak. 
        {
            maxArtis=artis;
        }
    }
    printf("%d",maxArtis); //en son maksimum artıişı yazdıracaktır. 
    return 0;
}
*/
// N elemanı (2<=N<=100) elemanlı bir tamsayı kümesinde dizisinden artan en uzun ardışık alt dizinin uzunluğunu bulan programı yazınız. 
/*
#include<stdio.h>
int main(){
    int i,N,sayac=1,max=1;
    int dizi[100];
     
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
         scanf("%d,",&dizi[i]);
     }
     for(i=1;i<N;i++){
         if(dizi[i]-dizi[i-1]>0)
         {
             sayac++;
         }
         else
         {
             if(sayac>max)
             {
                 max=sayac;
                 
             }
         }
     }
     if(sayac>max)
     {
         max=sayac;
     }             
     printf("%d",max);
     return 0;
    
    
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    
    int i, sayac=1, max=1;
    char dizi[15];
    for(i=0;i<15;i++)
    {
        scanf("%d",&dizi[i]);
        
    }
    for(i=1;i<15;i++)
    {
        if(dizi[i]==dizi[i-1])
        {
            max=sayac;
        }
        sayac=1;
        
        
    }
    if(sayac>max)
    {
        max=sayac;
    }
    printf("%d",max);
    return 0;
    
}

*/

/*
#include<stdio.h>
int main()
{
    int i,j,M,N;
    char A[100], B[100];
    
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%c",&A[i]);
    }
    scanf("%d",&M);
    for(i=0;i<M;i++)
    {
        scanf("%c",&B[i]);
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++)
        {
            if(A[i]==B[j])
            {
                printf("%c,",A[i]);
            }
        }
    }
    return 0;
}

*/

#include<stdio.h>
int main()
{
    int i,j,M,N,varMi;
    char A[100],B[100];
    scanf("%d,"&N);
    for(i=0;i<N;i++){
        scanf("%c",A[i]);
        
    }
    
    return 0;
}