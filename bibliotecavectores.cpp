//
// Created by Sierpe on 24/05/2022.
//


#include "bibliotecavectores.h"
#include <iostream>
#include <vector>
#include "math.h"
#include "string"
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;
//CREACION

//CREA UN VECTOR NORMAL DE NUMEROS ORDENADOS DE UN LIMITE INFERIOR AL MAXIMO
void crearVectorNormOrdNum(vector<int> &vector1, int liminf, int limsup) {
    for(auto i = liminf;i<=limsup;i++){
        vector1.push_back(i);
    }
}

//CREA UN VECTOR PUNTERO DE NUMERO ORDENADOS DE LIMITE INFERIOR AL MAXIMO
void crearVectorPuntOrdNum(vector<int> *&vector1, int liminf, int limsup) {
    for(auto i = liminf;i<=limsup;i++){
        vector1->push_back(i);
    }
}
//CREA UN VECTOR NORMAL DE NUMEROS RANDOM CON LIMITE SUPERIOR E INFERIOR
void crearVectorNormRandom(vector<int> &vector1,int cantidad, int limitinf, int limitsup) {
    srand(time(0));
    for (auto i = 0;i < cantidad;i++){
        //Numero Random con Time NULL =(limitinf + rand()% (limitesup +1-limitinf))
        //Numero Random con Time 0 = limitinf + (rand()% limitsup)
        int numran;
        numran = limitinf +(rand()%limitsup);
        vector1.push_back(numran);
    }
}

//CREA UN VECTOR PUNTERO DE NUMEROS RANDOM CON LIMITE SUPERIOR E INFERIOR
void crearVectorPuntRandom(vector<int> *&vector1,int cantidad, int limitinf, int limitsup) {
    srand(time(0));
    for (auto i = 0;i < cantidad;i++){
        //Numero Random =(limitinf + rand()% (limitesup +1-limitinf))
        //Numero Random con Time 0 = limitinf + (rand()% limitsup)
        int numran;
        numran = limitinf +(rand()%limitsup);
        vector1->push_back(numran);
    }
}

//CREA UN VECTOR NORMAL DE CEROS
void creaVectorNormZeros(vector<int> &vector1,int tamaño) {
    for (auto i = 0; i < tamaño;i++){
        vector1.push_back(0);
    }
}

//CREA UN VECTOR PUNTERO DE CEROS
void creaVectorPuntZeros(vector<int> *&vector1,int tamaño) {
    for (auto i = 0; i < tamaño;i++){
        vector1->push_back(0);
    }
}

//CREA UN VECTOR NORMAL DE UNOS
void creaVectorNormOnes(vector<int> &vector1,int tamaño) {
    for (auto i = 0; i < tamaño;i++){
        vector1.push_back(1);
    }
}

//CREA UN VECTOR PUNTERO DE UNOS
void creaVectorPuntOnes(vector<int> *&vector1,int tamaño) {
    for (auto i = 0; i < tamaño;i++){
        vector1->push_back(1);
    }
}

//IMPRESION

//IMPRIME EL VECTOR NORMAL POR ELEMENT
void printVectorNormElement(vector<int> vector1) {
    for (const auto element:vector1){
        cout<<element<<setw(4);
    }
}

//IMPRIME EL VECTOR NORMAL POR FORINCH
void printVectorNormForinch(vector<int> vector1) {
    for (const auto element:vector1){
        cout<<element<<setw(4);
    }
}

//IMPRIME EL VECTOR NORMAL POR BEGIN Y END
void printVectorNormBegEnd(vector<int> vector1) {
    for (auto i = vector1.begin();i!= vector1.end();i++){
        cout <<*i<<setw(4);
    }
}

//IMPRIME EL VECTOR NORMAL POR AT
void printVectorNormAt(vector<int> vector1) {
    for (auto i = 0;i<vector1.size();i++){
        cout<<vector1.at(i)<<setw(4);
    }
}

//IMPRIME EL VECTOR NORMAL POR SIZE
void printVectorNormSize(vector<int>vector1){
    for (auto i = 0;i<vector1.size();i++){
        cout <<vector1[i]<<setw(4);
    }
}

//IMPRIME EL VECTOR PUNTERO POR ELEMENT
void printVectorPuntElement(vector<int> *vector1) {
    for (const auto element:*vector1){
        cout<<element<<setw(4);
    }
}

