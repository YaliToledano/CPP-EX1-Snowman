#include "snowman.hpp"
#include <string>
#include <stdexcept>
using namespace std;

const int VALID_LENGTH = 8;
const int DEC_TEN = 10;

string hat(int number)
{
  if (number == 1)
  {
    return " _===_ ";
  }
  if (number == 2)
  {
    return "  ___  \n ..... ";
  }
  if (number == 3)
  {
    return "   _   \n  /_\\";
  }
  if (number == 4)
  {
    return "  ___  \n (_*_) ";
  }
  return "";
}
string nose(int number)
{
  if (number == 1)
  {
    return ",";
  }
  if (number == 2)
  {
    return ".";
  }
  if (number == 3)
  {
    return "_";
  }
  if (number == 4)
  {
    return " ";
  }
  return " ";
}
string left_eye(int number)
{
  if (number == 1)
  {
    return ".";
  }
  if (number == 2)
  {
    return "o";
  }
  if (number == 3)
  {
    return "O";
  }
  if (number == 4)
  {
    return "-";
  }
  return "";
}
string right_eye(int number)
{
  if (number == 1)
  {
    return ".";
  }
  if (number == 2)
  {
    return "o";
  }
  if (number == 3)
  {
    return "O";
  }
  if (number == 4)
  {
    return "-";
  }
  return "";
}
string left_arm(int number)
{
  if (number == 1)
  {
    return "<";
  }
  if (number == 2)
  {
    return "\\";
  }
  if (number == 3)
  {
    return "/";
  }
  if (number == 4)
  {
    return " ";
  }
  return "";
}
string right_arm(int number)
{
  if (number == 1)
  {
    return ">";
  }
  if (number == 2)
  {
    return "/";
  }
  if (number == 3)
  {
    return "\\";
  }
  if (number == 4)
  {
    return " ";
  }
  return "";
}
string torso(int number)
{
  if (number == 1)
  {
    return "( : )";
  }
  if (number == 2)
  {
    return "(] [)";
  }
  if (number == 3)
  {
    return "(> <)";
  }
  if (number == 4)
  {
    return "(   )";
  }
  return "";
}
string base(int number)
{
  if (number == 1)
  {
    return " ( : ) ";
  }
  if (number == 2)
  {
    return " (\" \") ";
  }
  if (number == 3)
  {
    return " (___) ";
  }
  if (number == 4)
  {
    return " (   ) ";
  }
  return "";
}
int reverseInt(int n)
{
  int reversedNumber = 0;
  int remainder = 0;
  while (n != 0)
  {
    remainder = n % DEC_TEN;
    reversedNumber = reversedNumber * DEC_TEN + remainder;
    n /= DEC_TEN;
  }
  return reversedNumber;
}
int checkSyntax(int n)
{
  int remainder = 0;
  while (n != 0)
  {
    remainder = n % DEC_TEN;
    if (remainder < 1 || remainder > 4)
    {
      return 0;
    }
    n /= DEC_TEN;
  }
  return 1;
}
int checkLength(int n)
{
  int counter = 0;
  while (n != 0)
  {
    counter++;
    n /= DEC_TEN;
  }
  return counter;
}

string ariel::snowman(int snow_code)
{
  int length = 0;
  bool ckl = false;
  bool ckr = false;
  string h;
  string n;
  string l; 
  string r;
  string x;
  string y;
  string t;
  string b;

  if (snow_code < 0)
  {
    __throw_invalid_argument("Syntax Error - int cannot be negative");
  }
  if (checkLength(snow_code) != VALID_LENGTH)
  {
    __throw_invalid_argument("Syntax Error - Must be Exacly 8-digits long");
  }
  if (checkSyntax(snow_code) == 0)
  {
    __throw_invalid_argument("Syntax Error - Non valid digit/s, all digits must be between 1-4");
  }
  int snow_code_reversed = reverseInt(snow_code);
  h = hat(snow_code_reversed % DEC_TEN);
  snow_code_reversed /= DEC_TEN;
  n = nose(snow_code_reversed % DEC_TEN);
  snow_code_reversed /= DEC_TEN;
  l = left_eye(snow_code_reversed % DEC_TEN);
  snow_code_reversed /= DEC_TEN;
  r = right_eye(snow_code_reversed % DEC_TEN);
  snow_code_reversed /= DEC_TEN;
  if (snow_code_reversed % DEC_TEN == 2)
  {
    ckl = true;
    x = " ";
  }
  else
  {
    x = left_arm(snow_code_reversed % DEC_TEN);
  }
  snow_code_reversed /= DEC_TEN;
  if (snow_code_reversed % DEC_TEN == 2)
  {
    ckr = true;
    y = " ";
  }
  else
  {
    y = right_arm(snow_code_reversed % DEC_TEN);
  }
  snow_code_reversed /= DEC_TEN;
  t = torso(snow_code_reversed % DEC_TEN);
  snow_code_reversed /= DEC_TEN;
  b = base(snow_code_reversed % DEC_TEN);

  string face;

  if (ckl)
  {
    face += "\\";
  }
  else
  {
    face += " ";
  }
  face += "(" + l + n + r + ")";
  if (ckr)
  {
    face += "/";
  }
  else
  {
    face += " ";
  }

  return "\n" + h + "\n" + face + "\n" + x + t + y + "\n" + b;
  //return "\n" + h + face + x + t + y + b;
}
