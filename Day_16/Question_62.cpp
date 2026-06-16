//  a program to Find maximum frequency element
#include<iostream>
void frequency(int num[],int size);

int main()
{
    int size;
    std::cout <<"Enter the number of element in the array:";
    std::cin >> size;
    int* pnum=new int[size];
    for(int i=0;i<size;i++)
    {
        std::cout <<"Enter the #" << i+1<< " number: ";
        std::cin >> pnum[i];
    }
    frequency(pnum,size);
    delete[] pnum;
        return 0;

}
void frequency(int num[],int size)
{
    int duplicate[size];//array to contain dupliate number
    int occurance[size]={0};//array to contain occruance of repeated number
    int k=0;
    for(int i=0;i<size;i++) // loop to count duplicate
    {
        bool condition=false;
        for(int l=0;l<k;l++)//lopp to skip repeated number
        {
            if(num[i]==duplicate[l]) 
            {
                condition=true;
                break;
            }
        }
        if(condition)//condition to skip repeated number
        {continue;}

        int result=1;
        for(int j=i+1;j<size;j++) //loop to count repeated number
        {
            if(num[i]==num[j])
            {
                result++;
            }
        }
        if(result>1)//contition to add repeated number and occrance in their resepctive array
        { 
         duplicate[k]=num[i];
        occurance[k]=result;
        std::cout <<"the frequency of "<<num[i] <<" in the array : "<< result <<'\n';
        k++;
        }
    }
    if(k==0) // in case of no duplicate condition
        {std::cout <<"No duplicate number exist";
        return;}
    else{
      int index=0;
       int temp=occurance[0];
    for(int u=1;u<k;u++)//loop to check maxmium number in array containing duplicate number
    {
      
        if(temp<occurance[u])
        {
            temp=occurance[u];
            index=u;
        }
    }
    std::cout<< "The Maximum frequency is " << occurance[index] << " of " <<duplicate[index];
  }
;}