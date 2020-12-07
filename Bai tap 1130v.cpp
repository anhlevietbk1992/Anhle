#include <stdio.h>
#include <math.h>

/int n;
//	printf("Nhap n= ");
//	scanf("%d",&n);
//if(n<=0){
//	printf("Vui long nhap lai");
//}else{
//	for(int i=1;i<n;i++){
//	if(i%2==0){
//		printf("Cac so chan nho hon n la %d\n",i);
//		
//		}
//	
//	}
//	}
//
//
//}

int n,y;
	printf("Nhap n= ");
	scanf("%d",&n);
if(n==0){
	printf("Uoc so cua 0 la 0");
}else{
	if(n<0){
  printf("Vui long nhap lai");
}else
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf("Cac uoc cua n la %d\n",i);
			y=y+i;
			

			}
		}
		printf("Tong cac uoc cua n la %d\n",y);	
	}
	
}

