#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> f;
    if(n > 1) {
        f.push_back(1);
        f.push_back(1);
        int p = 1;
        while ((f[(p-1)] + f[p]) < n)
        {
            p = p + 1;
            f.push_back((f[(p-1)] + f[p]));
        }
        
    }

    return f;
}
