# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
void Menu(int choice);
void printReversedStr(char *str);
void countWords(char *str);
void compareStr(char *str, char *str2);
void toupperStr(char *str);
void concatStr(char *str, char *str2);  
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
				printReversedStr(str);
				break;
			case 3:
				countWords(str);
				break;
			char *str2;
			case 4:
				str2=(char*)malloc(100*sizeof(char));
				printf("nhap chuoi 2: ");
            	fgets(str2,100,stdin);
            	str[strcspn(str, "\n")] = '\0';
            	compareStr(str,str2);
				break;
			case 5:
				toupperStr(str);
				break;
			case 6:
            	concatStr(str,str2);   
				break;
			case 7:
				printf("thoat chuong trinh");
				break;
			default:
				printf("khong hop le");
		}
	}while(choice!=7);
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
void printReversedStr(char *str){
	printf("chuoi dao nguoc: ");
	int i;
	for(i=strlen(str)-1;i>=0;i--){
	    printf("%c",*(str+i));
	}
}
void countWords(char *str){
	int cout=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if(*(str+i)==' '){
			cout++;
		}
	}
	cout+=1;
    printf("so tu trong chuoi la: %d",cout);
}
void compareStr(char *str, char *str2){
	int result=strcmp(str,str2);
    if (result==0){
        printf("hai chuoi bang nhau\n");
    }else if(result>0){
        printf("chuoi 1 lon hon chuoi 2\n");
    } else{
        printf("chuoi 1 nho hon chuoi 2\n");
    }
}
void toupperStr(char *str){	
	int i;
	for(i=0;i<strlen(str);i++){
		if(isalpha(*(str+i))){ 
			*(str+i)=toupper(*(str+i)); 
	    } 
    }
    printf("chuoi sau khi viet hoa chu cai dau la: %s",str);
}
void concatStr(char *str, char *str2){   
    strcat(str, str2);
    printf("chuoi sau khi noi: %s\n", str);	
}
