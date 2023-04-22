#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const double PI = acos(-1.0);

int main()
{
    fastIO();
     double a[3]; 
    while (cin >> a[0] >> a[1] >> a[2] ) {
       
        
        sort(a,a+3) ; 
        double s = (a[0]+a[1]+a[2])/2;
        double triangle_area = sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        double circum_radius = (a[0]*a[1]*a[2])/(4*triangle_area);
        double in_radius = triangle_area/s;
        double sunflower_area = PI*circum_radius*circum_radius - triangle_area;
        double violet_area = in_radius*in_radius*PI;
        double rose_area = triangle_area - violet_area;

        sunflower_area -= triangle_area;
        double ratio_rose_violet = rose_area/violet_area;
        double ratio_sunflower_trapezium = sunflower_area/(PI*circum_radius*circum_radius - in_radius*in_radius);

        cout << fixed << setprecision(4) << ratio_sunflower_trapezium << " ";
        cout << fixed << setprecision(4) << ratio_rose_violet << " ";
        cout << fixed << setprecision(4) << 1-ratio_sunflower_trapezium-ratio_rose_violet << endl;
    }
    return 0;
}