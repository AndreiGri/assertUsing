#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float d, float s) {
    assert(s > 0);
    float time = d * s;
    return time;
}

int main()
{
    system("color 80");
    float distance, speed;
    cout << " Enter distance and speed: " << endl;
    cout << ' ';
    cin >> distance;
    cout << ' ';
    cin >> speed;
    cout << " Result time: " << travelTime(distance, speed) << endl;
    system("pause>nul");
    return 0;
}