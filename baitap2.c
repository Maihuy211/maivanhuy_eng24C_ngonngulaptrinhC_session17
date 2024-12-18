# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
void Menu(int choice);
void printStr(char *str);
int countAlpha(char *str);
int countDigit(char *str);
int countSpecial(char *str);
int main(){
	int choice;
	char *str;
	do{
		Menu(choice);
		printf("nhap lua chon cua ban: ");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:	
				str=(char*)malloc(100*sizeof(char));
				printf("nhap chuoi: ");
            	fgets(str,100,stdin);
            	str[strcspn(str, "\n")] = '\0';
		        break;
		    case 2:
				printStr(str);
				break;
			case 3:
				printf("So luong chu cai trong chuoi la: %d\n",countAlpha(str));
				break;
			case 4:
				printf("So luong chu so trong chuoi la : %d\n",countDigit(str));
				break;
			case 5:
				printf("So luong ky tu dac biet trong chuoi la: %d\n",countSpecial(str));
				break;
			case 6:
				printf("thoat chuong trinh");
				break;
			default:
				printf("khong hop le");
		}
	}while(choice!=6);
	free(str);
	return 0;
}
void Menu(int choice){
	printf("\nMENU\n");
	printf("1.Nhap vao chuoi\n");
	printf("2.In ra chuoi\n");
	printf("3.Dem so luong chu cai trong chuoi in ra\n");
	printf("4.Dem so luong chu so trong chuoi in ra\n");
	printf("5.Dem so luong ki tu dac biet trong chuoi va in ra\n");
	printf("6.Thoat\n");
}
void printStr(char *str){
	printf("chuoi vua nhap la: %s",str);
}
int countAlpha(char *str){
    int count = 0;
    while (*str != '\0'){
        if (isalpha(*str)){
            count++;
		}
        str++;
    }
    return count;
}
int countDigit(char *str){
    int count = 0;
    while (*str != '\0'){
        if (isdigit(*str)){
            count++;
        }
        str++;
    }
    return count;
}
int countSpecial(char *str){
int count = 0;
    while (*str != '\0'){
        if (!isalnum(*str)){
            count++;
        }
        str++;
    }
    return count;
}
