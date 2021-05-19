#include<stdio.h>
#include<stdlib.h>
//se desea realizar un programa que diga que estilo de deporte es mejor para ti para eso: ingresa tus aptitudes y gustos a la hora de hacer actividades 
    ///LISTA DEPORTES:
// 1 PELOTA
// 2 EXTREMOS
// 3 MESA
// 4 MENTALES
// 5 EQUIPO
// 6 ACUATICOS
// 7 MOTOR

    ///LISTA HABILIDADES
//1CORRER: PEL
//2ESCALAR:EXTR
//3TRABAJO EN EQUIPO:MESA,PEL,MENT,EQUIPO,ACUA
//4FUERZA:EXTR,MOTOR,ACUA
//5DESTREZA:MESA,EXTR,MENT,MOTOR,EQUIPO,ACUA
//6RESISTENCIA:EXTR,MENT,MOTOR,ACUA

//7FLEXIBILIDAD:EXTR
//8COORDINACION:MESA,EXTR,PEL,MENT,MOTOR
//9MOVART:PEL,EQUIPO,ACUA
//10TRABAJO OBJETOS:MESA,PEL,MOTOR,EQUIPO


int main (int argc, char *argv){
    //DEPORTES
    int PEL=0,max=0,pos = 0;
    int n[10]; //Vector o arreglo de cada deporte (contadores)
    float v [2];
    int i=0,j=0,aux=1;
    int aptitudes[5],nino_prodigio[7];
    for(j=0;j<10;j++){
        n[j]=0; //Quitando basura de arreglo de contadores
        // printf("%i",n[j]);
        // system("PAUSE");
    }
    for(j=0;j<7;j++){
        nino_prodigio[j]=-1;
    }
    while(i<=4){
        //MENU PRINCIPAL
        inicio:
        system("CLS");
        // printf("\n%i\n",i);
        printf("\t\tHola Bienvenido al Programa de Aptitudes :)\n\n");
        printf("De la siguiente lista teclea 5 aptitudes que crees tener\n\n");
        printf("1) Correr\n2) Escalar \n3) Trabajo en equipo\n4) Fuerza\n5) Destreza\n6) Resistencia\n7) Flexibilidad\n8) Coordinacion\n9) Movimiento Articular\n10) Trabajo con objetos\n\tDigite una opcion: ");
        scanf("%i",&aptitudes[i]); //Lee la aptitud en forma de numero
        if(aptitudes[i]>10 || aptitudes[i]<1){
            printf("\nDigita una opcion valida\n");
            system("PAUSE");
            goto inicio;
        }else{
            i++; //Aumenta el contador del ciclo
        }
    }
    system("PAUSE");

    for (i=0;i<5;i++){ //FOR PARA DEPENDIENDO LAS APTITUDES LE SUME PUNTO A CADA DEPORTE
        switch (aptitudes[i])
        {
        case 1:

            n[0]++;

            break;
        case 2:

            n[1]++;

            break;
        case 3:

            n[2]++;
            n[0]++;
            n[3]++;
            n[4]++;
            n[5]++;

            break;
        case 4:

            n[1]++;
            n[6]++;
            n[5]++;

            break;
        case 5:
     
            n[4]++;

            break;
        case 6:

            n[1]++;
            n[3]++;
            n[6]++;
            n[5]++;

            break;
        case 7:

            n[1]++;

            break;
        case 8:

            n[2]++;
            n[1]++;
            n[0]++;
            n[3]++;
            n[6]++;

            break;
        case 9:

            n[0]++;
            n[4]++;
            n[5]++;

            break;
        case 10:
  
            n[2]++;
            n[0]++;
            n[6]++;
            n[4]++;

            break;            
        default:
            break;
        } 
    }

    system("CLS");
    for(j=0;j<10;j++){ //DEFINIENDO QUE DEPORTE TIENE MAS PUNTOS
        if(n[j]>max){
            max=n[j];
            pos = j+1; 
            nino_prodigio[0] = pos;
        }else{
            if(n[j]==max){ //SI HAY MAS DE UN MAX
            nino_prodigio[aux]=j+1;
            aux++;
            }
        }
        
    }
       for(i=0;i<7;i++){
        switch (nino_prodigio[i])
            {
            case 1:
                printf("\n\n\tERES BUENO EN LOS DEPORTES DE PELOTA");
                break;
            case 2:

                printf("\n\n\tERES BUENO EN LOS DEPORTES EXTREMOS");

                break;
            case 3:
                printf("\n\n\tERES BUENO EN LOS DEPORTES DE MESA");
                break;
            case 4:
                printf("\n\n\tERES BUENO EN LOS DEPORTES MENTALES");

                break;
            case 5:
                printf("\n\n\tERES BUENO EN LOS DEPORTES DE EQUIPO");

                break;
            case 6:
                printf("\n\n\tERES BUENO EN LOS DEPORTES DE ACUATICOS");

                break;
            case 7:
                printf("\n\n\tERES BUENO EN LOS DEPORTES DE MOTOR");
                break;          
            default:
                break;
            } 

    }
    printf("\n\n");
    printf("Gracias por usar el programa :), Vuelva pronto!\n\n");

    system("PAUSE");
}