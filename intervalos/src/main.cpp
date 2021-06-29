/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().
/*blz, sem vetores, muito bom!*/
int main(void)
{
    int x;
    double inUm = 0;
    double inDois = 0;
    double inTres = 0;
    double inQuatro = 0;
    double noIn = 0;
    double total = 0;

    while( cin >> std::ws >> x) {
        if(x >= 100) {
            noIn = noIn + 1;
        } else if (x >= 75) {
            inQuatro = inQuatro + 1;
        } else if(x >= 50) {
            inTres = inTres + 1;
        } else if(x >= 25) {
            inDois = inDois + 1;
        } else if(x >= 0) {
            inUm = inUm + 1;
        } else {
            noIn = noIn + 1;
        }
        total = total + 1;
    }
    std::cout << std::setprecision(4); 
    std::cout << ((inUm*100) / total) << '\n';
    std::cout << ((inDois*100) / total) << '\n';
    std::cout << ((inTres*100) / total) << '\n';
    std::cout << ((inQuatro*100) / total) << '\n';
    std::cout << ((noIn*100) / total) << '\n';

    return 0;
}
