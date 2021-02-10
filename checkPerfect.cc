/*Name   : Kale, Bharat Kumar
 *Z-ID   : Z1787884
 *Course : CSCI 689/Section 1
 *TA     : Anthony Schroeder
 *Purpose: This file contains a funtion that takes an unsigned integer as input and returns whether the number is perfect
 */

#include "perfectNums.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::sqrt;

/*
 *Function Name:   isPerfect
 *Parameters List:
                   unsigned int num  
 *Return Type:
                   bool
                   True - if num is perfect
		   False - if num is not perfect

 *Description:     1 is always a divisor of any num. 
                   To minimize iterations, loop from 2 to squreroot(num) and get all the divisors in pairs instead of individual numbers.
                   i.e., if i is a divisor of n then n/i is also another divisor.
		   Add all the divisors other than the number itself and check if the sum is equal to 'num'.
 */
bool isPerfect(unsigned int num)
{
  unsigned int sumOfDivisors=1,checkLimit=0;

  if(num==1)
    return false;

  checkLimit=(int) sqrt(num)+1;
  for(unsigned int i=2;i<checkLimit;i++)
  {
    if(num%i==0)
    {
      sumOfDivisors+=i+(num/i);
    }
  }

  if(sumOfDivisors==num)
    return true;
  else
    return false;
}
