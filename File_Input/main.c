#include<stdio.h>
int main(){
	int n,i,j;
	int a[3][3];
	FILE *fp;
	fp=freopen("input.txt","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	fclose(fp);
	printf("N is: %d\n",n);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}

		fp=freopen("write.txt","w",stdout);
		printf("Hello world and writing file is so easy");
		fclose(fp);
	return 0;
}
