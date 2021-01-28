#include<stdio.h>

struct emp
{
	int eno;
	char ename[20];
	float esal;
};
int main()
{
	struct emp e={1001,"kartik",5000,};
	printf("employee details :\n");
	printf("eno:%d\n",e.eno);
	printf("employee sal: %f",e.esal);
	return 0;
	
}
