#include<cstdio>

int TIGA(int N){
	if (N <= 1){
		return 1;	
	} else if (N % 3 ==0){
		return TIGA(N-1) + TIGA(N-3);
	} else if (N % 3 ==1){
		return TIGA(N-2);
	} else {
		return TIGA(N-3);
	}
}

int main(){
	printf("%d \n", TIGA(6));
}

