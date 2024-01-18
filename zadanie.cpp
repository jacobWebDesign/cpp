#include <iostream>
#include <cmath>

using namespace std;

float stiffnes(float n,float D,float d, float G)
{
return (G*pow(d,4))/(8*pow(D,3)*n);

}
float stiffness2(int n)
{
 float D=80;
 float d=6;
 float G=0.85e11;
 return (G*pow(d,4))/(8*pow(D,3)*n);

}
int main()
{
    float D_pitch;
    float d_wire;
    float G=0.85e11;
    int n;
   cout<<"podaj zmienna D_pitch: ";
   cin>>D_pitch;
   cout<<"podaj zmienna d_wire: ";
   cin>>d_wire;
   cout<<"podaj zmienna n: ";
   cin>>n;

   float c=stiffnes(n,D_pitch,d_wire,G)/1000;
   cout<<c<<endl;

  float e=stiffnes(n,D_pitch,d_wire=10,G)/1000;
   cout<<e<<endl;
 cout<<stiffness2(n)/1000;

return 0;

}