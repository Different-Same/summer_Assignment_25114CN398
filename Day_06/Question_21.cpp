// To convert Decimal to Binary
#include<iostream>
int main()
{
    int num,tem,length;
    std::string binary;
    std::cout << "Enter the Number to change into Binary:";
    std::cin >> num;
    for(int i=num;i>=1;i=i/2)
    {
        tem=i%2;
        if(tem==0)
        {
            binary.append("0");
        }
        else
        {
            binary.append("1");
        }
    }
    length=binary.length();
     std::cout<<binary <<'\n';
    for(int j=0;j<length/2;j++)
    { 
        std::swap(binary[j],binary[(length-1)-j]);
    }
     std::cout << binary << '\n';
    return 0;
}