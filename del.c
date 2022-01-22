#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int high;
    if ((a > b) && (a > c) && (a > d))
    {
        high = a;
    }
    else if ((b > c) && (b > d))
    {
        high = b;
    }
    else if ((c > d))
    {
        high = c;
    }
    else
    {
        high = d;
    }
    return high;
}
int main()
{
    int a, b, c, d;
    int ans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    // printf("%d", ans);

    int max = (a > b && a > c && a > d) ? a : ((b > c && b > d) ? b : (c > d ? c : d));
    printf("%d", max);
    return 0;
}