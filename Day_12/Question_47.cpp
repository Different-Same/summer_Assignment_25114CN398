// to Write function for Fibonacci
#include<iostream>
int fibo(int a,int b, int n);
int main()
{
    int a,b,n;
    std::cout << "Enter the First Number :";
    std::cin >> a;
     std::cout << "Enter the Second Number :";
    std::cin >> b;
     std::cout << "Enter the Number of term :";
    std::cin >> n;
    std::cout <<"The Fibonacci Series : \n";
    std:: cout << a<< ' '<< b << ' ';
     fibo(a,b,n);
    return 0;
}
int fibo(int a,int b,int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        std::cout << c << ' ';
    }
    return 0;
}