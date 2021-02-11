/*Name       : Kale, Bharat Kumar
 *Z-ID       : Z1787884
 *Course     : CSCI 69/Section 1
 *TA         : Anthony Schroeder
 *Assignment : 2
 *Due Date   : 02-02-2016
 *Purpose    : This document is the starting point for the program that checks for perfect numbers in the range 1 to 9999 and if found, displays the number and its factors in a format. 
 */

#include <iostream>
#include "perfectNums.h"

using std::cout;
using std::endl;

int main()
{
  const int minValue=1,maxValue=9999;

  cout<<"List Of Perfect numbers in the range 1 to 9998 :"<<endl;
  for(unsigned int i=minValue;i<=maxValue;i++)
  {
    if(isPerfect(i))
    {
      cout<<"  "<< i <<" = "<< divisors(i) <<endl;
    }
  }

  return 0;
}
