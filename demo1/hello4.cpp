#include<iostream>
#include<limits>
using namespace std;

int main()
{
int number;
while (true)
{
    std::cout<<"enter a number:";
    std::cin>>number;
    if(std::cin.fail())
    {
        std::cout<<"fail le"<<std::endl;
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    else
    {
        break;
    }
    /* code */
}


}