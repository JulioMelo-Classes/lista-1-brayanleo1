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

    while (std::cin >> std::ws >> m >> n) {

        if(n == 0) {
            r = m;
        } else {
            r = 0;
        }

        while(n != 0) {
            if(n > 0) {
                r = r + m;
                m = m + 1;
                n = n - 1;
            } else {
                r = r + m;
                m = m - 1;
                n = n + 1;
            } 
        }

        std::cout << r << endl;

    }

    return 0;
}
