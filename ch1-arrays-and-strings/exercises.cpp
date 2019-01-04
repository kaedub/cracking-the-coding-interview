#include <iostream>
#include <string>
#include <map>

using namespace std;

/** Naive solution. What if you cannot use additional data structures? */
bool isUnique(string s) {
  map<char, int> charCount;

  for (int i=0; i<s.length(); i++){
    charCount[s[i]]++;
    if (charCount[s[i]] > 1)
      return false;
  }
  return true;
}

bool checkPermutation(string s1, string s2) {
  return s1 == s2;
} 

string URLify(string s) {
  return s;
}

int main() {
  cout << "'hellothere' is unique? "<< isUnique("hellothere") << endl;
  cout << "'video' is unique? "<< isUnique("video") << endl;
}