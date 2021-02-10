/*Name   : Kale, Bharat Kumar
 *Z-ID   : Z1787884
 *Course : CSCI 689/Section 1
 *TA     : Anthony Schroeder
 *Purpose: This file contains a funtion that takes an unsigned int as input and returns it's divisors in a formatted string
 */

#include <string>
#include <cmath>
#include "perfectNums.h"

using std::string;
using std::to_string;
using std::sqrt;

/*Function Name : divisors
 *ArgumentsList :
                  Unsigned int num
 *Return Type   :
                  string
		  if num is 6 returns a string with divisors of 6 in the format "1+2+3"
 *Description   :
                  To minimize iterations, loop starts from 2 to squareroot(num) and gets all the divisors in pairs and appends them toa string.
		  If i is a divisor of n, append i to the string and n/i to another string. After the loop apend the second string to the first one to get the complete list of divisors.
		  Two strings are used here to get all the divisors in the ascending order.
*/
string divisors(unsigned int num)
{
  unsigned int checkLimit=0;
  string formattedDivisorsList="1",divisorsList="";
  bool firstIteration=true;
  
  checkLimit=(int) sqrt(num)+1;
  for(unsigned int i=2;i<checkLimit;i++)
    {
      if(num%i==0)
	{
	  formattedDivisorsList+=" + "+to_string(i);
	  if(firstIteration)
	  {
	    divisorsList=to_string(num/i);
	    firstIteration=false;
	  }
	  else
	  {
	    divisorsList=to_string(num/i)+" + "+divisorsList;
	  }
	}
    }
  formattedDivisorsList+=" + "+divisorsList;

  return formattedDivisorsList;
}
