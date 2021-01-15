#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[100];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] >= '5' && str[i] <= '9'){
			if (i == 0 && str[i] == '9')	continue;
			str[i] = '0' + '9' - str[i];
		}
	}
	printf("%s\n", str);
	return 0;
}