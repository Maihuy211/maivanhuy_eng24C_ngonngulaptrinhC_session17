# include <stdio.h>
# include <stdlib.h>
void Menu();
void inputArr(int *a, int n);
void evenArr(int *a, int n);
void primeArr(int *a, int n);
void reverseArr(int *a, int n);
void Menu7();
void increaseSotf(int *a, int n);
void reduceSotf(int *a, int n);
void printArr(int *a, int n);
void earchArr(int *a, int n,int x);
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
	        	evenArr(a,n);
	            break;
	        case 3:
	        	primeArr(a,n);
	            break;
	        case 4:
	        	reverseArr(a,n);
	        	break;
	        int choice2;
			case 5:
	        	do{
	        		Menu7(choice2);
	                printf("nhap lua chon cua ban: ");
	                scanf("%d",&choice2);
	                switch(choice2){
	                	case 1:
	                		increaseSotf(a,n);
	                		printArr(a,n);
	                		break;
	                	case 2:
	                		reduceSotf(a,n);
	                		printArr(a,n);
	                		break;
	                	case 3:
	                		break;
	                	default:
	                		printf("khong hop le\n");
	                }
				}while(choice2!=3);
	        	break;
	        int x;
			case 6:
	        	printf("nhap phan tu can tim: ");
	        	scanf("%d",&x);
	        	earchArr(a,n,x);
	        	break;
	        case 7:
	        	free(a);
				printf("thoat menu");
	        	break;
	        default:
	        	printf("khong hop le");
	    }
	}while(choice!=7);
	return 0;
}
void Menu(int choice){
	printf("\nMENU\n");
	printf("1.Nhap vao so phan tu va tung phan tu\n");
	printf("2.In ra cac so chan\n");
	printf("3.In ra cac phan tu la so nguyen to\n");
	printf("4.Dao nguoc mang\n");
	printf("5.Sap xep mang(Khi chon Menu con hien thi)\n");
	printf("Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
	printf("7.Thoat\n");
}
void Menu7(int choice2){
    printf("Sap xep mang(Khi chon Menu con hien thi)\n");
    printf("1.Tang dan\n");
    printf("2.Giam dan\n");
    printf("3.Thoat\n");
}
void inputArr(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",a+i);
	}
}
void evenArr(int *a, int n){
    int i;
	for(i=0;i<n;i++){
		if(*(a+i)%2==0){
			printf("a[%d]= %d\n",i,*(a+i));
		}
	}
}
void primeArr(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		if(*(a+i)<10){
		    switch(*(a+i)){
			    case 2:
			    case 3:
			    case 5:
		        case 7:
		    	    printf("a[%d]= %d\n",i,*(a+i));
		    }
		}else if(*(a+i)%2!=0||*(a+i)%3!=0||*(a+i)%5!=0||*(a+i)%7!=0){
			printf("a[%d]= %d\n",i,*(a+i));
		}
	}
}
void reverseArr(int *a, int n){
	int i;
	for(i=n-1;i>=0;i--){
		printf("%d\n",*(a+i));
	}
}
void increaseSotf(int *a, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(*(a+j+1)<*(a+j)){
				int temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		 }
	}
}
void reduceSotf(int *a, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(*(a+j+1)>*(a+j)){
				int temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		 }
	}
}
void printArr(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]= %d\n",i,*(a+i));
	}
}
void earchArr(int *a, int n,int x){
	int i,check=-1;
	for(i=0;i<n;i++){
		if(*(a+i)==x){
			check=i;
			break;
	    }
	}
	if(check==-1){
		printf("ko tim thay %d trong mang",x);
	}else{
		printf("vi tri cua phan tu %d trong mang la: %d",x,i);
	}
}





