#include <boost/qvm/all.hpp>
#include <iostream>

int main()
{
  boost::qvm::quat<float> rx = boost::qvm::rotx_quat(3.14159f);
  std::cout << boost::qvm::S(rx) << std::endl;
  return 0;
}