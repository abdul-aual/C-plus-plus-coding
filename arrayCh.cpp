#include<iostream>
#include <cstring>
using namespace std;

int func(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;

    cout<<"x = "<<x<<endl;
    cout<<"y= "<<y<<endl;


}
int main()
{
    int a,b;
    cout<<"Enter x and y gradually = ";
    cin>>a>>b;
    func(a,b);






}
