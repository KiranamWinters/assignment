#include <iostream>
using namespace std;
// accepting all data types
template <typename type>
void alter(type *ptr, type *ptr2)
{
    type *temp;
    temp = ptr;
    ptr = ptr2;
    ptr2 = temp;
}
int main()
{
    float d1, d2;
    float *p1, *p2;
    d1 = 9.5f;
    d2 = 7.2f;
    p1 = &d1;
    p2 = &d2;
    alter(p1, p2);
    cout << d1 << " " << d2 << endl;
}