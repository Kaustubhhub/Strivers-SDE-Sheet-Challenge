#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt = 1, ele = arr[0];

	for(int i=1; i<n; i++){
		if(arr[i]==ele)cnt++;

		else{
			cnt--;
			if(cnt==0){
				ele = arr[i];
				cnt = 1;
			}
		}
	}

	cnt=0;
	for(int i=0; i<n; i++){
		if(ele == arr[i])cnt++;
	}

	if(cnt > n/2)return ele;

	return -1;
}