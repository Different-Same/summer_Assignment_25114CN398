// a program to Input and display array
#include<iostream>

int main()
{
   int n;
   std::cout << "Enter the Number of Element in Array:";
   std:: cin >>n;
   int *parray=new int[n];
   for(int i=0;i<n;i++)
   {
    std::cout <<"Enter the #" << i+1<<" element :";
    std::cin >> parray[i];
   }
   std::cout << "*********************** \n";
    for(int j=0;j<n;j++)
   {
    std::cout <<"The Element at #" << j+1<<" : "<<parray[j] << '\n';
   }
   delete[] parray;
   return 0;

}
