#include<iostream>
using namespace std;
 
void swap(int a, int b);
 
int main()
{
    int a,b;
    cout<<"Enter Value Of A :: " <<endl;
    cin>>a;
    cout<<"Enter Value of B :: " <<endl;
    cin>>b;

    cout<<"Before Swapping Values::\nA = "<<a<<" and B = "<<b<< endl;

    swap(a,b); 
    return 0;  
}
void swap(int a, int b)
{
    a = a + b;      
    b = a - b;
    a = a - b;

   cout<<"After Swapping Values ::\nA = "<<a<<" and B = "<<b<< endl;

}
