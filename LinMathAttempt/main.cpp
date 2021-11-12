#include <iostream>
#include <stdio.h>

#include "linmath_test.h"

typedef float Vec4[4];

template <std::size_t N>
void linmath_vec4_set(Vec4 v, float value) {

   int i;
   for (i = 0; i < N; i++) {

      v[i] = value;
      std::cout << "v[" << i << "] = " << v[i] << std::endl;
   }
}

int main() {
   linmath_test_run_all();
   printf("linmath tests passed\n");
   Vec4 v4{};
   std::cout << "V4: " << std::endl;
   for (const auto& ele : v4) {
      std::cout << ele << std::endl;
   }
   linmath_vec4_set(v4, 1.0f);
   return 0;

}
/*
Still fairly confused on what's happening here
I'm going to make functions to nicely print names
the vectors and matrix and then their contents
from their i'll print out the function names and the matrix
before and after the transformations. Hopefully
this way I can understand the math happening to understand
the code happening

11/12/21 -JB :)

*/