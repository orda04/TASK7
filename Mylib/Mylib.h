#ifndef MYLIB_H
#define MYLIB_H
#include<iostream>
#include<fstream>
#include <string>






//define for task#3
#define SwapINT(a, b){temp = intarray[j];intarray[j] = intarray[j + 1];intarray[j + 1] = temp;}
//end of define for task 3

//namespace for task #1 and #5 Functions
namespace Mylib
{
void initArray ( float* array, int size );
void printArray( float* array, int size );
void sortArray ( float* array, int size, int& belowZero, int& aboveZero );
}
//end namespace for task #1 and #5 Functions

//Functions for task #3
void initArraytask3( int* intarray, int arrsize );
void sortArraytask3( int* intarray, int arrsize );
void printArraytask3( int* intarray, int arrsize );
//end of Functions for task #3

// Task 4 Sructure and function for init and output
   #ifndef WORKER_H
   #define WORKER_H

     #pragma pack(push, 1 )
       struct Worker
         {
          int id;
          char position[64];
          char name[64];
          char surname[64];
          int salary;

          void init();
          void print();
          void printToFile(char* filename);
         };
     #pragma pack(pop)

    #endif// WORKER_H
     //end foFunctions for task #4




#endif // MYLIB_H
