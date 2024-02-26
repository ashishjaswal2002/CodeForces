#include <bits/stdc++.h>
#define TestCase \
    int t;       \
    cin >> t;    \
    while (t--)
#define N  \
    int n; \
    cin >> n;
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
       cin>>v[i];

    }

    int maxEle = *max_element(v.begin(), v.end());
    int minEle = *min_element(v.begin(), v.end());

    int maxIndex = -1;
    int minIndex = -1;


    for (int i = 0; i < n; i++)
    {

        if (maxEle == v[i] && maxIndex==-1)
        {
            maxIndex = i;
        }
        if(minEle == v[i]){
            minIndex =i;
        }
    }
  int ans =(maxIndex-1)+(n-minIndex);
     if(maxIndex>minIndex){
        ans--;
     }


     cout<<ans<<" ";
}