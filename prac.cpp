#include <iostream>

using namespace std;
  
  class A
  {
       public:
       void fun()
       {
           int a=10; int b= 20;
           int sum = a+b;
           cout<<"addition"<<sum<<endl;
       }
       
       void fun(int num1 ,int num2)
       {
           int sub =num1-num2; 
           cout<<"subtraction "<<sub<<endl;
           
       }
  };
  int main()
  {
  
       A obj;
       obj.fun();  obj.fun(100,75);
  
    return 0;
}