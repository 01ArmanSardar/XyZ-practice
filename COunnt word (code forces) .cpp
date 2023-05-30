#include <bits/stdc++.h>
using namespace std;
    int main()
    {
        string s;
        getline (cin,s);
        int cnt =0;
        bool in_word =false ;
        for (char cr :s)
        {
            if (isalpha (cr))
            {
                if (in_word ==false )
                {
                    cnt ++;
                }
                in_word = true ;
            }
            else
            {
                in_word =false ;
            }
        }
        cout << cnt<< endl;
    }
