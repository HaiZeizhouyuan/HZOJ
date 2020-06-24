#include<stdio.h>
#include<math.h>
#define PI acos(-1)
double len(double a, double b, double degree){
    return sqrt(a * a + b * b - 2 * a * b * cos(degree * PI / 180));

}
int main(){
    double a, b ,degree, p, d;
    scanf("%lf%lf%lf", &a, &b ,&degree);
    printf("%.6lf\n",len(a, b, degree));
    return 0;
}
