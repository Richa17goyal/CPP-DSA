#include<iostream>
using namespace std;

int main()
{
    int a = 12;
    cout<<"Size of a = "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of b = "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of c = "<<sizeof(c)<<endl;

    double d;
    cout<<"Size of d = "<<sizeof(d)<<endl;

    bool g;
    cout<<"Size of g "<<sizeof(g)<<endl;

    short int e;
    long int f;

    cout<<"Size of short int "<<sizeof(e)<<endl;
    cout<<"Size of long int "<<sizeof(f)<<endl;
    

    return 0;
}