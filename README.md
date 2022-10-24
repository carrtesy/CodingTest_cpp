# CodingTest
Code Interview Practices

## For CPP
### execute
```
g++ -o sol.out sol.cpp
./sol.out < input
```
### Template
```cpp
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long A, B, C;
  cin >> A >> B >> C;
  cout << A + B + C;
}
```
