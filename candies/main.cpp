#include <iostream>

using namespace std;

int main() {
    int bowl1, bowl2, bowl3;
    int eaten = 0;
    cin >> bowl1 >> bowl2 >> bowl3;
    
    int minCandies = 0;
    
    if (minCandies > 5) {
        minCandies = min(bowl1, bowl2);
        minCandies = min(minCandies, bowl3) - 1;
        eaten = minCandies * 3;
        bowl1 -= minCandies;
        bowl2 -= minCandies;
        bowl3 -= minCandies;
    }
    
    
    while (true)
    {
        if (bowl1 > 0) {bowl1--; eaten++;} else {cout << eaten << endl; return 0;}
        if (bowl2 > 0) {bowl2--; eaten++;} else {cout << eaten << endl; return 0;}
        if (bowl3 > 0) {bowl3--; eaten++;} else {cout << eaten << endl; return 0;}
        if (bowl2 > 0) {bowl2--; eaten++;} else {cout << eaten << endl; return 0;}
    }
    
    return 0;
}
