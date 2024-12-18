# include <stdio.h>
# include <stdlib.h>
void Menu(int choice);
void inputArr(int *a, int n);
void printArr(int *a, int n);
int  lengthArr(int n);
int sumArr(int *a,int n);
int maxArr(int *a,int n);
int main(){
	int choice,n;
	do{
	   Menu(choice);
	   printf("nhap lua chon cua ban: ");
	   scanf("%d",&choice);
	    switch(choice){
		    case 1:	
			    printf("nhap so phan tu cho mang: ");
	            scanf("%d",&n);
	            int *a=(int*)malloc(n*sizeof(int));
	            inputArr(a,n);
	            break;
	        case 2:
	        	printf("cac phan tu trong mang la :\n");
	        	printArr(a,n);
	            break;
	        case 3:
	        	printf("do dai cua mang la: %d",lengthArr(n));
	            break;
	        case 4:
	        	printf("tong cac phan tu cua mang la: %d",sumArr(a,n));
	        	break;
	        case 5:
	        	printf("gia tri lon nhat trong mang la: %d",maxArr(a,n));
	        	break;
	        case 6:
	        	free(a);
	        	printf("thoat khoi chuong trinh");
	        	break;
	        default:
	        	printf("khong hop le");
	    }
	}while(choice!=6);
    return 0;
}
void Menu(int choice){
	printf("\nMENU\n");
	printf("1.Nhap vao so phan tu va tung phan tu\n");
	printf("2.Hien thi cac phan tu trong mang\n");
	printf("3.Tinh do dai mang\n");
	printf("4.Tinh tong cac phan tu trong mang\n");
	printf("5.Hien thi phan tu lon nhat\n");
	printf("6.Thoat\n");
}
void inputArr(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",a+i);
	}
}
void printArr(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]= %d\n",i,*(a+i));
	}
}
int  lengthArr(int n){
	return n;
}
int sumArr(int *a,int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=*(a+i);
	}
	return sum;
}
int maxArr(int *a,int n){
	int i,max;
	max=*(a);
	for(i=1;i<n;i++){
		if(*(a+i)>max){
			max=*(a+i);
		}
	}
	return max;
}
