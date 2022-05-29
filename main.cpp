#include <iostream>
#include <vector>
#include "math.h"
#include "string"
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "bibliotecavectores.h"

using namespace std;

int main() {
    //Vector ESTATICO
    vector<int> vectorvacio;


    //METODO 1 ESCRITURA



    //Operador de indireccion
    // "." para objetos simples
    // "->" para objetos dinamicos

    //VECTOR ESTATICO FASE 1 : LLENAR DE NUMEROS
    cout << "VECTOR ESTATICO FASE 1 : LLENAR NUMERO" << endl;
    cout << "\n";
    crearVectorNormOrdNum(vectorvacio, 1, 10);
    printVectorNormElement(vectorvacio);
    /*
    for (auto i = 1;i<=10;++i){
        //Añade nuevos elementos al final de cada vector
        vectorvacio.push_back(i);
        cout<<i<<"  ";
        // Lo que hago es añadir elementos al vector 1,2,3,4,5,6,7,8,9,10 al vector
    }
    */

    cout << endl;
    cout << endl;

    //VECTOR ESTATICO IMPRIMIR
    cout << "VECTOR ESTATICO IMPRIMIR " << endl;
    cout << endl;
    //MODO 1 FORINCH

    cout << "MODO 1 FORINCH " << endl;

    printVectorNormForinch(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
    */
    cout << "\n";

    //MODO 2 INDICES POR MEDIO DEL TAMAÑO DEL VECTOR .SIZE(TAMAÑO)
    cout << "\n";

    cout << "MODO 2 INDICES CON VECTOR SIZE " << endl;

    printVectorNormSize(vectorvacio);


    cout << "\n";


    //MODO 3 ITERADORES BEGIN Y END


    //1
    //vector.begin(me indica el primer elemento
    //¿Que es?
    //Me indica la posición del primer elemento(posición ojo no valor)

    //2
    //vector.end
    //¿Que es?
    // (me indica una posición posterior al ultimo elemento del vector)
    //Es decir vector 1 ,2 ,3 ,4 , end , el vector en verdad puede imprimir 1 ,2 ,3 ,4 ;
    // pero estara apuntando al end que no esta en el vector al imprimirlo


    //NOTA IMPORTANTE; SI NO LE COLOCAS ; ITERADOR ++ ; ESTO IMPRIMIRA INFINITO POR QUE ITERADOR BEGIN
    //SIEMPRE SERA DIFERENTE DE BEGIN , Y nunca avanzara de posición por no colocarle iterador ++ ;
    //PARA QUE AUMENTE DE POSICION

    cout << "\n";
    cout << "MODO 3 IMRPRIMIR CON ITERADORES VECTOR BEGIN Y END " << endl;

    printVectorNormBegEnd(vectorvacio);
    /*
    for ( auto iterador = vectorvacio.begin(); iterador != vectorvacio.end();iterador++)
        //Aqui digo iterador posición 1 vas a ir aumentando tu posición mientras seas diferente al iterador "end
        //que es posición ultima +1 , tu vas a ir aumentando de 1 en 1 pero hasta que no seas pos ultimo + 1 , imprime

        //RECORDAR QUE BEGIN Y END SON PUNTEROS , por lo que si quiere el valor de la posición coloco "*"
        cout <<*iterador<<"  ";
    */
    cout << endl;

    //MODO 4 IMPRIMIR VECTOR POR AT
    cout << "\n";
    cout << "MODO 4 IMPRIMIR VECTOR .AT (Para indices)" << endl;

    printVectorNormAt(vectorvacio);

    cout << endl;
    cout << endl;

    //VECTOR FASE 2 : INSERTAR AL INICIO UN NUMERO

    cout << "VECTOR FASE 2 : INSERTAR ELEMENTO  " << endl;

    cout << "\n";
    cout << "INSERTEMOS EL ELEMENTO 2 " << endl;
    cout << "\n";
    cout << "METODO 1 : AL FINAL CON INSERT Y END" << endl;

    //INSERT AL FINAL
    //INSERT : vector.insert(POSICION(BEGIN O END),ELEMENTO A AGREGAR)

    addVectorNormFinInt(2, vectorvacio);
    //vectorvacio.insert(end(vectorvacio),2);

    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
    */
    cout << endl;

    cout << "METODO 2 : AL INICIO CON INSERT Y BEGIN" << endl;

    //INSERT AL INICIO

    //INSERT : vector.insert(POSICION(BEGIN O END),ELEMENTO A AGREGAR)

    addVectorNormInicioInt(2, vectorvacio);
    //vectorvacio.insert(begin(vectorvacio),2);

    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
    */
    cout << endl;
    cout << endl;

    cout << "VECTOR FASE 3 : REDIMENSIONAMIENTO DE VECTOR (MODIFICAR EL SIZE Y VALOR DE INICIALIZACION) " << endl;
    //COMPOSICION: NOMBREDEVECTOR.resize(Nuevo Size del vector,Valor a inicializar)

    //EJEMPLO:vectorvacio.resize(15)

    cout << "SIZE ACTUAL : 12 , SIZE NUEVO : 15 , POR DEFECTO SI NO INICIALIZO ES 0:" << endl;

    //vectorvacio.resize(15);
    reDimenNormVectorDefault(15, vectorvacio);
    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
     */
    cout << endl;

    //NOTA NO PUEDO VOLVER A COLOCAR LOS VALORES YA INICIALIZADOS AL VOLVER A REDIMENSIONAR

    cout << "SIZE ACTUAL : 12 , SIZE NUEVO : 17 , INICIALIZO EN 4:" << endl;
    reDimenNormVectorNum(17, vectorvacio, 4);

    //vectorvacio.resize(17,4);

    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
     */
    cout << endl;
    cout << endl;
    cout << "VECTOR FASE 4 ELIMINAR ELEMENTOS : " << endl;
    cout << "METODO 1 : ELIMINAR ULTIMO ELEMENTO DEL VECTOR CON POP.BACK : " << endl;
    deleteVectNormEnd(vectorvacio);
    //vectorvacio.pop_back();

    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
     */

    cout << "\n";

    cout << endl;
    cout << "METODO 2 :ELIMINAR UN ELEMENTO DETERMINADO DEL VECTOR CON ERASE : " << endl;

    //EL ITERADOR BEGIN FUNCIONARA COMO INDICADOR A QUE ELEMENTO QUEREMOS ELIMINAR;

    //NOMBRE DE VECTOR. ERASE (POSICION CON ITERADOR DE VECTOR BEGIN )

    //AQUI DIGO ELIMINA EL ELEMENTO QUE ESTA EN LA POSICIÓN SIGUIENTE AL INICIO (POR ESO +1)

    deleteVectNormPosition(vectorvacio, 1);
    //vectorvacio.erase(vectorvacio.begin()+1);
    printVectorNormElement(vectorvacio);
    /*
    for (const auto elemento:vectorvacio ){
        cout<<elemento<<"  ";
    }
    */

    cout << "\n";
    cout << "\n";
    cout << "VECTOR FASE 5 LIMPIAR ESPACIO OCUPADO POR VECTORES" << endl;

    cout << "\n";

    //Limpiar los elemento del Vector con clear()
    cout << "vectorvacio.clear()" << endl;
    //vectorvacio.clear();
    clearVectorNormElement(vectorvacio);
    //Limpiar buffer del vector con shrink_to_fit()
    cout << "vectorvacio.shrink_to_fit()" << endl;
    //vectorvacio.shrink_to_fit();
    fitClearNormVector(vectorvacio);



    //-----------------------------------------------------------------------

    //VECTOR PUNTERO (LO MISMO)

    //Vector Dinamico( Vector Puntero)(HEAP)

    vector<int> *vectorpuntero = new vector<int>();


    //FASE 1 ESCRITURA



    //Operador de indireccion
    // "." para objetos simples
    // "->" para objetos dinamicos

    //VECTOR PUNTERO FASE 1 : LLENAR DE NUMEROS

    //CON PUSH.BACK(ELEMENTO QUE SE AÑADIRA)

    cout << "VECTOR PUNTERO FASE 1 : LLENAR NUMERO" << endl;
    cout << "\n";

    crearVectorPuntOrdNum(vectorpuntero, 11, 20);
    printVectorNormElement(vectorvacio);

    /*
    for (auto i = 11;i<=20;++i){
        //Añade nuevos elementos al final de cada vector
        vectorpuntero->push_back(i);
        cout<<i<<"  ";
        // Lo que hago es añadir elementos al vector en el heap 11,12,13,14,15,16,17,18,19,20 al vector
    }
    */
    cout << endl;
    cout << endl;

    //VECTOR ´PUNTERO IMPRIMIR
    cout << "VECTOR PUNTERO IMPRIMIR " << endl;
    cout << endl;
    //MODO 1 FORINCH

    cout << "MODO 1 FORINCH AL VECTOR PUNTERO " << endl;

    printVectorNormElement(vectorvacio);
    cout << "\n";

    //MODO 2 INDICES POR MEDIO DEL TAMAÑO DEL VECTORPUNTERO .SIZE(TAMAÑO)
    cout << "\n";
    cout << "MODO 2 INDICES CON VECTOPUNTERO SIZE " << endl;
    //Recuerda para vectores punteros usar "->"

    printVectorPuntSize(vectorpuntero);
    /*
    for (auto i = 0; i < vectorpuntero->size();i++){
        cout << (*vectorpuntero)[i] <<"  ";
    }
    */
    cout << "\n";


    //MODO 3 ITERADORES BEGIN Y END (VECTOR PUNTERO)


    //1
    //vector.begin(me indica el primer elemento
    //¿Que es?
    //Me indica la posición del primer elemento(posición ojo no valor)

    //2
    //vector.end
    //¿Que es?
    // (me indica una posición posterior al ultimo elemento del vector)
    //Es decir vector (11 ,12 ,13 ,14 , end) , el vector en verdad puede imprimir (11 ,12 ,13 ,14) ;
    // pero estara apuntando al end que no esta en el vector al imprimirlo


    //NOTA IMPORTANTE; SI NO LE COLOCAS ; ITERADOR ++ ; ESTO IMPRIMIRA INFINITO POR QUE ITERADOR BEGIN
    //SIEMPRE SERA DIFERENTE DE BEGIN , Y nunca avanzara de posición por no colocarle iterador ++ ;
    //PARA QUE AUMENTE DE POSICION

    cout << "\n";
    cout << "MODO 3 IMPRIMIR CON ITERADORES DE VECTOR BEGIN Y END " << endl;
    printVectorPuntBegEnd(vectorpuntero);

    /*
    for ( auto iterador = vectorpuntero->begin(); iterador != vectorpuntero->end();iterador++)

        //Aqui digo iterador posición 1 vas a ir aumentando tu posición mientras seas diferente al iterador "end
        //que es posición ultima +1 , tu vas a ir aumentando de 1 en 1 pero hasta que no seas pos ultimo + 1 , imprime

        //RECORDAR QUE BEGIN Y END SON PUNTEROS , por lo que si quiere el valor de la posición coloco "*"
        cout <<*iterador<<"  ";
    */
    cout << endl;

    //MODO 4 IMPRIMIR VECTOR POR AT
    cout << "\n";
    cout << "MODO 4 IMPRIMIR VECTORPUNTERO .AT (Para indices)" << endl;
    printVectorPuntAt(vectorpuntero);


    cout << endl;
    cout << endl;

    //VECTOR FASE 2 : INSERTAR AL INICIO UN NUMERO

    cout << "VECTOR FASE 2 : INSERTAR ELEMENTO EN VECTOR PUNTERO  " << endl;

    cout << "\n";
    cout << "INSERTEMOS EL ELEMENTO 2 " << endl;
    cout << "\n";
    cout << "METODO 1 : AL FINAL CON INSERT Y END" << endl;

    //INSERT AL FINAL
    //INSERT : vector.insert(POSICION(BEGIN O END),ELEMENTO A AGREGAR)

    addVectorPuntFinInt(2, vectorpuntero);

    //vectorpuntero->insert(end(*vectorpuntero),2);

    printVectorPuntElement(vectorpuntero);

    cout << endl;

    cout << "METODO 2 : AL INICIO CON INSERT Y BEGIN" << endl;

    //INSERT AL INICIO

    //INSERT : vector.insert(POSICION(BEGIN O END),ELEMENTO A AGREGAR)
    addVectorPuntInicioInt(2, vectorpuntero);
    //vectorpuntero->insert(begin(*vectorpuntero),2);

    printVectorPuntElement(vectorpuntero);


    cout << endl;
    cout << endl;

    cout << "VECTOR FASE 3 : REDIMENSIONAMIENTO DE VECTOR (MODIFICAR EL SIZE Y VALOR DE INICIALIZACION) " << endl;
    //COMPOSICION: NOMBREDEVECTOR.resize(Nuevo Size del vector,Valor a inicializar)

    //EJEMPLO:vectorvacio.resize(15)

    cout << "SIZE ACTUAL : 12 , SIZE NUEVO : 15 , POR DEFECTO SI NO INICIALIZO ES 0:" << endl;

    reDimenPuntVectorDefault(15, vectorpuntero);
    //vectorpuntero->resize(15);
    printVectorPuntElement(vectorpuntero);

    cout << endl;

    //NOTA NO PUEDO VOLVER A COLOCAR LOS VALORES YA INICIALIZADOS AL VOLVER A REDIMENSIONAR

    cout << "SIZE ACTUAL : 12 , SIZE NUEVO : 17 , INICIALIZO EN 4:" << endl;
    reDimenPuntVectorNum(17, vectorpuntero, 4);
    //vectorpuntero->resize(17,4);
    printVectorPuntElement(vectorpuntero);
    cout << endl;
    cout << endl;

    cout << "VECTOR FASE 4 ELIMINAR ELEMENTOS : " << endl;
    cout << "METODO 1 : ELIMINAR ULTIMO ELEMENTO DEL VECTORPUNTERO CON POP.BACK : " << endl;
    deleteVectPuntEnd(vectorpuntero);
    //vectorpuntero->pop_back();


    printVectorPuntElement(vectorpuntero);

    cout << "\n";

    cout << endl;
    cout << "METODO 2 :ELIMINAR UN ELEMENTO DETERMINADO (en este caso 2) DEL VECTORPUNTERO CON ERASE : " << endl;

    //EL ITERADOR BEGIN FUNCIONARA COMO INDICADOR A QUE ELEMENTO QUEREMOS ELIMINAR;

    //NOMBRE DE VECTORPUNTERO. ERASE (POSICION CON ITERADOR DE VECTOR BEGIN )

    //AQUI DIGO ELIMINA EL ELEMENTO QUE ESTA EN LA POSICIÓN SIGUIENTE AL INICIO (POR ESO +1)

    //vectorpuntero->erase(vectorpuntero->begin()+1);
    deleteVectPuntPosition(vectorpuntero, 1);
    printVectorPuntElement(vectorpuntero);

    cout << "\n";
    cout << "\n";
    cout << "VECTOR FASE 5 LIMPIAR ESPACIO OCUPADO POR EL VECTOR PUNTERO" << endl;

    cout << "\n";

    //Limpiar los elemento del VectorPuntero con clear()
    cout << "vectorvacio.clear()" << endl;
    clearVectorPuntElement(vectorpuntero);
    //vectorpuntero->clear();
    //Limpiar buffer del vectorPuntero con shrink_to_fit()
    cout << "vectorvacio.shrink_to_fit()" << endl;
    fitClearPuntVector(vectorvacio);
    //vectorpuntero->shrink_to_fit();

    vector<int> prueba1;
    vector<int> prueba2;
    vector<int> prueba3;
    vector<int> prueba4;
    crearVectorNormRandom(prueba1, 10, 10, 30);
    crearVectorNormRandom(prueba2,6,10,30);
    cout << "\n";
    cout << "Vector Prueba 1:" << endl;
    printVectorNormElement(prueba1);

    cout << "\n";
    cout << "Vector Prueba 2:" << endl;
    printVectorNormElement(prueba2);

    int maximo;
    int minimo;
    int mediana;

    hallaMaxVectorNorm(prueba1,maximo);
    cout << "\n";
    cout <<"Maximo de Prueba1"<< maximo;

    hallaMinVectorNorm(prueba1,minimo);
    cout <<"\n";
    cout <<"Minimo de Prueba1"<<minimo;

    hallaMedVectorNorm(prueba1,mediana);
    cout <<"\n";
    cout <<"Mediana de Prueba1:"<<mediana;

    compararIntersectionNormVectores(prueba1,prueba2,prueba3);
    compararUnionNormVectores(prueba1,prueba2,prueba4);
    cout<<"\n";
    cout<<"Prueba1:"<<endl;
    printVectorNormElement(prueba1);
    cout<<"\n";
    cout <<"Prueba2:"<<endl;
    printVectorNormElement(prueba2);
    cout<<"\n";
    cout <<"Interseccion de Vectores:"<<endl;
    printVectorNormElement(prueba3);
    cout<<"\n";
    cout <<"Union de Vectores:"<<endl;
    printVectorNormElement(prueba4);
    cout<<"\n";
    cout <<"Elimino elementos Vector en Rangos:"<<endl;
    DeleteElementosDeVectorRangosNorm(prueba4,10,19);
    printVectorNormElement(prueba4);
    bool dato = verificarTamañoVectorParNorm(prueba4);
    cout<<"\n";
    cout<<dato;
    return 0;
}

//By Sierpe, c:
//I would be grateful if you support me by
// leaving me a comment to elaborate
// some new function or an encouraging comment Thank you