//
//  main.cpp
//  lab7
//
//  Created by Roman Mishchenko on 09.12.2017.
//  Copyright © 2017 Roman Mishchenko. All rights reserved.
//

#include <iostream>

using namespace std;

struct Student{               //создание структурного типа данных содержащий:
    char name[20];            //Имя типа char[](список символов)
    int height;               //Рост типa int
    float massa;              //Масса типа float
   
};

struct Kievlian{              //создание структурного типа данных содержащий:
    char city[20];            //Город типа char[](список символов)
    int course;               //Курс типa int
    char name[20];            //Имя типа char[](список символов)

};

int main() {
    
    const int number = 7;     //создание константы целого типа равной 7
    Student group[number];    //создание одномерного массива типа Student, размера number
                              //Присваивание элементам массива значений
    group[0] = {"Ярополк",195,72};
    group[1] = {"Феофан",180,85};
    group[2] = {"Святогор",182,75};
    group[3] = {"Сварог",190,60};
    group[4] = {"Евкакий",175,65};
    group[5] = {"Мефодий",197,80};
    group[6] = {"Григорий",187,68};
    int kolvo = 0;
    
    for(int i = 0; i<number; i++)
    {
        if(group[i].massa == group[i].height-110)
        {
            kolvo++;                   //нахождение колличесва студентов с идеальным показателем Массы
        }
    }
    Kievlian group2[number];           //создание одномерного массива типа Kievlian, размера number
                                       //Присваивание элементам массива значений
    group2[0] = {"Киев",3,"Ярополк"};
    group2[1] = {"Неаполь",1,"Феофан"};
    group2[2] = {"Неаполь",2,"Святогор"};
    group2[3] = {"Венеция",3,"Светозар"};
    group2[4] = {"Киев",3,"Евкакий"};
    group2[5] = {"Старкон",1,"Мефодий"};
    group2[6] = {"Москва",3,"Григорий"};
    
    
   
    
    float kiev = 0;                    //создание переменной действительного типа
    int index = 0;
    bool b = true;
    for(int i = 0; i < number; i++)
    {
        
        if ((string(group2[i].city) == "Киев") && (group2[i].course == 3))
        {
            kiev++;                    //нахождение числа студентов из Киева, учащихся на 3 курсе
            if(b)
            {
                index = i;
                b = false;
            }
        }
    }
    float persent;                     //создание переменной действительного типа
    persent = (kiev*100)/number;       //нахождение процента студентов из Киева, учащихся на 3 курсе
    return 0;
}
