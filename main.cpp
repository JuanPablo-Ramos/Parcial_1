#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float tO, tD, t0O=0, t0D=2.5, radioD =0.025, radioO =0.05, Ho, HD, distancia, anguloO, anguloD;
    float yO, vyO, g=9.8, xO, vxO, yD, vyD, xD, vxD, v0O, v0D;

    //Ecuaciones.

    // ofensivo

    yO = Ho + v0O*(sin(anguloO*3.14159/180))*tO - (1/2)*g*(pow(tO,2));
    vyO= v0O * sin(anguloO*3.14159/180) - g*tO;
    xO = v0O * cos(anguloO*3.14159/180)*tO;
    vxO= v0O * cos(anguloO*3.14159/180);

    // defensivo

    yD = HD + v0D * (sin(anguloD*3.14159/180))*(tD-t0D) - (1/2)*g*(pow(tD-t0D,2));
    vyD= v0D * sin(anguloO*3.14159/180) - g*(tD-t0D);
    xD = v0D * cos(anguloO*3.14159/180)*(tD-t0D);
    vxD= v0D * cos(anguloO*3.14159/180);




    return 0;
}
