//
//  main.cpp
//  lab8
//
//  Created by Roman Mishchenko on 12.12.2017.
//  Copyright © 2017 Roman Mishchenko. All rights reserved.
//

#include <iostream>

using namespace std;

inline bool isset(unsigned x) {
    return (x & (1 << 0)) != 0;
    
}

int plusOne(int a, bool point)
{
   if(point == false)
      {
          
          
   int b = 1;
   int c=a&b;//присваивание переменной а значения а (логическое И) b
    while (c!=0)//проверка последнего бита а на "0"
    {
        
        a=a^b;//сведение а к нулю
        b=b<<1;//побитовый сдвиг b для нахождения а+1
        c=a&b;//проверка а на равенство к нулю
    }
    a=(a^b);//значение а+1
          
          
          
          
      }
    
   else{
     
       int i = 0;
        bool boolB = true;
       int kek = a;
       while(boolB == true)
       {
           a = kek;
           a = a^(1<<i);
           i++;
           boolB = isset(a);
           
           
       }
       a = -a;
   }
    return a;
}

char vidno(int x, int y)
{
    char res = '=';
    if(x<=0 && y>0)
    {
        res = '<';
    }
    else if(x>0 && y<=0)
    {
        res = '>';
    }
    else {
        
        
            for (int i=sizeof(x)*8-1; i >= 0; --i)//начало цикла//sizeof(x)-размер переменной х
            {
                unsigned z = 1 << i;//присваивание переменной 1 со сдвигов на i
               // res = res == '=' ?  : res;//условие ? (если true):(если false)
                
                if(res == '=')
                {
                    if( (x&z)^(y&z) )
                        
                       {
                         if(x&z)
                         {
                             res = '>';
                         }
                         else{
                             res = '<';
                         }
                       }
                    
                    else{
                           res = '=';
                       }
                }
                else{
                    
                    res = res;
                }
            }
        }
    return res;
}

void change (int array[6][5])
{
    int mass[6];
    for(int i = 0; i < 6; i++)
    {
        mass[i] = array[i][0];
        array[i][0] = array[i][4];
        array[i][4] = mass[i];
    }
}
void changeFact (char array[6][5], int rad)
{
    
        for(int j = 0; j < 5; j++)
        {
            if(j % 3 == 0 && j != 0)
            {
                array[rad][j] = '!';
            }
        }
    
}

int main() {
    // insert code here...
    int a = 5;//-87/183//
    bool point = false;
    if(a<0)
    {
        a = -a;
        point = true;
    }
    a = plusOne(a,point);
   
    printf("%d", a);
    printf("\n");
    
    int x = 100;//-8//132
    int y = 100;//125//131
    char R;
    R = vidno(x, y);
    
    printf("%c", R);
    printf("\n");
    
    const int six = 6;
    const int five = 5;
    int array[six][five] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
   
    change(array);
    
    for(int i = 0; i < six; i++)
    {
        for(int j = 0; j < five; j++)
        {
            printf("%d", array[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    char  array2[six][five] = {{'1','2','3','4','5'},{'1','2','3','4','5'},{'1','2','3','4','5'},{'1','2','3','4','5'},{'1','2','3','4','5'},{'1','2','3','4','5'}};
    
    int rad = 0;
    
    changeFact(array2,rad);
    
    for(int i = 0; i < six; i++)
    {
        for(int j = 0; j < five; j++)
        {
            printf("%c", array2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
