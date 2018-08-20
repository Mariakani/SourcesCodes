#include <iostream>
#include <stdlib.h>
#include<limits>
#include <math.h>
#include<float.h>
using namespace std;

float f(const float x)
{
	return 3.2*x*x*x - 2.1*x - 23.0;
}

float bisectionHelper(const float left, const float right,
                      const float precision, const float minIntervalSize);
float bisection(const float left, const float right,const float precision, const float minIntervalSize);

float bisectionHelper(const float left, const float right,const float precision, const float minIntervalSize)

{
	if (precision  <  0)
	{
		return std::numeric_limits<float>::quiet_NaN();
	}

	if (minIntervalSize < 0)
	{
		return std::numeric_limits<float>::quiet_NaN();
	}
	float mid_point = (left+right)/2;

	if (f(mid_point) == 0 || fabs(f(mid_point)) <= precision)
	{
			return mid_point;
	}

	if (f(right) * f(mid_point) < 0 && f(right) > 0)
	{
		float templeft = left;
		templeft = mid_point;

	  return bisectionHelper( left,right,precision, minIntervalSize);
	}
	else
	{
	 float tempright = right;
	  tempright = mid_point;
	 return  bisectionHelper(left,right,precision, minIntervalSize);
	}

}

float bisection(const float left, const float right, const float precision, const float minIntervalSize)
{
	return bisectionHelper(left,  right, precision, minIntervalSize);
}



int main() {

	cout << "Root is=" << bisection( 2,  3 , 0.001, 0.11)<<endl;

	return 0;
}
