#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main()
{
   ull pre, steps= 0ull, in, n;
   cin>>n>>pre;
   while(0<--n)
   {
      cin>>in;
      if(pre>in)
      {
         steps=steps+pre-in;
      }
      else{
         pre=in;
      }
   }
   cout<<steps;
}