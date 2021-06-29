#include <string>
using std::string;

#include <iterator>
using std::iter_swap;

#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*não se usa iterswap dessa forma, vc poderia fazer com swap*/
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int x = arr.size();
    if(x > 1) {
        int n = 0;
        int m = x - 1;
        while((x/2) >= n) {
            std::iter_swap(arr[n],arr[m]);
            n = n + 1;
            m = m - 1;
        }
    }
}
