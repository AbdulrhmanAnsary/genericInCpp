#include <iostream>

using namespace std;

template <typename T>
T devide(double num1, double num2)
{
     return num1 / num2;
}

int main(int argc, char *argv[])
{
    cout << devide<int>(5, 2);
    cout << devide<double>(5, 2);

    return 0;
}
