#include <iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while (t-->0)
    {
        int n;
        cin >> n;
        int a[n];
        //   int  count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i;
        for (i = 0; i < n; i++)
        {
            int j;
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    // 		count = 1;
                    std::cout << a[i] << std::endl;
                     	break;
                }
            }if(j!=n)
            break;
        }
        if(i==n)
        cout<<-1<<endl;
    }

    return 0;
}
