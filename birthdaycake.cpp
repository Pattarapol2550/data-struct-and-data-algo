#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> ans;
    int sweet[10005];

    for (int i = 0; i < (int)N; i++)
    {
        cin >> sweet[i];
    }

    // int sum_sweet2 =0;
    int mx = 0;
    int mx_count = 0;
    int x = 0;
    int start = 0;
    for (int i = 0; i < N; i++)
    {
        int sum_sweet = 0;
        int count = 0;
        vector<int> v;
        for (int j = i; j < i + K && j < N; j++)
        {
            if (sweet[i] >= sweet[j])
            {
                sum_sweet += sweet[j];
                count++;
                v.push_back(sweet[j]);
            }
            else
                break;
        }

        if (sum_sweet > mx)
        {
            mx = sum_sweet, start = i;
            mx_count = count;
            ans = v;
        }
        else if (sum_sweet == mx)
        {
            if (count > mx_count)
            {
                ans.clear();
                ans = v;
            }
            else if (count == mx_count)
            {
                for (int i = 0; i < count; i++)
                {
                    if (ans[i] > v[i])
                        break;
                    if (ans[i] < v[i])
                    {
                        ans = v;
                        break;
                    }
                }
            }
        }
    }
    cout << mx << endl;
    for (auto e : ans)
        cout << e << ' ';
    return 0;
}
/*
ans: 6 2 3
cur: 5 3 4
*/