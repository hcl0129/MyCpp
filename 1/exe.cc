/* Paired comment. */

// Sigle-line comment.

/* Multiple 
 * Lines
 * should
 * be
 * like
 * this
 * one */

#include <iostream>

int main()
{

  int sum = 0, value = 0;

  while (std::cin >> value)
    sum += value;
  
  std::cout << "Sum is " << sum << std::endl;
  return 0;
}
