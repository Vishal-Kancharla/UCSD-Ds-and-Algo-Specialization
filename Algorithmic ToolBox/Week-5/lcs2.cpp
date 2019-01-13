#include<iostream>
#include<string>

using namespace std;

int longestCommonSubsequece(int64_t a[],  int64_t b[], int64_t len1, int64_t len2)
{
    int64_t i, j;
    int64_t LCS[len1+1][len2+1];
    for(i=0;i<=len1;i++)
        LCS[i][0]=0;

    for(j=0;j<=len2;j++)
        LCS[0][j]=0;

    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {

            if(a[i-1]==b[j-1])
            {
                LCS[i][j]=1+LCS[i-1][j-1];
            }


            else
            {
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }


    return LCS[len1][len2];

}


int main()
{
    int64_t m;
    cin>>m;
    int64_t a[m];
    for(int64_t i = 0; i< m ;i++)
        cin>>a[i];
    int64_t n;
    cin>>n;
    int64_t b[n];
    for(int64_t j = 0;j< n;j++)
        cin>>b[j];
    int64_t c =longestCommonSubsequece( a, b,  m,  n);
    cout<<c;
    return 0;
}
