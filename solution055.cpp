# include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int a, b, c, t;

    cin >> a >> b >> c;

    if(a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b < c)
    {
        t = b;
        b = c;
        c = t;
    }

    cout << a << ' '<< b <<' '<< c<<endl;

	return 0;
}