#include <stdio.h>
// kullanıcının girdiği sayıdan küçük veya eşit en büyük asal sayıyı bul

int main() 
           
{ 
  
  int i,j; // i girilen sayıdan itibaren küçülerek gider,j ise 2'den itibaren büyüyerek gider
  int n;
  
  printf("sayi girin: ");
  scanf("%d",&n); // 8 olsun
  
  for(i = n ; i >= 2 ; i--)
  {
   int AsalKontrol = 1; // kontrol edilen her sayı asal gibi kabul et!
    
   for(j = 2 ; j < i ; j++)
   {
     if(i % j == 0)
     {
      AsalKontrol = 0; 
     // break; bi şeyi değiştirmez
     }
   }
   
   if(AsalKontrol == 1)
   {
    printf("%d\n",i);
    break;
   }
  }

  return 0;
  
}
