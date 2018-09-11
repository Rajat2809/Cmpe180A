
#include <iostream>

using namespace std;

class operatorOverload {
    private:
    int count;
    int vare;
    public:
    operatorOverload(int x=0){ count=5;
        vare=x;
    }
    
    void operator ++(){
        count=count+vare;
    }
    void display(){
        cout<<"Count : "<<count;
    }
};

int main()
{
    operatorOverload o(5);
    ++o;
    o.display();
   return 0;
}
