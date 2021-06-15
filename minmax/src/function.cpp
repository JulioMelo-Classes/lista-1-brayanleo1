#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std::size_t n )
{
    std::pair<int, int> min_maxP;
    if (n == 0) {
        min_maxP.first = -1;
        min_maxP.second = -1;
    }
    else if(n == 1) {
        min_maxP.first = 0;
        min_maxP.second = 0;
    } else if (n > 1) {
        int min = V[0];
        int max = V[0];
        int pMin = 0;
        int pMax = 0;

        int c = 1;

        while(c < n) {
            if(V[c] < min) {
                min = V[c];
                pMin = c;
            }

            if(V[c] >= max) {
                max = V[c];
                pMax = c;
            } 
            c = c + 1;
        }

        min_maxP.first = pMin;
        min_maxP.second = pMax;

    }

    return min_maxP;
}
