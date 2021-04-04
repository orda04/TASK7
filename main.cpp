/*
**********  Seventh task on C++ course                                       ****
**********  Filename >main.cpp                                               ****
**********  IDE > QT Creator 4.13.2||CodeBlocks 20.03 + GCC 10.2.0           ****
**********  Created by > "~ORDA~" , Anton Bondarenko                         ****
**********  Date 04.04.2021                                                  ****
*/



// DONE●Создайте проект из 2х cpp файлов и заголовочного (main.cpp, mylib.cpp, mylib.h) во втором модуле mylib объявить 3 функции:
//       для инициализации массива (типа float), печати его на экран и подсчета количества отрицательных и положительных элементов. Вызывайте эти 3-и функции из main для работы с массивом.
// DONE●Описать макрокоманду (через директиву define), проверяющую, входит ли переданное ей число (введенное с клавиатуры) в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)
//       и возвращает true или false, вывести на экран «true» или «false».
// DONE●Задайте массив типа int. Пусть его размер задается через директиву препроцессора #define. Инициализируйте его через ввод с клавиатуры. Напишите для него свою функцию сортировки (например Пузырьком).
//      Реализуйте перестановку элементов как макрокоманду SwapINT(a, b). Вызывайте ее из цикла сортировки.
//      ●*Объявить структуру Сотрудник с различными полями. Сделайте для нее побайтовое выравнивание с помощью директивы pragma pack. Выделите динамически переменную этого типа. Инициализируйте ее.
//        Выведите ее на экран и ее размер с помощью sizeof. Сохраните эту структуру в текстовый файл.
// DONE●*Сделайте задание 1 добавив свой неймспейс во втором модуле (первое задание тогда можно не делать).





#include "main.h"

#define CHECK( n, z ) if( n<z && n>=0 ){ std::cout<<"TRUE\n"; }else{ std::cout<<"FALSE\n"; }
#define ARRAYSIZE 10

/*
#pragma pack(push, 1 )
struct Worker
{
  int id;
  char position[64];
  char name[64];
  char surname[64];
  int salary;
};
#pragma pack(pop)
*/
int main()
{
    //*************************************************************************************************
//    std::cout <<"Task  1 and 5 in process\n";
//    const int size=6;
//    float arr[size]={0};
//    int belowZero=0, aboveZero=0;
//    Mylib::initArray(arr,size);
//    Mylib::printArray(arr,size);
//    Mylib::sortArray(arr,size,belowZero,aboveZero);
//    std::cout<<"\nQuantity of negative elements is: "<<belowZero<<"\n";
//    std::cout<<"Quantity of positive elements is: "<<aboveZero<<"\n";

    //*************************************************************************************************

    //*************************************************************************************************
//    std::cout <<"2ND task in process\n";
//    int n=0,z=100;
//    std::cout<<"Please Enter your number : ";
//    std::cin>>n;
//    CHECK(n,z);

    //*************************************************************************************************
 //   std::cout <<"3RD task in process\n";
 //  int task3array[ARRAYSIZE]{0};
 //   initArraytask3( task3array, ARRAYSIZE );
 //   sortArraytask3( task3array, ARRAYSIZE );
 //   printArraytask3( task3array, ARRAYSIZE );

    //*************************************************************************************************
   std::cout <<"\n4TH task in process\n";
   //const size_t company_size=1;//size of super small company
   char filename[64];
   int company_size=0;
   std::cout<<"enter size of company: ";
   std::cin>>company_size;


   Worker* Company = new(std::nothrow) Worker[company_size];

   if(Company!=nullptr)
     {
      for(int i=0;i<company_size;i++)
       {
        Company[i].init();
       }


      std::cout<<"Memory usage size:"<<sizeof(Company)<<"\n";
      for(int i=0;i<company_size;i++)
       {
        Company[i].print();        }
      std::cout<<"Please enter filename :" ;
      std::cin>>filename;

      for(int i=0;i<company_size;i++)
       {
        Company[i].printToFile(filename);
       }

      delete[] Company;
      Company=nullptr;

   }

   return 0;
}