//IMPRIME EL VECTOR PUNTERO POR FORINCH
void printVectorPuntForinch(vector<int> *vector1) {
    for (const auto element:*vector1){
        cout<<element<<setw(4);
    }
}

//IMPRIME EL VECTOR PUNTERO POR BEGIN Y END
void printVectorPuntBegEnd(vector<int> *vector1) {
    for (auto i = vector1->begin();i!= vector1->end();i++){
        cout <<*i<<setw(4);
    }
}

//IMPRIME EL VECTOR PUNTERO POR AT
void printVectorPuntAt(vector<int> *vector1) {
    for (auto i = 0;i<vector1->size();i++){
        cout <<vector1->at(i)<<setw(4);
    }
}

//IMPRIME EL VECTOR PUNTERO POR MEDIO DE SIZE
void printVectorPuntSize(vector<int>*vector1){
    for (auto i = 0;i<vector1->size();i++){
        cout <<(*vector1)[i]<<setw(4);
    }
}
//INSERTAR

//AGREGA UN VALOR AL INICIO DEL VECTOR NORMAL
void addVectorNormInicioInt(int valor, vector<int> &vector1) {
    vector1.insert(begin(vector1),valor);
}

//AGREGA UN VALOR AL FINAL DE VETOR NORMAL
void addVectorNormFinInt(int valor, vector<int> &vector1) {
    vector1.insert(end(vector1),valor);
}

//AGREGA UNA VALOR A UNA POSICION DEL VECTOR NORMAL
void addVectorNormPositionInt(int posicion, int valor, vector<int> &vector1) {
    //CONSIDERANDO QUE PONDRA POSICIONES DESDE 0 hasta N
    vector1.insert(begin(vector1)+valor,valor);
}

//AGREGA UN VALOR TANTAS VECES SEA INDICADO, AL FINAL DEL VECTOR
void addVectorNormEndCantInt(int valor, int veces, vector<int> &vector1) {
    for (auto i = 0 ;i<veces;i++){
        vector1.insert(end(vector1),valor);
    }
}

//AGREGA UN VALOR AL INICIO DEL VECTOR PUNTERO
void addVectorPuntInicioInt(int valor, vector<int> *&vector1) {
    vector1->insert(begin(*vector1),valor);
}

//AGREGA UN VALOR AL FINAL DEL VECTOR PUNTERO
void addVectorPuntFinInt(int valor, vector<int> *&vector1) {
    vector1->insert(end(*vector1),valor);
}

//AGREGA UN VALOR A LA POSICION INDICADA DEL VECTOR PUNTERO
void addVectorPuntPositionInt(int posicion, int valor, vector<int> *&vector1) {
    //CONSIDERANDO QUE PONDRA POSICIONES DESDE 0 hasta N
    vector1->insert(begin(*vector1)+posicion,valor);
}

//AGREGA UN VALOR TANTAS VECES , AL FINAL DEL VECTOR PUNTERO
void addVectorPuntEndCantInt(int valor, int veces, vector<int> *&vector1) {
    for (auto i = 0 ;i<veces;i++){
        vector1->insert(end(*vector1),valor);
    }
}

//REDIMENSION

//REDIMENSIONA EL TAMAÑO DEL VECTOR NORMAL Y TOMA COMO NUMERO DE REEMPLAZA AL CERO
void reDimenNormVectorDefault(int tamaño, vector<int> &vector1) {
        vector1.resize(tamaño);
}
//REDIMENSIONA EL TAMAÑO DEL VECTOR NORMA Y TOMA UN NUMERO DE REEMPLAZO A LOS VACIOS
void reDimenNormVectorNum(int tamaño, vector<int> &vector1,int inicializador) {
        vector1.resize(tamaño,inicializador);
}
//REDIMENSIONA EL TAMAÑO DEL VECTOR PUNTERO Y TOMA COMO NUMERO DE REEMPLAZO AL CERO
void reDimenPuntVectorDefault(int tamaño, vector<int> *&vector1) {
    vector1->resize(tamaño);
}
//REDIMENCIONA EL TAMAÑO DEL VECTOR PUNTERO Y CON UN NUMERO DE REEMPLAZO A LOS VACIOS
void reDimenPuntVectorNum(int tamaño, vector<int> *&vector1,int inicializador) {
    vector1->resize(tamaño,inicializador);
}
//ELIMINAR EL ULTIMO ELEMENTO DE UN VECTOR NORMAL
void deleteVectNormEnd(vector<int> &vector1) {
    vector1.pop_back();
}

