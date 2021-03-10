#include "snowman.hpp"

Snowman::Snowman(int h, int n,int l, int r,int x, int y,int t, int b){ 
	this->H = h;
	this->N = n;
  this->L = l;
	this->R = r;
  this->X = x;
	this->Y = y;
  this->T = t;
	this->B = b;
}
string Snowman::to_string() {
	return "snowman";
}