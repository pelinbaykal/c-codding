#include <iostream>
#include <string>
using namespace std;

int countingValleys(const string& s)
{
    int level = 0;
    int valleys = 0;
    for (char c : s)
    {
        if (c == 'D') --level;
        else if (++level == 0) ++valleys;
    }
    return (valleys);
}

int main(){
  countingValleys("DUDUDUDDU");
}