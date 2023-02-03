#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r1){  //Call by value
    return r1.length*r1.breadth;
}

int main()
{
    struct Rectangle r2={10,5};
    cout<<area(r2);

    return 0;
}
