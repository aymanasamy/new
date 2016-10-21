#ifdef JUDGE
#include <fstream>
std::ifstream cin("prepare.in");
std::ofstream cout("prepare.out");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n],t[n],p_tmin,p_tmax,result = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    p_tmin = p_tmax = p[0] - t[0];
    for(int i; i < n; i++)
    {
        if (p[i] >= t[i])
            result += p[i];
        else
            result += t[i];
        if (p[i] - t[i] > p_tmax)
        {
            p_tmax = p[i] - t[i];
        }
        if (p[i] - t[i] < p_tmin)
        {
            p_tmin = p[i] - t[i];
        }
    }
    if(p_tmin > 0)
    {
        result -= p_tmin;
    }
    if(p_tmax < 0)
    {
        result -= p_tmax;
    }
    cout << result << std::endl;
    return 0;
}
