# include <stdio.h>
int main()
{
    char a[] = "We love ";
    char b[] = "BUBT";
    int len_a = sizeof(a);
    int len_b = sizeof(b);
    int len_c = len_a+len_b;
    char c[len_c];

    printf("%d\n",len_b);
    for(int i = 0; i < len_a-1; ++i)
    {
        c[i] = a[i];
    }
    for(int i = 0; i < len_b; ++i)
    {
        c[i+len_a-1] = b[i];
    }
    printf("%s", c);
    return 0;
}
