#include <iostream>

using namespace std;

class operatorOverload {
    private:
    int count;
    public:
    operatorOverload(): count(5){}
    
    void operator ++(){
        count=count+2;
    }
    void display(){
        cout<<"Count : "<<count;
    }
};

int main()
{
    operatorOverload o;
    ++o;
    o.display();
   return 0;
}