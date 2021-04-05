#include "Mylib.h"

//namespace for task #1 and #5 Functions
namespace Mylib
{

   void initArray( float* array, int size )
    {
      for (int i=0; i<size; i++ )
        {
          std::cout<<"\nPlease enter "<<i<<" massive element : ";
          std::cin>>array[i];
         }
     }

   void printArray( float* array, int size )
     {
      for (int i=0; i<size; i++ )
        {
         std::cout<<array[i]<<"\t";
         }
      }

   void sortArray( float* array, int size, int& belowZero, int& aboveZero )
   {
       for (int i=0; i<size; i++ )
         {
            if (array[i]<0)
               {
                belowZero++;
               }
            if(array[i]>0)
               {
                aboveZero++;
               }
       }

   }
}
//end namespace for task #1 and #5 Functions



//Functions for task #3
void initArraytask3( int* intarray, int arrsize )
{
    for (int i=0; i<arrsize; i++ )
      {
        std::cout<<"\nplease enter "<<i<<" element of massive : ";
        std::cin>>intarray[i];
       }

}
void sortArraytask3( int* intarray, int arrsize )
{
    int temp; // temporary variable for swap elements

    //bubble sort
    for (int i = 0; i < arrsize - 1; i++)
    {
        for (int j = 0; j < arrsize - i - 1; j++)
        {
            if (intarray[j] > intarray[j + 1])
            {
                // swap elements
               SwapINT( intarray[j, intrarray[j+1]] );
            }
        }
    }
}
void printArraytask3( int* intarray, int arrsize )
  {
   for (int i=0; i<arrsize; i++ )
     {
      std::cout<<intarray[i]<<"\t";
      }
   std::cout<<"\n";
  }
//end of Functions for task #3


//Functions for task #4

std::string resol=".txt";

void Worker::init()
  {
    std::cout<<"Please enter Number of worker: ";
    std::cin>>id;
    std::cout<<"\nPlease enter Position :";
    std::cin>>position;
    std::cout<<"\nPlease enter name: ";
    std::cin>>name;
    std::cout<<"\nPlease enter surname :";
    std::cin>>surname;
    std::cout<<"\nPlease enter salary :";
    std::cin>>salary;
  }
void Worker::print()
   {
    std::cout<<"Worker personal number: "<<id<<"\n";
    std::cout<<"Worker Position: "<<position<<"\n";
    std::cout<<"Worker name: "<<name<<"\n";
    std::cout<<"Worker surname: "<<surname<<"\n";
    std::cout<<"Worker salary: "<<salary<<"\n";
   }
void Worker::printToFile( char* filename )
   {
    std::string fileName=filename+resol;
    std::ofstream fout( fileName, std::ios::app );
    fout <<"ID:"<<id<<" ";
    fout <<"POSITION:"<<position<<" ";
    fout <<"NAME:"<<name<<" ";
    fout <<"SURNAME:"<<surname<<" ";
    fout<<"SALARY:"<<salary<<" ";
    fout<<"\n\n";
    fout.close();
  }
//end of Functions for task #4
