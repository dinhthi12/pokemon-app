#include <cmath>
#include <iostream>
#include <string>
using namespace std;
// giải phương trình bậc 2
string solveQuadraticEquation(float a, float b, float c)
{
   if (a == 0)
   {
      if (b == 0)
      {
         return "infinite solution";
      }
      else
      {
         return "x = " + to_string(-c / b);
      }
   }

   float delta = b * b - 4 * a * c;
   if (delta > 0)
   {
      return "x1 = " + to_string((float)((-b + sqrt(delta)) / (2 * a))) + " x2 = " + to_string((float)((-b - sqrt(delta)) / (2 * a)));
   }
   else if (delta == 0)
   {
      return "x1 = x2 = " + to_string((-b / (2 * a)));
   }
   else
   {
      return "infinite solution";
   }
}
