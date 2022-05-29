//
// Created by Sierpe on 24/05/2022.
//

#ifndef BIBLIOTECA_VECTORES_BIBLIOTECAVECTORES_H
#define BIBLIOTECA_VECTORES_BIBLIOTECAVECTORES_H

#include <iostream>
#include <vector>
#include "math.h"
#include "string"
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

//CREACION
//Modo Crear Vector de Numeros Ordenados Limites
void crearVectorNormOrdNum(vector<int> &vector1,int liminf , int limsup);
void crearVectorPuntOrdNum(vector<int> *&vector1,int liminf , int limsup);
//Modo Crear Vector Aleatorio
void crearVectorNormRandom(vector<int> &vector1,int cantidad,int liminf,int limsup);
void crearVectorPuntRandom(vector<int> *&vector1,int cantidad,int liminf,int limsup);
//Modo Crear Vector de Zeros
void creaVectorNormZeros(vector<int> &vector1,int tamaño);
void creaVectorPuntZeros(vector<int> *&vector1,int tamaño);
//Modo Crear Vector de 1
void creaVectorNormOnes(vector<int> &vector1,int tamaño);
void creaVectorPuntOnes(vector<int> *&vector1,int tamaño);

//IMPRESION
//Modos de Mostrar o Imprimir el Vector Normal
void printVectorNormElement(vector<int> vector1);
void printVectorNormForinch(vector<int>vector1);
void printVectorNormBegEnd(vector<int>vector1);
void printVectorNormAt(vector<int>vector1);
void printVectorNormSize(vector<int>vector1);
//Modos de Mostrar o Imprimir el VectorPuntero
void printVectorPuntElement(vector<int> *vector1);
void printVectorPuntForinch(vector<int>*vector1);
void printVectorPuntBegEnd(vector<int>*vector1);
void printVectorPuntAt(vector<int>*vector1);
void printVectorPuntSize(vector<int>*vector1);

//INSERTAR
//Modos de Añadir Elementos a un VectorNormal
void addVectorNormInicioInt(int valor,vector<int> &vector1);
void addVectorNormFinInt(int valor,vector<int> &vector1);
void addVectorNormPositionInt(int posicion,int valor,vector<int> &vector1);
void addVectorNormEndCantInt(int valor, int veces, vector<int> &vector1);
//Modos de Añadir Elementos a un VectorPuntero
void addVectorPuntInicioInt(int valor,vector<int> *&vector1);
void addVectorPuntFinInt(int valor,vector<int> *&vector1);
void addVectorPuntPositionInt(int posicion,int valor,vector<int> *&vector1);
void addVectorPuntEndCantInt(int valor, int veces, vector<int> *&vector1);

//REDIMENSION
//Modos de Redimension de Vector Normal
void reDimenNormVectorDefault(int tamaño,vector<int> &vector1);
void reDimenNormVectorNum(int tamaño,vector<int> &vector1,int inicializador);
//Modos de Redimension de Vector Puntero
void reDimenPuntVectorDefault(int tamaño,vector<int> *&vector1);
void reDimenPuntVectorNum(int tamaño,vector<int> *&vector1,int inicializador);

//ELIMINAR ELEMENTO DEL VECTOR
//Modo de Eliminar elemento de Vector Normal
void deleteVectNormEnd(vector<int>&vector1);
void deleteVectNormPosition(vector<int>&vector1,int posicion);
//Modo de Eliminar elemento de Vector Puntero
void deleteVectPuntEnd(vector<int>*&vector1);
void deleteVectPuntPosition(vector<int>*&vector1,int posicion);

//LIMPIAR VECTOR COMPLETO
//MOdo de Limpiar elementos de vector normal
void clearVectorNormElement(vector<int>&vector1);
//Modo de Limpiar elementos de vector puntero
void clearVectorPuntElement(vector<int>*&vector1);

//LIMPIAR BUFFER DE VECTOR

//Modo de Limpiar Buffer vector normal
void fitClearNormVector(vector<int>&vector1);
//Modo de Limpiar Buffer vector puntero
void fitClearPuntVector(vector<int>&vector1);

//INTERSECCION DE VECTORES

void compararIntersectionNormVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3);

void compararIntersectionPuntVectores(vector<int> *vector1,vector<int> *vector2,vector<int> *&vector3);

//UNION DE VECTORES
void compararUnionNormVectores(vector<int> vector1,vector<int> vector2,vector<int> &vector3);
void compararUnionPuntVectores(vector<int> *vector1,vector<int> *vector2,vector<int> *&vector3);


//MAXIMO,MINIMO Y MEDIANA  DE UN VECTOR
//Vectores Normales
void hallaMaxVectorNorm(vector<int> vector1,int &maximo);
void hallaMinVectorNorm(vector<int> vector1,int &minimo);
void hallaMedVectorNorm(vector<int> vector1,int &mediana);
//Vectores Punteros
void hallaMaxVectorPunt(vector<int> *vector1,int &maximo);
void hallaMinVectorPunt(vector<int> *vector1,int &minimo);
void hallaMedVectorPunt(vector<int> *vector1,int &mediana);

//Existe Elemento en Vector Normal?

bool ExisteElementVectorNorm(vector<int> vectorcomparar, int elemento);

//Verificador de Par

bool verificaPar(int valor);

//Verificar si tamaño de vector es Par o No

bool verificarTamañoVectorParNorm(vector<int> verificar);
bool verificarTamañoVectorParPunt(vector<int> *verificar);

//Rellenar 2 vectores de elementos impares y pares de un tercer vector muestra.
void rellenarVectorParesEImpares(vector<int>*muestra,vector<int> *&Par,vector<int> *&Impar);

//Rellenar 2 vectores entre 2 rangos personalizados
void RellenarNewVectorsEnRangos(vector<int>*analizar,vector<int> *&recibir,vector<int> *&sobrante ,int limitinf,int limitsup,int limitinf2,int limitsup2);


//Eliminar elementos de un vector entre Rangos sin Error (
void DeleteElementosDeVectorRangosPunt(vector<int>*&analizar,int limitinf,int limitsup);
void DeleteElementosDeVectorRangosNorm(vector<int>&analizar,int limitinf,int limitsup);

#endif //BIBLIOTECA_VECTORES_BIBLIOTECAVECTORES_H