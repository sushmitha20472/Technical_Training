#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    srand(time(0)); // Seed random
    int random = rand() % (end - start + 1) + start;
    cout << "Random number: " << random;
    return 0;
}

