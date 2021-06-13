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
    pair<int, int> min_maxP;

    int min = V[0];
    int max = V[0];

    int c = 1;

    while(c != n) {
        if(V[c] < min) {
            min = V[c];
        }

        if(V[c] > max) {
            max = V[c];
        }
        c = c + 1;
    }

    min_maxP.first = min;
    min_maxP.second = max;

    return min_maxP;
}
