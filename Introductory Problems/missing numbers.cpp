#include <bits/stdc++.h>
using namespace std;
int main(){
	
long long n;
cin>>n;
long long total=n*(n+1)*0.5;
int arr[n];
long long sum=0;
for(int i=1;i<n;i++)
 
 
{
	cin>>arr[i];
	sum+=arr[i];
	
	}
	cout<<total-sum;
}
