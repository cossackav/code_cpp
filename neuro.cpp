#include<iostream>
#include<stdio.h>
using namespace std;
///////////////////////
class Counter
{
private:
    unsigned int count;
public:
    Counter():count(0)
    {}
    void inc_cout()
    {count++;}
    int get_count()
    {return count;}
};
///////////////////////
int main()
{
    Counter c1, c2;
    cout << "\nc1= " << c1.get_count();
    cout << "\nc1= " << c2.get_count();
    return 0;
}


