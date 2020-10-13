/*/
#include<stdio.h>
int main()
{
    int a=0;
    while(a<10){
        printf("%d\n ",a);
        a++;
    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=10){
        printf("%d ",a*a);
        a++;
    }
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    
    int a=0;
    do {
        printf("%d ",a);
        a++;
    }while(a<20);
    
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
 
    int a=0; 
    for(a=2;a<32;a*=2)
    {
        printf("%d",a);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=2;x<=13;x+=3)
    {
        printf("%d ",x);
    }
    return 0;
}

*/
/*

#include<stdio.h>
int main()
{
    int x=0;
    for(x=1;x<=5;x+=6)
    {
        printf("%d ",x);
    }
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
 
    for(int x=-2;x<=15;x+=7)
    {
        printf("%d ",x);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
 
    for(int x=12;x>=2;x-=4)
    {
        printf("%d ",x);
    }
    
    return 0;
}

*/
/*
 * 
#include<stdio.h>
int main()
{
 
    for(int x=3;x<=15;x*=3)
    {
        printf("%d ",x);
        
    }
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=16;x>=1;x/=2)
    {
        printf("%d ",x);
    }
 
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=1;x<=7;x++)
        printf("%d ",x);
 
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=19;x>=-11;x-=6)
        printf("%d ",x);
 
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=2;x<=32;x*=2)
        printf("%d ",x);
 
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    for(int x=20;x<=48;x+=7)
        printf("%d ",x);
 
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i=1;
    for(; i<=10;i++)
        printf("altinci");
 
    
    return 0;
}
*/
/*
 * 
#include<stdio.h>
int main()
{
    for(int x=1;x<=10; )
        {
            printf("yedinci");
            printf("x=%d ",x);
            x++;
        }
 
    
    return 0;
}
*/
/*

#include<stdio.h>
int main()
{
     int a,b,c=0;
     for(a=3,b=2;b<500&&a<500; a++,b++,c++)
     {
         printf("%d %d %d \n",a,b,c);
         
     }
    printf("Son durum: %d %d %d \n",a,b,c);


    
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
      int n=5;
      while(n>0)
          printf("infinite  ");


    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
       
      while(5)
          printf("infinite  ");


    
    return 0;
}
 */
 
 /*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++) //5 kere dört yıldız yazdırır
    {
        for(int j=1;j<=4;j++) //toplamda dört yıldız yazdırır. 
        {
            printf("*");
        }
        printf("\n");
    }
      

    
    return 0;
}

*/
/*
 * 
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=50;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
      

    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("x");
            
        }
        printf("\n");
    }
    return 0;
}
*/
/*
 * 
#include<stdio.h>
int main()
{
    int j,i; 
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("");
            
        }
        printf("\n");
        
        for(j=1;j<=i;j++)
        {
            printf("o");
            
        }
        printf("\n");
    }
    
    
    return 0;
}

*/
/*
#include<stdio.h>
int main(){
    
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("o");
            
        }
        printf("\n");
    }
    
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
            
        }
        for(j=1;j<=i;j+)
        {
            printf("x");
            
        }
        printf("\n");
    }
    retun 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int m, n=1000;
    for(int i=1;i<=n;i++)
    {
        m++;
        
    }
    printf("Koruma ve Güvenlik: %d",m);
    printf("OMER DOGU");
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int m, n=1000;
    for(int i=1;i<=n;i++)
    {
        m+=i;
        
    }
    printf("Koruma ve Güvenlik: %d",m);
    printf("OMER DOGU");
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int m;
    for(int i=1;i<=5;i++)
    {
        m+=i*i+i*i*i;
         printf("%d.sirada m toplami: %d \n",i,m);
        
    }
    printf("m sayisi son hali: %d ",m); 
   
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i=0,m;
    for(int i=1;i<=5;i++)
        m+=2*i-1;
        printf("%d ",m);
    
    
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int m=0;
    for(int i=1;i<=5;i++)
    {
        m++;
        for(int j=1;j<=i;j++)
        {
            m++;
        }
    }
    printf("m nin son durumu: %d",m);
    
    return 0;
}   

*/

/*
#include<stdio.h>
int main()
{
    int m=0;
    for(int i=1;i<=5;i++)
    {
        m+=i;
        for(int j=1;j<=5;j++)
        {
            m+=1;
            for(int k=1;k<=5;k++)
            {
                m+=1;
            }
        }
    }
    printf("m nin degeri: %d",m);
        
    
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int m=0;
    for(int i=1;i<=5;i++)
    {
        m+=1;
        for(int j=1;j<=i;j++)
        {
            m+=i;
            
        }
    }
    printf("m nin degeri: %d \n",m);
    
    
    
    
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int m=0;
    for(int i=1;i<=5;i++)
    {
        m+=i;
        for(int j=1;j<=5;j++)
        {
            m+=i+j;
            for(int k=1;k<=5;k++)
            {
                m+=i+j;
                
            }
        }
    }
    printf("m nin son degeri: %d \n",m);
    
    
    
    
    return 0;
}
*/
/*

    #include<stdio.h>
    int main()
    {
        int m=0;
        for(int i=1;i<=5;i++)
        {
            m+=i;
            for( int j=1;j<=5;j++)
            {
                m+=i+ j;
                for( int k=1;k<=5;k++)
                {
                    m+=i+j+k;
                }
            }
        }
        printf("m nin son degeri: %d \n",m);
        
        
        
        
        return 0;
    }
    */

/*
#include<stdio.h>
    int main()
    {
        int m=0;
        for(int i=1;i<=5;i++)
        {
            for(j=i;i<=5;j++)
            {
                m+=j;
            }
        }
        
        
        return 0;
    }
    
*/

#include<stdio.h>
int main()
{
    
    int x, toplam=0;
    
    while(1){
        scanf("Sayiyi giriniz : %d",&x);
        if(x==0)
            break;
        else if(x<0)
            continue;
            
        toplam+=x;
        
      
    }
    printf("Toplam %d",toplam);
    
    return 0;
    
}