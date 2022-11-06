#include <iostream>
#include <string>

using namespace std;
int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--) {
    string str;
    cin >> str;
    cout << str[0] << str[str.length() - 1] << endl;
  }
}