#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int opcion=0;
    bool impactoCañonO=false, impactoCañonD=false;
    float tO, tD, t0O=0, t0D=2.5, radioD =0.025, radioO =0.05, Ho, HD, distancia, anguloO, anguloD;
    float yO, vyO, g=9.8, xO, vxO, yD, vyD, xD, vxD, v0O, v0D;

    // Opciones
    cout <<" Elija una de las opciones: "<<endl;
    cout <<"1. Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo."<<endl;
    cout <<"2. Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo."<<endl;
    cout <<"3. Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido."<<endl;
    cout <<"4. Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos."<<endl;
    cin >> opcion;

    if (opcion == 1){

    }
    else if (opcion == 2){

    }
    else if (opcion == 3){

    }
    else if (opcion == 4){

    }
    else {
        cout<< "opcion incorrecta. ";
        return 0;
    }



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
