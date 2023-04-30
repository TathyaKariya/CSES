#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
typedef long long ull;
int main()
{
        vector<vector<int>> ans;
        vector<int> ai;
        ai.push_back(1);
        ans.push_back(ai);
        // if(numRows==1)
        // {
        //     return 0;
        // }
        ai.push_back(1);
        ans.push_back(ai);
        // if(numRows==2)
        // {
        //     return 0;
        // }
        for(int i=3;i<=5;i++)
        {
            vector<int> aie;
            aie.push_back(1);
            for(int j=0;j<ai.size();j++)
            {
                int x=ai[j];
                int y=ai[j++];
                int yoo=x+y;
                aie.push_back(yoo);
            }
            aie.push_back(1);
            ai=aie;
            ans.push_back(aie);
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i];
        // }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }

}
//     string n;
//     cin>>n;
//     int count[26]={};
//     for(int i=0;i<n.size();i++)
//     {
//         count[n[i]-'A']++;
//         //In programming letters are really a value so 'A' is the smallest value and hence by subtracting it from other
//         //letters we can get all capital letters in index form from 0 to 25.
//     }
//     int odd=0;
//     int oddi=-1;
//     for(int x=0;x<26;x++)
//     {
//         if(count[x]%2!=0)
//         {
//             odd++;
//             oddi=x;

//         }
//     }
//     if(odd>1)
//     {
//         cout<<"NO SOLUTION";
//         return 0;
//     }
//     for(int x=0;x<26;x++)
//     {
//         if(count[x]%2==0)
//         {
           
//             int half=count[x]/2;
//             count[x]-=half;
//             while(half--)
//             {
// 				cout << (char)('A' + x);

// 			}

//         }
//     }
//     if(oddi!=-1)
//     {
//         while(count[oddi]!=0)
//         {
//             cout<<(char)('A'+oddi);
//             count[oddi]--;
//         }
//     }
//     for(int i=25; i>=0; i--)
//     {
//         while(count[i]>0)
//         {
//             count[i]--;
//             cout<<(char)('A'+i);
//         }
//     }


// }