#include<iostream>
using namespace std;

class Cooking
{
    public:
    int a,b,c;
    virtual void receipe()=0;
    void setA(int a)
    {
        this->a=a;
    }
    void setB(int b)
    {
        this->b=b;
    }
    void setC(int c)
    {
        this->c=c;
    }
};

class FruitsRatio:public Cooking
{
    public:
    
    void receipe()
    {
        int s;
        s=s=min(a,min(b/2,c/4));
        cout<<1*s+2*s+4*s<<endl; 
    }
};

int main()
{
    
    FruitsRatio obj;
    obj.setA(2);
    obj.setB(5);
    obj.setC(7);
    obj.receipe();
    return 0;
}