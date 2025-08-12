#include <cstdio>

int main(){
    int k;
    while (scanf( "%d", &k) != EOF ){
        int jumlah = 0, v;
        while (k--) {
            scanf("%d", &v);
            jumlah += v;  
       }
       printf("%d\n", jumlah); 	   
    }
}
