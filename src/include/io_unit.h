/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y análisis de algoritmos
 *
 * author: Juan García Santos
 * date: 05/03/2022
 * description: header file of a Parent class that represents
 * input output unit
 *
 */
#ifndef IO_UNIT_H
#define IO_UNIT_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

class Tape {
  protected:
    vector<int> tape;
    string fileName;
     
  public:
    Tape();
    Tape(string);
    ~Tape();
    
    int getTapeSize();
    string getFileName();
    
    virtual int load() = 0;
};
#endif