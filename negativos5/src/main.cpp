#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.
/*easy!*/
int main(void)
{
    int c = 0;
    int n = 0;
    while (c < 5)
    {
        int x;
        std::cin >> std::ws>> x;
        if(x < 0) {
            n = n + 1;
        }
        c = c + 1;
    }

    std :: cout << n << '\n';
    
    return 0;
}
