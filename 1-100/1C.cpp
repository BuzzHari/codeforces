#include <iostream>
#include <math.h>

using namespace std;

#define PI acos(-1.0) 
#define eps 1e-4
double deg(double a, double b, double c) {
    double temp = (a*a + b*b - c*c) / (2*a*b);
    double angle = acos(temp);
    return angle;
}

double gcd(double a, double b) {

    while(fabs(a) > eps && fabs(b) > eps) {
        if(a > b)
            a -= floor(a/b) * b;
        else
            b -= floor(b/a) * a;
    }

    return a + b;
}

int main() {
    double A_x, A_y;
    double B_x, B_y;
    double C_x, C_y;

    scanf("%lf %lf", &A_x, &A_y);
    scanf("%lf %lf", &B_x, &B_y);
    scanf("%lf %lf", &C_x, &C_y);

    double a, b, c, s;

    a = sqrt(pow(abs(B_x - C_x),2) + pow(abs(B_y - C_y),2));
    b = sqrt(pow(abs(A_x - C_x),2) + pow(abs(A_y - C_y),2));
    c = sqrt(pow(abs(A_x - B_x),2) + pow(abs(A_y - B_y),2));
    s = ((double)(a+b+c)) / 2;

    double S = sqrt(s*abs(s-a)*abs(s-b)*abs(s-c));
    double R = ((double)a*b*c) / (4.0 * S);
    double n1, n2, n3;
    
    n1 =  deg(a, b, c);
    n2 =  deg(a, c, b);
    n3 =  deg(b, c, a);
    
    double n;
    n = gcd(n1, gcd(n2,n3));
    n = PI / n ;


    double area = ((double)(n) * R * R * sin((2*PI)/n))/2;
    printf("%.6lf\n", area);
    return 0;
}
