#include <iostream>

using namespace std;

template <typename E>
int printArray(E &array, string end = "\n")
{
    for (auto element : array)
    {
        cout << element << end;
    }
}

template <typename T>
void print(T message, string end = "\n")
{
    cout << message << end;
}

int main(int argc, char *argv[])
{
    int nums[] = {1, 2, 3, 4, 5};
    print("Abdo");
    printArray(nums, ", ");

    return 0;
}