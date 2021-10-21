#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

#include "functions.h"

double EX_1(int x, int a, int c)
{
   long double L = 0;
   long double L1= 0;

   L = cos(pow(x, 2) * pow(a, 5));
   L = pow(L, 4);
   L = sqrt(exp(x) - L);
   L1 = atan(a - pow(x, 4));
   L1 = pow(L1, 4);
   L = L + L1;
   c = pow(c, 4);
   L1 = exp(1)*sqrt(abs(a + x * c));
   L = L / L1;
   return (L);
}

long int EX_2(int t)
{
   int u = 0;
   u = (3 * t * t) - (6 * t);
   return (u);
}

void EX_3()
{
   float x1 = 0, x2 = 0;
   printf("Ââåäèòå çíà÷åíèÿ a,b,c ");
   int a = 0, b = 0, c = 0;
   scanf_s("%d %d %d", &a, &b, &c);
   printf("%dx^2+%dx+%d=0\n", a, b, c);
   float D = 0;
   D = b * b - 4 * a * c;
   if (D < 0)
   {
      
      printf("Êîðíåé íåò\n");
   }
   if (D == 0)
   {
      x1 = (-b) / (2 * a);
      printf("Êîðåíü îäèí è ðàâåí îí %f \n", x1);
   }
   if (D > 0)
   {
            x1 = ((-b) - sqrt(D))/ (2*a);
      x2 = ((-b) + sqrt(D)) / (2*a);
      printf("Êîðåíÿ äâà: %f è %f \n", x1, x2);
   }
   return;
}

unsigned int EX_4(double time, int code)
{
   int price = 0;
   switch (code)
   {
   case 48 :
      price = time * 15;
      break;
   case 44:
      price = time * 18;
      break;
   case 46:
      price = time * 13;
      break;
   case 45:
      price = time * 11;
      break;
   default:
      printf("ââåäåíî íåâåðíûé êîä ãîðîäà");
   }
   return price;
}

void EX_5( )
{
   for (int i = 1000 ; i < 10000; ++i)
   {
      int ssum = 0;
      int i1 = i;
      int n = 0;
      while (i1 > 0)
      {
         n = i1 % 10;
         ssum = ssum + pow(n, 4);
         i1 = i1 / 10;
      }
      if (ssum == i)
      {
         printf("%d\n", i);
        
      }
   }
   return;
}



///Ïåðåâîä èç äåñÿòè÷íîé â äâîè÷íóþ
void EX_65()
{
   int numb = 0;
   printf("Ââåäèòå ÷èñëî\n");
   scanf_s("%d",&numb );
   int kolvo = 0;
   int znack = ceil(log2(numb))+1;
   int *a;
   a = (int*)malloc(znack * sizeof(int));
   for (int i = 0; i < znack; ++i)
   {
      a[i] = numb % 2;
      numb = numb / 2;
   }
   for (int i = znack-1; i >=0; --i)
      printf("%d", a[i]);
   return;


}


//Ïåðåâîä èç äâîè÷íîé â äåñÿòè÷íóþ
void EX_6()
{
   int n = 0;
   printf("Ââåäèòå ðàçìåð ìàññèâà");
   scanf_s("%d", &n);
   int* a;
   int newnumb = 0;
   a = (int*)malloc(n * sizeof(int));
   for (int i = 0; i < n; ++i)
   {
      scanf_s("%d", &a[i]);
      newnumb= a[i] + newnumb*2 ;
   }
   printf("%d",newnumb);

return;
}



void EX_7()
{
   int I = 0;
   int J = 0;

   printf("Ââåäèòå ðàçìåð ìàññèâà");

   scanf_s("%d%d", &I, &J);

   srand(time(NULL));

   int* L =(int*)malloc(I * J * sizeof(int*));

   for (int l = 0; l < I * J; l++)
   {
      L[l] = rand() % 21 - 10;
   }
   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         printf("%d ", L[i * J + j]);
      }
      printf("\n");
   }

   printf("\n");

   for (int i = 0; i < I; i++)
   {
      for (int j = 0; j < J; j++)
      {
         L[i * J + j] = 3 * (-L[i * J + j]);
         printf("%d ", L[i * J + j]);
      }
      printf("\n");
   }

   return;
}