//ELIMINAR ELEMENTO DE UN VECTOR NORMAL EN CIERTA POSICIÓN
void deleteVectNormPosition(vector<int> &vector1, int posicion) {
    //CONSIDERANDO QUE PONDRA POSICIONES DESDE 0 hasta N
    vector1.erase(vector1.begin()+posicion);
}
//ELIMINAR ELEMENTO DE UN VECTOR PUNTERO
void deleteVectPuntEnd(vector<int> *&vector1) {
    vector1->pop_back();
}

//ELIMINAR ELEMENTO DE UN VECTOR PUNTERO EN CIERTA POSICIÓN
void deleteVectPuntPosition(vector<int> *&vector1, int posicion) {
    //CONSIDERANDO QUE PONDRA POSICIONES DESDE 0 hasta N
    vector1->erase(vector1->begin()+posicion);
}

//LIMPIAR VECTOR COMPLETO

//LIMPIA LOS ELEMENTOS DE UN VECTOR NORMAL
void clearVectorNormElement(vector<int> &vector1) {
    vector1.clear();
}

//LIMPIA LOS ELEMENTOS DE UN VECTOR PUNTERO
void clearVectorPuntElement(vector<int> *&vector1) {
    vector1->clear();
}

//LIMPIAR BUFFER DE VECTOR NORMAL
void fitClearNormVector(vector<int> &vector1) {
    vector1.shrink_to_fit();
}

//LIMPIAR BUFFER DE VECTOR PUNTERO
void fitClearPuntVector(vector<int> &vector1) {
    vector1.shrink_to_fit();
}

//COMPARACIONES
//VECTORES PUNTEROS

void compararUnionPuntVectores(vector<int> *vector1,vector<int> *vector2,vector<int> *&vector3){
    for (auto i = 0;i<vector1->size();i++) {
        int a= (*vector1)[i];
        bool c = ExisteElementVectorNorm(*vector3, a);
        if (c == false){
            vector3->push_back(a);
        }
    }
    for (auto i = 0;i<vector2->size();i++){
        int b = (*vector2)[i];
        bool c = ExisteElementVectorNorm(*vector3,b);
        if (c == false){
            vector3->push_back(b);
        }
    }
}

void compararIntersectionPuntVectores(vector<int> *vector1,vector<int> *vector2,vector<int> *&vector3){

    for (auto i = 0;i<vector1->size();i++){
        int a;
        a = (*vector1)[i];
        bool b;
        b = ExisteElementVectorNorm(*vector2,a);
        bool c;
        c = ExisteElementVectorNorm(*vector3,a);
        if (b== true && c==  false){
            vector3->push_back(a);
        }
    }
}



//VECTORES NORMALES
//COMPARA la UNION ENTRE 2 VECTORES NORMALES  Y LO DEVUELVE EN UN 3ERO
void compararUnionNormVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3){
    for (auto i = 0;i<vector1.size();i++) {
        int a= vector1[i];
        bool c = ExisteElementVectorNorm(vector3, a);
        if (c == false){
            vector3.push_back(a);
        }
    }
    for (auto i = 0;i<vector2.size();i++){
        int b = vector2[i];
        bool c = ExisteElementVectorNorm(vector3,b);
        if (c == false){
            vector3.push_back(b);
        }
    }
}

//COMPARA SI EXISTE UN ELEMENTO DENTRO DE UN VECTOR(FUNDAMENTAL PARA OTRAS FUNCIONES)
bool ExisteElementVectorNorm(vector<int> vectorcomparar, int elemento){
    bool x = false;
    for (auto i = 0; i< vectorcomparar.size();i++){
        if (elemento == vectorcomparar[i]){
            x = true;
            break;
        }
    }
    return x;
}

//COMPARA LA INTERSECCION ENTRE 2 VECTORES Y LO DEVUELVE EN UN TERCERO
void compararIntersectionNormVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3){

    for (auto i = 0;i<vector1.size();i++){
        int a;
        a = vector1[i];
        bool b;
        b = ExisteElementVectorNorm(vector2,a);
        bool c;
        c = ExisteElementVectorNorm(vector3,a);
        if (b== true && c== false){
            vector3.push_back(a);
        }
    }
}

// MAXIMO , MINIMO Y MEDIANA DE UN VECTOR  NORMAL

