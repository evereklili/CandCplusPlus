/* #include<stdio.h>
 int main()
 {
     int x;
     for(int i=0;i<=1000;i++)
     {
         x+=i;
         printf("%d",x);
     }
     
     return 0;
 }
 */
 /*
  #include<stdio.h>
 int main()
 {
     int i;
     for(i=1;i<14;i+=2){
         if(i==9)
             break;
         printf("%d ",i);
         
     }
     
     printf("\n");
     
     for(i=1;i<14;i+=2){
          if(i==9)
         continue;
     printf("%d ",i);
     
     }
  
     
     
     
     return 0;
 }
*/

/*
 * 

#include<stdio.h>
int main()
{
    int i,N,toplam=0;
    scanf("%d",&N);
    toplam=0;
    for(i=1;i<=N;i++)
    {
        toplam+=i;
    }
    printf("%d", toplam);
    
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,N,toplam=0;
    scanf("%d",&N);
    toplam=1;
    for(i=1;i<=N;i++)
    {
        toplam*=i;
    }
    printf("%d", toplam);
    
    return 0;
}
*/
/*
 * 

#include<stdio.h>
int main()
{
    double i,toplam=0;
   
     
    for(i=1;i<=2000000;i++)
    {
        toplam+=(1/i);
    }
    printf("%lf", toplam);
    
    return 0;
}
*/

/*

#include<stdio.h>
int main()
{
    double toplam=0;
    double i;
    for(i=1;i<=100;i++)
    {
        toplam+=i/(101-i);
        
    }
    printf("%lf",toplam);
    
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
    int a, b;
    printf("a ve b sayilarini giriniz: ");
    scanf("%d,%d",&a,&b);
    if(a<b)
    {
        printf("%d sayisi küçük %d sayisindan oldugunan islem gecersizdir.",a,b);
    }
    else {
        for(int a;a<=0;a-=b)
        {
            printf("%d ",a-b);
        }
    } 
    
    return 0;
}*/
/*
 #include<stdio.h>
 int main(){
     int a,b,i;
     scanf("%d %d",&a,&b);
     for(i=a;i>=0;i-=b){
         printf("%d",i);
     }
     return 0;
 }
 */
 
 /*
  * 
 #include<stdio.h>
 int main(){
     int N,K,T, toplam=0;
     scanf("%d,%d,%d",&N,&K,& T);
     while(T--)
     {
         toplam+=N;
         N+=K;
         
     }
     printf("%d",toplam);
     return 0;
 }
 */
 /*
 #include<stdio.h>
 int main(){
     int a,i,b,c;
     scanf("%d,%d,%d",&a,&b,&c);
     for(i=c;i>=b;i--)
     {
         printf("%d ",i);
     }
     for(i=a;i<=b;i++)
     {
         printf("%d ",i);

     }
 
    
     
     return 0;
 }
 */
 /*
 #include<stdio.h>
 int main(){
     int i,A,B,toplam=0;
     scanf("%d,%d",&A,&B);
     for(i=A;i<=B;i++){
         toplam+=i;
         
     }
     printf("%d",toplam);
     
     
     
     return 0;
 
 */
 /*
 #include<stdio.h>
 int main()
 {
     int i, toplam1=0, toplam2=0;
     int n,m;
     scanf("%d %d",&m,&n);
     for(i=n;i>=m;i--)
     {
         toplam1+=i;
     }
     for(i=0;i<=m-1;i++)
     {
         toplam2+=i;
     }
     printf("%d", toplam1-toplam2);
     return 0;
 }
 */
 /*
 #include<stdio.h>
 int main()
 {
     int zayif=0,orta=0,agir=0;
     int i,N,agirlik;
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
         scanf("%d",agirlik);
         if(agirlik<45) { zayif++;}
         else if(agirlik<45) { orta++; }
         else { agir++; }
         
     }
     printf("%d %d %d ",zayif,orta,agir); 
     
     return 0;
 }
 
 */

/*
 #include<stdio.h>
 int main()
 {
     int x,i, N,sayac=0,y;
     scanf("%d,%d",&x,&N);
     for(i=0;i<N;i++)
     {
         scanf("%d",&y);
         if(x==y){
             sayac++;
         }
         
     }
     printf("%d", sayac); 
     return 0;
 }
 */
 /*
 #include<stdio.h>
 int main(){
     
     int x,i,N,minn,maxx;
     scanf("%d,%d",&N,&x);
     minn=x;
     maxx=x;
     for(i=2;i<=N;i++)
     {
         scanf("%d",&x);
         if(minn>x) { minn=x; }
         if(maxx<x) { maxx=x; }
     }
     printf("%d",maxx-minn);
     
     return 0;
 }
 
 
  * */
 //2.47.
 
 /*
 #include<stdio.h>
 int main(){
     int satir, sutun;
     int N,M;
     scanf("%d,%d",&N,&M);
     for(satir=1;satir<=M;satir++)
     {
         for(sutun=1;sutun<=N;sutun++)
         {
             printf("%d", satir);
             
             
         }
         printf("\n");
     }
     
     return 0;
 }
 */
 /*
  * 
 #include<stdio.h>
 int main(){
     int satir, sutun, N;
     scanf("%d",&N);
     for(satir=1;satir<=N; satir++)
     {
         for(sutun=1;sutun<=satir;sutun++)
         {
             printf("%d",satir);
         }
         printf("\n"); 
     }
     return 0;
 }
*/
 /*
 #include<stdio.h>
 int main(){
     
     int i,j,N;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("%d",N-i+1);
             
         }
         printf("\n");
     }
     return 0;
 }
 */

/*
 #include<stdio.h>
 int main(){
     
     int i,j,N;
     int k=1;
     scanf("%d",&N);
     for(i=1;i<=N;i++){
         for(j=1;j<=i;j++){
             printf("%d",k++);
             if(k==10) {
                 
           
                 k=1;
             }
             
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
     int i,j,N;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         for(j=1;i<=i;j++){
             printf("%d",i);
             
         }
         printf("\n");
         
     }
      for(i=N-1;i>=1;i--)
      {
          for(j=1;j<=i;j++)
          {
              printf("%d",i);
              
          }
          printf("\n");
      }
     return 0;şsafa
 }
 */
 /*
  * 
 #include<stdio.h>
 int main(){
     int i,j,N;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("%d",j);
         }
         printf("\n");
     }
     
     for(i=N-1;i>=1;i--)
     {
         for(j=1;j<=i;j++){
             printf("%d",j);
             
         }
         printf("\n");
     }
     
     
            
     
     return 0;
 }
 
 */
/*
 #include<stdio.h>
 int main(){
     
     int i,j,N;
     i=j=N=0;
     scanf("%d",&N);
     for(i=N;i>=1;i--){
         for(j=i;j>=1;j--)
         {
             printf("%d",j);
         }
         printf("\n");
     }
     
     
     return 0;
 }
 */
 /*
#include<stdio.h>
int main(){
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
            
        }
        printf("\n");
    }
}
*/

