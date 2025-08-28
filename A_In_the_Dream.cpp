#include <bits/stdc++.h>
using namespace std;
bool helper(long long x, long long y)
{
  long long m = max(x, y);
  long long n = min(x, y);
  bool result = m <= 2 * (n + 1);
  return result;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long x1 = a, y1 = b;
    long long x2 = c - a;
    long long y2 = d - b;
    if (helper(x1, y1) && helper(x2, y2))
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
    cout << "\n";
  }
  return 0;
}
