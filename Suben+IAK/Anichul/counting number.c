#include<stdio.h>
void solve()
{
	int num,count=0;
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
		count++;
	}

	printf("%d",count);

}
int main(){
	solve();
	return 0;
}
