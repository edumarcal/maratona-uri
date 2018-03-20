// Agradeço a DEUS pelo dom do conhecimento
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double area, raio, n = 3.14159;
    cin >> raio;
    area = n*raio*raio;
    cout << fixed << setprecision(4);
    cout << "A=" << area << "\n";
    return 0;
}