#include <iostream>
#include <cmath>

using namespace std;



int main(){
    int a[3];
    int b[3];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    
    for(int i = 0; i < 3; i++){
        cout << "a" << i+1 << " jest równe " << a[i] << endl;
    }

    float head = a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
    float under = sqrt(pow(a[0], 2) + pow(a[1], 2) + pow(a[2], 2))*sqrt(pow(b[0], 2) + pow(b[1], 2) + pow(b[2], 2));
    float alfa = cos(head/under);
    alfa = pow(alfa, -1);
    cout << alfa;
}