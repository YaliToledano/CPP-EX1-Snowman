#pragma once

#include <iostream>
using namespace std;

class SnowmanMaker
{
private: 
// At the start I thought to solve this with a Snowman object but probably a simple static function 
//will do but im leaving those variables here just in case. its took a lot of time to write them!

  int H; //stands for head
  int N; //stands for nose/mouse
  int L; //stands for left eye
  int R; //stands for right eye
  int X; //stands left arm
  int Y; //stands rigt arm
  int T; //stands for torso
  int B; //stands for base

public:
  
  //not needed
  /*int getH() { return H; }
  int getN() { return N; }
  int getL() { return L; }
  int getR() { return R; }
  int getX() { return X; }
  int getY() { return Y; }
  int getT() { return T; }
  int getB() { return B; }

  void setH(int);
  void setN(int);
  void setL(int);
  void setR(int);
  void setX(int);
  void setY(int);
  void setT(int);
  void setB(int);
  */
 static string Snowman(int);

  // // Constructors:
  /*Snowman()
  {>
    H = N = L = R = X = Y = T = B = 1;
  }
  Snowman(int);*/
  
};
