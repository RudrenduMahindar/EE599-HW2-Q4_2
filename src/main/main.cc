#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    int x=5;
    int y=4;
    cout<<"before swap"<<" x= "<< x <<" y= "<< y <<endl;
    solution.Swap(&x,&y);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    cout<<"after swap"<<" x= "<< x <<" y= "<< y <<endl;

    return EXIT_SUCCESS;
}