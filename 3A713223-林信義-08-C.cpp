#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    int deal=0; 
    int customer[100]={0};
	
	while(deal<=100){
		
		int money,time,ID,choice;
		
		printf("�{�b��%d�����\n",deal);
		printf("�п�J�z���Ȥḹ�X:");
		scanf("%d",&ID);
		if(ID<=100){
		    printf("�п�J�z�n���کΦs��(����:1,�s��:2):");
		    scanf("%d",&choice);
		    if(choice==1){
			    if(customer[ID]>0){
			        printf("�п�J�z�n���ڦh��:");
			        scanf("%d",&money);
			        if(customer[ID]-money>=0){
			        	customer[ID]-=money;
			        	printf("�U��ID%d�s�ڬ�%d\n",ID,customer[ID]);
		                printf("\n");
			        	printf("\n");
			        	deal++;
			    	}
				    else{
			    		printf("�z���ണ��\n");
			    	}
		        }
		    	else{
				    printf("�z���ണ��\n");
			    } 
		    }
		    else if(choice==2){
		    	printf("�п�J�z�n�s�ڦh��:");
		        scanf("%d",&money);
		        customer[ID]+=money;
		        printf("�U��ID%d�s�ڬ�%d\n",ID,customer[ID]);
		        printf("\n");
		        deal++;
		    } 
		    else{
		    	printf("���L�İʧ@,�Э��s��J�C\n");
		    	printf("\n");
		    }
		}
		else{
			printf("���L�ĨϥΪ�ID,�Э��s��J�C\n");
			printf("\n");
		} 
	}
	
	system("PAUSE");
	return 0;
}
