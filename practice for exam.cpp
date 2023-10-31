#include<iostream>
using namespace std;


class Counter
{
    private:
    static int Count;
    public:
    void setCount()
    {
        Count++;
    }
    int getCount()
    {
        return Count;
    }
};
int Counter::Count = 0;
int main()
{
        Counter c1,c2,c3;
        c1.setCount();
        cout<<"Count is: "<<c1.getCount()<<endl;
        c2.setCount();
        cout<<"Count is: "<<c2.getCount()<<endl;
        c3.setCount();
        cout<<"Count is: "<<c3.getCount()<<endl;

    return 0;
}
