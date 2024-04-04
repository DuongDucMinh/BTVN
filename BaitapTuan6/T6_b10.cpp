#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
        a[i] = rand() % 49 + 0;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int m=j+1;m<n;m++)
			{
				int h=a[i]+a[j]+a[m];
				if(h%25==0)
				{
					cout<<a[i]<<" "<<a[j]<<" "<<a[m]<<endl;
				}
			}
		}
	}
}
