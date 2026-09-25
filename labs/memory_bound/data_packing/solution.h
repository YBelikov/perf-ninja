#include <vector>

// Assume those constants never change
constexpr int N = 1000000;
constexpr int minRandom = 0;
constexpr int maxRandom = 100;

// FIXME: this data structure can be reduced in size
struct S {
  float d; // 4 bytes
  unsigned long long l:16; // 16 bits, 2 bytes, max value 10000
  unsigned int i:8; // 8 bits, max value 100
  unsigned short s:7; // 7 bits, max value 100
  bool b:1; // 1 bits
  bool operator<(const S &s) const { return this->i < s.i; }
};

void init(std::vector<S> &arr);
S create_entry(int first_value, int second_value);
void solution(std::vector<S> &arr);
