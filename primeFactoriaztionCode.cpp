#include <stdio.h>


int fillPrime(int p[], int N)
{	// 소수를 배열에 채워넣는함수입니다.
	// 채운 후, 마지막 인덱스 번호를 반환합니다.
	int i=0,k;
	for(int j=2; j<=N; j++)
		{
			for( k=2; k<=j; k++)
				{
					if (j%k==0)
						break;				
				}
			// break문이 실행된 적이 없다면 j와 k는 같은 값입니다. 
			if (j==k) {p[i++]=k;}
			
	}
	
	return i;	
}



int main()
{
	int p[100];
	int N = 135;
	
	int n=fillPrime(p, N);
	

	
	//소인수 분해
	int i=0;
	
	while (N != 1) {
			
		if  (N % p[i]==0)
			{
				N = N/p[i]; 
				printf("%d ",p[i]);
				}
			
		else {
			i++;	
		}
	
	}
		
	
	
	return 0;
}
