#include <bits/stdc++.h>
using namespace std;

// Prints frequencies of individual words in str
void printFrequencies(const string &str)
{
  // declaring map of <string, int> type, each word
  // is mapped to its frequency
  unordered_map<string, int> wordFreq;

  // breaking input into word using string stream
  stringstream ss(str); // Used for breaking words
  string word;          // To store individual words
  while (ss >> word)
    wordFreq[word]++;

  // now iterating over word, freq pair and printing
  // them in <, > format
  unordered_map<string, int>::iterator p;
  for (p = wordFreq.begin(); p != wordFreq.end(); p++)
    cout << "(" << p->first << ", " << p->second << ")\n";
}

int main()
{
  map<int, int> A;
  A[1] = 100;
  A[2] = 200;

  map<char, int> M; //makes a bst w.r.t  keys and stores the value inside the nodes
  unordered_map<char, int> U;
  // Internally uses hashing since hashing is a athematical function it is done in //o(1)
  // but due to collisions worst case may be o(N)
  string x = "Abhishek Maira";

  //add(key, value) - logN, o(1)
  //erase(key) - logN, o(1)

  for (char c : x)
    M[c]++; //O(NlogN)

  for (char c : x)
    U[c]++; //o(N)

  return 0;
}