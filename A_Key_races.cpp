/* Created By:-  Visual Studio Code
Author:- Faraz Alam
Email:- farazalam2017@gmail.com
Date: 2025-08-04 23:07:21
Title: A_Key_races.cpp */
/* ---------------------------------------------- */
/* Problem Link:- https://codeforces.com/problemset/problem/835/A */
/* ---------------------------------------------- */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int s, v1, v2, t1, t2;
  cin >> s >> v1 >> v2 >> t1 >> t2;
  int time1 = 2 * t1 + s * v1;
  int time2 = 2 * t2 + s * v2;
  if (time1 < time2)
    cout << "First" << endl;
  else if (time1 > time2)
    cout << "Second" << endl;
  else
    cout << "Friendship" << endl;
  return 0;
}
