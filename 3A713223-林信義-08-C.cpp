#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    int deal=0; 
    int customer[100]={0};
	
	while(deal<=100){
		
		int money,time,ID,choice;
		
		printf("現在有%d筆交易\n",deal);
		printf("請輸入您的客戶號碼:");
		scanf("%d",&ID);
		if(ID<=100){
		    printf("請輸入您要提款或存款(提款:1,存款:2):");
		    scanf("%d",&choice);
		    if(choice==1){
			    if(customer[ID]>0){
			        printf("請輸入您要提款多少:");
			        scanf("%d",&money);
			        if(customer[ID]-money>=0){
			        	customer[ID]-=money;
			        	printf("顧客ID%d存款為%d\n",ID,customer[ID]);
		                printf("\n");
			        	printf("\n");
			        	deal++;
			    	}
				    else{
			    		printf("您不能提款\n");
			    	}
		        }
		    	else{
				    printf("您不能提款\n");
			    } 
		    }
		    else if(choice==2){
		    	printf("請輸入您要存款多少:");
		        scanf("%d",&money);
		        customer[ID]+=money;
		        printf("顧客ID%d存款為%d\n",ID,customer[ID]);
		        printf("\n");
		        deal++;
		    } 
		    else{
		    	printf("為無效動作,請重新輸入。\n");
		    	printf("\n");
		    }
		}
		else{
			printf("為無效使用者ID,請重新輸入。\n");
			printf("\n");
		} 
	}
	
	system("PAUSE");
	return 0;
}
