#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    int i;

    while (true)
    {
        cin >> i;

        if (cin.eof())
            return 1;

        cout << i * i << endl;
    }
}