/**
 *  A class that stores a variable of type double and generates a hash code for it.
 *
 **/

#include <math.h>
#include "Double.h"

/**
  *  Construct a new Double with the given variable.
  *  @param d the double variable by which the Double stores.
  */
Double::Double(const double &d)
{
	this->d = d;
}

/**
 *  Get the value of the double variable.
 *  @return the stored value.
 */
double Double::getvalue() const
{
	return d;
}

/**
 *  Returns true if "this" Double and "db" have identical values.
 *  @param db is the second Double.
 *  @return true if the double values are equal, false otherwise.
 */
bool Double::equals(const Double &db)
{
	if (d == db.d)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/**
 *  Returns a hash code for this Double.
 *  @return a number between Integer.MIN_VALUE and Integer.MAX_VALUE.
 */
int Double::hashCode()
{
	int value, temp;
	temp = (int)(d * 1);
	value = abs(65597 - temp) % 101; //hashcode
	return value;
}
