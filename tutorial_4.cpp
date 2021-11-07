#include<iostream>
using namespace std;
 
void swap(int a, int b)
 
int main()
{
    int a,b;
    cout<<"Enter Value Of A  " <<endl;
    cin>>a;
    cout<<"Enter Value of B " <<endl;
    cin>>b;

    cout<<"before Swapping Values::\nA = "<<a<<" and B = "<<b<< endl;

    swap(a,b);
    return 0;
}
void swap()
{
   int temp;
 
   temp = b;
   b = a;
   a = temp;
   cout<<"After Swapping Values ::\nA = "<<a<<" and B = "<<b<< endl;
   

}
