#include <bits/stdc++.h>
#include <chrono>  // Include chrono library
using namespace std;

int main() {
    using namespace std::chrono;  // Bring chrono into scope

    vector<int> v = {3, 1, 4, 1, 5, 9};

    // Start measuring time for push_back loop

    // Output sorted vector (optional)
    for (int x : v) {
        cout << x << " ";
    }
    

    return 0;
}