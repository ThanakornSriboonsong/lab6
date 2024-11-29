#include <iostream>
#include <cmath>

using namespace std;
double deg2rad(double degree){
       double rad0 = degree * M_PI /180 ;
       return rad0 ;

}
double rad2deg(double rad){
        double deg0 = rad * 180/M_PI ;
        return deg0 ;

}
double findXComponent(double length1 , double lenght2 , double rad1 , double rad2){
    double x = (length1 * cos(rad1)) + (lenght2 * cos(rad2)) ;
    
    return x ;
}
double findYComponent(double length1 , double lenght2 , double rad1 , double rad2){
    double y = (length1 * sin(rad1)) + (lenght2 * sin(rad2)) ;
     return y ;
}
double pythagoras( double x ,double y){
    double pyta = sqrt(pow(x,2)+pow(y,2)) ;
    return pyta ;

}
void showResult(double resultlenght , double resultdirect){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
    cout << "Length of the resultant vector = " << resultlenght << endl ;
    cout << "Direction of the resultant vector (deg) = " <<resultdirect << endl ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n" ;
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
