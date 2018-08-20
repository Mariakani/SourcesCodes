#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float f(float x){
  return x*x*x - 2*x - 5;
}
float fprime(float x)
{
  return 3*x*x - 2;
}

float Root_By_NewtonMethod(float x, float precision)
{
  float x1 = x - (f(x)/fprime(x));
  float temp = x1;

  if (fabs(x1 - x) <= precision)
  {
    cout<<"The root of this number is:"<<x1<<endl;
    return x1;
  }
  else
  {
    //counter++;
    cout<<setprecision(5)<<fixed;
    cout<<"    "<<x<<"      "<<x1<<"        "<<fabs(x-x1)<<"    "<<precision<<endl;
    x = temp;

    return Root_By_NewtonMethod(x, precision);

  }

}

int main()
{

float a, accuracy;
  cout<<"Enter the initial guess of X"<<endl;
  cin>>a;
  cout<<"Enter the desire accuracy you need your answer to have"<<endl;
  cin>>accuracy;
  cout<<endl;
  cout<<"   "<<"X"<<"        "<<"X1"<<"        "<<"x-x1"<<"        "<<"precision"<<endl;
  Root_By_NewtonMethod(a, accuracy);
  return 0;
}
