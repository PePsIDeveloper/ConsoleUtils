
# Console Library

A simple C++ library that provides functionality similar to `std::cout`.
## Usage

To use the library, include the `console.h` header file in your C++ code and use the `console` object to output text to the console. The `console` object supports the following stream insertion operators:

- `<<` for inserting strings, integers, doubles, and characters into the stream
- `<< std::endl` for inserting a newline into the stream

Here is an example of how to use the library:

```cpp
#include "console.h"

int main() {
  console << "Hello, world!" << std::endl;
  int num = 42;
  console << "The answer is " << num << std::endl;
  return 0;
}
