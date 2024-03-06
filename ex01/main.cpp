#include "./Class/ScalarConverter/ScalarConverter.hpp"
#include "./Class/Serializer/Serializer.hpp"



int main()
{
  Data ptr;
  ptr.num = 54;
  ptr.c = 'A';

  uintptr_t intptr = Serializer::serialize(&ptr);
  std::cout << "Num: " << intptr << std::endl;
  std::cout << "Num: " << (Serializer::deserialize(intptr))->num << std::endl;
  std::cout << "Char: " << (Serializer::deserialize(intptr))->c << std::endl;
}
