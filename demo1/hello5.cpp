#include<iostream>
#include<limits>
using namespace std;
int main()
{
  int year;
  std::cin>>year;
  if(std::cin.fail())
  {
    std::cout<<"非法格式"<<std::endl;
    std::cin.clear();
    std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
  }
  else
  {
    // 计算year是闰年还是平年
    if((year%4==0&&year%100!=0)||year%400==0)
    {
      std::cout<<year<<"是闰年"<<std::endl;
    }
    else
    {
      std::cout<<year<<"是平年"<<std::endl;
    }


  }
  return 0;  
} 