#include <stdarg.h>
#include <stdio.h>
void va_test(const size_t count, ...);
typedef struct {
    double d;
    int n;
    char c;
} test_t;
int main() 
{
    test_t st = {10, 3.14f, 'a'};
    va_test(1, st); 
}
void va_test(const size_t count, ...)
{
    va_list ap;
    test_t n;
    va_start(ap, count);
    {
        n = va_arg(ap, test_t);
        printf("size: %ld\n", sizeof(n));
        printf("num: %d, double: %f, char: %c\n", n.n, n.d, n.c);
    }
    va_end(ap);

}

