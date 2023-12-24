#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  cin >> n;
  while (0 < n) {
    auto vec = vs(n);
    auto q = vector<pair<string, int>>(n);
    for (auto i = 0; i < n; ++i) {
      cin >> vec[i];
      string u{vec[i]};
      transform(vec[i].begin(), vec[i].end(), u.begin(),
                [](auto c) { return tolower(c); });
      q[i] = {u, i};
    }
    sort(q.begin(), q.end());

    cout << vec[q[0].second] << '\n';

    cin >> n;
  }

  return 0;
}