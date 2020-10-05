#include <bits/stdc++.h>
using namespace std;

/*
Priority Queue Solution - Max-Heap
 Time Complexity - O(NlogN)
 Space Complexity - O(N)
 */

class Solution
{
public:
  int minRefuelStops(int target, int startFuel, vector<vector<int>> &stations)
  {
    priority_queue<int> passed_stations;
    int curr_fuel = startFuel;
    int curr_pos = 0;
    int stops = 0;
    int si = 0;

    while (curr_fuel > 0)
    {
      curr_pos += curr_fuel;
      curr_fuel = 0;

      if (curr_pos >= target)
        break;

      // no of stations passed
      while (si < stations.size() && stations[si][0] <= curr_pos)
      {
        passed_stations.push(stations[si][1]);
        ++si;
      }

      //refuel at the best station so far
      if (!passed_stations.empty())
      {
        curr_fuel += passed_stations.top();
        passed_stations.pop();
        ++stops;
      }
    }
    return (curr_pos >= target) ? stops : -1;
  }
};
