#include <iostream>

using namespace std;

template <typename T>
class Box
{
  public:
    T x;

  public:
    Box() {}
    void setX(T newValue)
    {
        x = newValue;
    }

    T getX()
    {
        return x;
    }
};

int main(int argc, char *argv[])
{
    Box<int> intBox;
    intBox.setX(7);
    cout << "intBox: " << intBox.getX() << endl;
    
    Box<string> strBox;
    strBox.setX("Ali");
    cout << "strBox: " << strBox.getX() << endl;

    return 0;
}