#include <stdio.h>


int main(){
	int n, i, j, k;
	//ÝSMAÝL AVCU
//	printf("Enter a number:\n");
//	printf("\n");
    scanf("%d", &n);
    
    k = 2*n - 1;
    
    int p[k][k];
    
    
    j = 0;
    
    while ( j < k/2  ){
    
    	for(i=j; i<k-j; i++){
    		
    		p[j][i] = n-j;      //üst yatay
    		p[k-1-j][i] = n-j;     //alt yatay
    		p[i][j] = n-j;        //sol dikey
    		p[i][k-1-j] = n-j;    //sað dikey
    		
		}
		
		j = j + 1;
    	
	}
    
   p[k/2][k/2] = 1;
    
    
    
    
    for(i =0; i<k; i++){
    	for(j=0; j<k; j++){
    		printf("%d ", p[i][j]);
		}
		printf("\n");
	}
    
    
    
	return 0;
}



