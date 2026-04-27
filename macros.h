#ifndef MACROS_H
#define MACROS_H

#include <iostream>

#define ABS(x) ((x) < 0 ? -(x) : (x))

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define SQR(x) ((x) * (x))

#define IS_BETWEEN(z) ((z) > 5 && (z) < 10)

#define PRINT_RESULT(label, val) std::cout << label << " = " << val << std::endl

#endif
