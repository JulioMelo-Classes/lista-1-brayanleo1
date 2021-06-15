#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> f;
    if(n > 1) {
        f.push_back(1);
        f.push_back(1);
        int p = 1;
        int u = 1;
        while ((p + u) < n)
        {
            f.push_back((p + u));
            p = u;
            u = f.back();
        }
        
    }

    return f;
}
