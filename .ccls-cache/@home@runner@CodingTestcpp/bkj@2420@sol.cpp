#include <cstdio>

using namespace std;
int main(void) {
  long N, M;
  scanf("%ld %ld", &N, &M);
  long answer = N - M > 0 ? N - M : M - N;
  printf("%ld\n", answer);
}