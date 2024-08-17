#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    int n = 0;

    if (ac == 2)
    {
        n = atoi(av[1]);
    }

    for (; n > 0; n--)
    {
        int i;
        cin >> i;
        cout << i << endl;
    }
}