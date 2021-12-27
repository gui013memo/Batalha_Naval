//#include <stdio.h>
#include <stdlib.h>

#include "funcoes.h"

char campo[10][10] = {'c'};





int main()
{

    fillRandomMatrix(campo, 10, 10, 4);
    
    
    drawMatrix(campo);
    

    system("pause");
}