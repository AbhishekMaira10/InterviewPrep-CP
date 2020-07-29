#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> vect = {11, 2, 3, 14};

  sort(vect.begin(), vect.end());                            //O(nlogn)
  bool present = binary_search(vect.begin(), vect.end(), 3); //true - o(logn)

  // Reversing the Vector
  reverse(vect.begin(), vect.end());

  int max = *max_element(vect.begin(), vect.end());
  int min = *min_element(vect.begin(), vect.end());

  // Starting the summation from 0
  cout << accumulate(vect.begin(), vect.end(), 0);

  for (int i = 0; i < 3; i++)
    vect.push_back(100);

  vect.push_back(123);

  vector<int>::iterator it = lower_bound(vect.begin(), vect.end(), 100); // >=
  auto it2 = upper_bound(vect.begin(), vect.end(), 100);                 // >

  //1. sort(first_iterator, last_iterator) – To sort the given vector.
  //2. reverse(first_iterator, last_iterator) – To reverse a vector.
  //3. *max_element (first_iterator, last_iterator) – To find the maximum
  //   element of a vector.
  //4. *min_element (first_iterator, last_iterator) – To find the minimum
  //   element of a vector.
  //5. accumulate(first_iterator, last_iterator, initial value of sum) – Does
  //   the summation of vector elements
  //6. count(first_iterator, last_iterator,x) – To count the occurrences of x in
  //7. vector. find(first_iterator, last_iterator, x) – Points to last address
  //   of vector ((name_of_vector).end()) if element is not present in vector.
  //8. binary_search(first_iterator, last_iterator, x) – Tests whether x exists
  //   in sorted vector or not.
  //9. lower_bound(first_iterator, last_iterator, x) – returns an iterator
  //   pointing to the first element in the range [first,last) which has a value
  //   not less than ‘x’.
  //10. upper_bound(first_iterator, last_iterator, x) – returns an iterator
  //    pointing to the first element in the range [first,last) which has a
  //    value greater than ‘x’.
  //11. arr.erase(position to be deleted) – This erases selected element in
  //    vector and shifts and resizes the vector elements accordingly.
  //12. arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the
  //    duplicate occurrences in sorted vector in a single line.

  for (int x : vect)
    cout << x << endl;
  return 0;
}