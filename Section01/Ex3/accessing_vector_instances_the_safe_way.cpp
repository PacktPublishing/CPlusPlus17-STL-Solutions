#include <iostream>
#include <vector>

using namespace std;

int main()
{
  const size_t container_size {1000};
  vector<int> v (container_size, 123);

  cout << "Out of range element value: "
  << v[container_size + 10] << '\n';

  cout << "Out of range element value: "
  << v.at(container_size + 10) << '\n';

 }
