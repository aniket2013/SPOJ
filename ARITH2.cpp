#include <stdio.h>
 
int main() {
  char operato;
  long long n, a, res;
 
  scanf( "%lld", &n );
  while ( n-- ) {
    operato = 0;
    scanf( "%lld", &res );
    while ( 1 ) {
      scanf( "%s", &operato );
      if ( operato == '=' ) {
        break;
      }
 
      scanf( "%lld", &a );
      switch ( operato ) {
        case '+':
          res += a;
          break;
        case '-':
          res -= a;
          break;
        case '*':
          res *= a;
          break;
        case '/':
          res /= a;
          break;
      }
    }
    printf( "%lld\n", res );
  }
 
  return 0;
}
