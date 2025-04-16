#include <iostream>
class person
{
    public:

    int a = 0;
    int b = 10;

    int add(int a, int b)
    {
        return a+b;
    }
}


int main()
{
    person p;
    cout<<p.add(10,20)<<endl;

    return 0;
}