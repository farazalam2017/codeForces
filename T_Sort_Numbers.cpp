#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c;
  cin >> a >> b >> c;
  int x = a, y = b, z = c;
  if (a > b)
    swap(a, b);
  if (a > c)
    swap(a, c);
  if (b > c)
    swap(b, c);
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << endl;
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
  return 0;
}