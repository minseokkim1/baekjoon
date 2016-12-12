#include <stdio.h>
#include <stack>

using namespace std;
int a[100000];
int main(){
	int n, result=0;
	stack <int> st;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++){
		int left = i;
		while (!st.empty() && a[st.top()] > a[i]){
			int height = a[st.top()];
			st.pop();
			int width = i;
			if (!st.empty()){
				width = (i - st.top() - 1);
			}
			if (result < width*height) result = width*height;
		}
		st.push(i);
	}
	while (!st.empty()){
		int height = a[st.top()];
		st.pop();
		int width = n;
		if (!st.empty()){
			width = n - st.top() - 1;
		}
		if (result < width*height){
			result = width*height;
		}
	}
	printf("%d", result);
}