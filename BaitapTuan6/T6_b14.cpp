
#include<bits/stdc++.h>

using namespace std;

long long factorial(long long n){
	if(n<=1)
	{
		return 1;
	}
	else return n*factorial(n-1);
}

long long toHop(long long n,long long k)
{
	long long th=factorial(n)/(factorial(k)*factorial(n-k));
	return th;
}

void nhapKN(){
	int a, b;
	while(cin >> a >> b){
		if(a == -1 && b == -1) break;
		else{
			cout << toHop(b , a) << "\n";
		}
	}
}

int main(){
    nhapKN();
    cout << "\n";
}


