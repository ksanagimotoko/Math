#include <stdio.h>


int fillPrime(int p[], int N)
{	// �Ҽ��� �迭�� ä���ִ��Լ��Դϴ�.
	// ä�� ��, ������ �ε��� ��ȣ�� ��ȯ�մϴ�.
	int i=0,k;
	for(int j=2; j<=N; j++)
		{
			for( k=2; k<=j; k++)
				{
					if (j%k==0)
						break;				
				}
			// break���� ����� ���� ���ٸ� j�� k�� ���� ���Դϴ�. 
			if (j==k) {p[i++]=k;}
			
	}
	
	return i;	
}



int main()
{
	int p[100];
	int N = 135;
	
	int n=fillPrime(p, N);
	

	
	//���μ� ����
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
