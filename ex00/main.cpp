#include "./Class/ScalarConverter/ScalarConverter.hpp"

int main(int argc, char **argv)
{
  if(argc != 2)
  {
    std::cout << "Bad argument send better ones." << std::endl;
    return 0;
  }
  ScalarConverter::convert(argv[1]);
}