void hallaMaxVectorNorm(vector<int> vector1, int &maximo) {
    for (auto i = 0; i < vector1.size(); i++) {
        if (i == 0){
            maximo = vector1[i];
        }
        else if (maximo< vector1[i])
            maximo = vector1[i];
    }
}

void hallaMinVectorNorm(vector<int> vector1, int &minimo) {
    for (auto i = 0;i<vector1.size();i++){
        if (i==0){
            minimo = vector1[i];
        }
        else if (minimo > vector1[i]){
            minimo = vector1[i];
        }
    }
}

void hallaMedVectorNorm(vector<int> vector1, int &mediana) {
    int suma = 0;
    for (auto i = vector1.begin(); i != vector1.end(); i++) {
        suma += (*i);
    }
    mediana = suma/vector1.size();
}

// MAXIMO , MINIMO Y MEDIANA DE UN VECTOR  PUNTERO

void hallaMaxVectorPunt(vector<int> *vector1, int &maximo) {
    for (auto i = 0; i < vector1->size(); i++) {
        if (i == 0){
            maximo = (*vector1)[i];
        }
        else if (maximo < (*vector1)[i])
            maximo = (*vector1)[i];
    }
}

void hallaMinVectorPunt(vector<int> *vector1, int &minimo) {
    for (auto i = 0; i < vector1->size(); i++) {
        if (i == 0){
            minimo = (*vector1)[i];
        }
        else if (minimo > (*vector1)[i])
            minimo = (*vector1)[i];
    }
}

void hallaMedVectorPunt(vector<int> *vector1, int &mediana) {
    int suma = 0;
    for (auto i = vector1->begin(); i != vector1->end();i++){
        suma += *i;
    }
    mediana = suma/vector1->size();
}
bool verificarrango(int valor,int limitinf,int limitsup){
    if (limitinf<=valor and valor<=limitsup){
        return true;
    }
    else
        return false;
}

bool verificaPar(int valor){
    if (valor%2 == 0){
        return true;
    }
    else
        return false;
}

bool verificarTamañoVectorParNorm(vector<int> verificar){
    if (verificar.size() %2 == 0){
        //cout<<"\n";
        //cout<<"Es par:";
        return true;
    }
    else
        //cout<<"\n";
        //cout<<"No es par:";
        return false;
}

bool verificarTamañoVectorParPunt(vector<int> *verificar){
    if (verificar->size() %2 == 0){
        cout<<"Es par";
        return true;
    }
    else
        return false;
}

//Elimina eloementos de un vector que se encuentre en un rango
void DeleteElementosDeVectorRangosPunt(vector<int>*&analizar,int limitinf,int limitsup){
    auto last = remove_if(analizar->begin(),
                          analizar->end(),
                          [limitinf,limitsup](int dato)
                          {
        if (dato>=limitinf and dato<=limitsup){
            return true;
        }
        else
            return false;
                          });

    analizar->erase(last,analizar->end());
}

void DeleteElementosDeVectorRangosNorm(vector<int>&analizar,int limitinf,int limitsup){
    auto last = remove_if(analizar.begin(),
                          analizar.end(),
                          [limitinf,limitsup](int dato)
                          {
                              if (dato>=limitinf and dato<=limitsup){
                                  return true;
                              }
                              else
                                  return false;
                          });
    analizar.erase(last,analizar.end());
}


//Rellena 2 vectores de elementos impares y pares provenientes de un 3er vector
void rellenarVectorParesEImpares(vector<int>*&muestra,vector<int> *&Par,vector<int> *&Impar){
    for (auto i = 0;i<muestra->size();i++){
        int x = muestra->at(i);
        bool x1 ;
        x1 = verificaPar(x);
        if (x1 == true){
            Par->push_back(x);
        }
        else if(x1 == false){
            Impar->push_back(x);
        }
    }
}

//Rellenar 2 nuevos vectores entre 2 Rangos , un primer rango para el primer vector y otro para el segundo
void RellenarNewVectorsEnRangos(vector<int>*analizar,vector<int> *&recibir,vector<int> *&sobrante ,int limitinf,int limitsup,int limitinf2,int limitsup2) {
    for (auto i = 0; i < analizar->size(); i++) {
        bool c, d;
        int muestra = analizar->at(i);
        c = verificarrango(muestra, limitinf, limitsup);
        d = verificarrango(muestra, limitinf2, limitsup2);
        if (c == true ) {
            recibir->push_back(analizar->at(i));
        }
        if (d == true) {
            sobrante->push_back(analizar->at(i));
        }
    }
}

