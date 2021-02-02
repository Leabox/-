#include <stdio.h>
#include <stdlib.h>
int judge(int n) {
	int flag = 1;
	while(n>0) {
		int k=n%10;
		if(k==2 || k==4) {
			flag = 0;
		}
		n/=10;
	}
	return flag;
}

int main () {
	int i,j,k;
	int num = 0;
	for(i= 1; i<=2019; i++) {
		for(j=i+1; j<=2019; j++) {
			for(k=j+1; k<=2019; k++) {
				if(i+j+k==2019) {


					if(judge(i)==1 && judge(j)==1 && judge(k)==1) {
						num++;

					}
				}
			}
		}
	}

	printf("%d",num);
	return 0;
}
