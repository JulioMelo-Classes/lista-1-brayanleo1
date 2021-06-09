/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m;
    int n;
    int r;

    std::cin >> std::ws >> m;
    std::cin >> std::ws >> n;
    r = m;

    while(n != 0) {
        if(n > 0) {
            m = m + 1;
            r = r + m;
            n = n - 1;
        } else {
            m = m - 1;
            r = r + m;
            n = n + 1;
        }
    }

    std::cout << r << '\n';

    return 0;
}
