#include <stdio.h>
#include "library.h" 

int main()
{

  print();
  add_one();
  add_one();
  print();

  // dikarenakan deklarais menggunakan "extern" file in jadi punya akses ke variable "number", 
  // padahal di fileini kita tidak mendeklarasiaknnya
  number += 10;
  print();

  return 0;
}