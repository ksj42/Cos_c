// You may use include as below.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

long long solution(long long num) {
    // Write code here.
    /*
	long long sum=num+1;
    int j;
    int cnt=0;
    char ret[18];
	
	for(;;){
		sprintf(ret,"%lld",sum);
    	for(j=0;j<strlen(ret);j++){
			if(ret[j]=='0'){
				cnt++;	
			}
		}
		if(cnt==0){
			sum=atoi(ret);
			break;
		}
		else{
			sum=atoi(ret);
			sum=sum+1;
			//printf("%d\n",sum);
			cnt=0;
		}
	}
    long long answer = sum;
    return answer;
    */
    //995
    num++;
	long long digit = 1;
	while (num / digit % 10 == 0) {
		printf("%d\n",num/digit%10);
		num += digit;
		digit *= 10;
		printf("%d\n",digit);
	}
	return num;
}

// The following is main function to output testcase.
int main() {
    long long num = 9949999;
    long long ret = solution(num);

    // Press Run button to receive output. 
    printf("Solution: return value of the function is %lld .\n", ret);
}
