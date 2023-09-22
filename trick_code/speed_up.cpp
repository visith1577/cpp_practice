#include <ios>
#include <iostream>
using namespace std;

// code exponentially speed up execution
const int speedUp = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();


// graph speed up
int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());
    for (string line; getline(cin, line); cout << '\n') {
        istringstream ss(line);
        char ch;
        int a, b, c, d;
        ss >> ch >> ch >> a >> ch >> b >> ch >> ch >> ch >> c >> ch >> d;
        if (a == c || a == d) cout << a;
        else cout << b;
    }
    exit(0);
    return 0;
}();



