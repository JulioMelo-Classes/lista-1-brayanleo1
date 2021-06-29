#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
/*
50%
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    int l = 0;
    //nesse caso, vc está aceitando qualquer ponto que esteja nas retas que delimitam o retângulo. Tipo se um ponto for (IE.x, 21651651) v
    //vc vai dizer que ele é border, já que ele cai na primeira condição, mesmo que ele não esteja dentro do retângulo.
    if(P.x == IE.x || P.x == SD.x || P.y == IE.y || P.y == SD.y) { 
        l = 1;
    } else if (P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y) {
        l = 2;
    }

    if(l == 0) {
        return location_t::OUTSIDE;
    } else if (l == 1) {
        return location_t::BORDER;
    } else {
        return location_t::INSIDE;
    }
}
