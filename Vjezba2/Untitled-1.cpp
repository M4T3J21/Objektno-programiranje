#include <cstdio>
void print(int n)
{
printf("%d\n", n);
}
void print(double n)
{
printf("%lf\n", n);
}
int main()
{
print(10);
print(3.14);
}
