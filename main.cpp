#include<iostream>
#include<cmath>
#include <string>
using namespace std;

/* ***************|***************
   ***************|***************
   ***************|***************
   *******2*******|*******1*******
   ***************+***************
   ***************|***************
------------(-)-------+------------->
   ***************|***************
   ***************|***************
   *******3*******-*******4*******
   ***************|***************
   ***************|***************
   ***************|***************
*/

int main (){

    int xPoint, yPoint;

    cout<<"Enter the value of the X coordinate(x-axis) ";
    cin>>xPoint;

    cout<<"Enter the value of the Y coordinate(y-axis) ";
    cin>>yPoint;

    if (xPoint>0 && yPoint>0)
    {
        cout<<"This point is in the first quarter. ";

    }else if(xPoint>0 && yPoint<0)
    {
        cout<<"This point is in the first quarter. ";

    }else if (xPoint<0 && yPoint>0)
    {
        cout<<"This point is in the second quarter. ";

    }else if (xPoint<0 && yPoint<0)
    {
        cout<<"This point is in the third quarter. ";

    }else if (xPoint==0 && yPoint==0)
    {
        cout<<"This point it is located in the centre. ";

    }else{
        cout<<"There must be a problem with the coordinates!";
    }
     
    return 0;
}
