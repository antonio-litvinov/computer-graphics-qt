#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "types.h"

double DegToRad(double degrees);

double RadToDeg(double radians);

double ScalarProduct(T3DPoint A, T3DPoint B);

TVector PutPoint(T3DPoint Point);

T3DPoint Vector(T3DPoint Start, T3DPoint Final);

T3DPoint GetPoint(TVector Vector, bool Integer = false);

void Sort(vector<TVertex> &Triangle);

void Bresenham(vector<vector<int> > &Intersect, int StartX, int StartY, int FinalX, int FinalY, int Status, int ExitY);

#endif // FUNCTIONS_H
