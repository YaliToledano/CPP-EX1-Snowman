/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	cout << ariel::snowman(11114411) << endl; /* Should print:
_===_
(.,.)
( : )
( : )
	*/
	cout << ariel::snowman(33232124) << endl; /* Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
	cout << ariel::snowman(31243134) << endl;
	cout << ariel::snowman(44444444) << endl;
	cout << ariel::snowman(22234111) << endl;
	cout << ariel::snowman(14213332) << endl;
	try
	{
		cout << ariel::snowman(5) << endl; // Exception - not a valid code
	}
	catch (exception &ex)
	{
		cout << "   caught exception: " << ex.what() << endl; // should print "Invalid code '5'"
	}
}
