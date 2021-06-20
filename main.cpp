#include <iostream>
using namespace std;
#ifndef circuitoseletricos_H
#define circuitoseletricos_H

struct tCircuito
{
  int valorR1, valorR2, valorfonteV1;
}

void calcserie(float R1, float R2)
{
float Resistserie = 0.0;
Resistserie = R1+R2;

cout << "O valor da Resistência em serie =" << Resistserie << endl;
}

void calparalelo (float R1, float R2)
{
  float Resistparalelo = 0.0;
  Resistparalelo = (R1*R2/R1+R2);
  
  cout << "O valor da Resistência em serie =" << Resistparalelo << endl;
}

int main() {

}