/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>

// constraints
#define MAXN 1000000

// input data
int N, i;
char V[MAXN];

int main() {
  //  uncomment the following lines if you want to read/write from files
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  assert(1 == scanf("%d", &N));
  for (i = 0; i < N; i++) assert(1 == scanf(" %c", &V[i]));

  // insert your code here

  printf("%d\n", 42);  // change 42 with actual answer
  return 0;
}
