#include <iostream>
 
int main(){
	
	setlocale(LC_ALL,"Rus");
	
    int i,j,k=0,p=0,q,temp,s=0,idle=0,done=0;
 
    printf("??????? ?????????? ?????????: ");
    scanf ("%d",&p);                                                       
 
    int a[p][4];
    int b[p][5];
 
    printf("??????? ???????????? ??????: ");
    scanf ("%d",&q);
 
    printf("?????????? ??????? ?????, ????? ????????, ???????????? ? ????????? ??????? ????????: \n");
    for(i=0;i<p;i++){
        for(j=0;j<4;j++){
            scanf ("%d",&a[i][j]); 
			/*1 0 8 1 
			2 2 7 2 
			3 9 4 3*/
        }
        a[i][4]=a[i][2];//???????????? ???????? 
    }
    
	printf("\n\n??????? ???????????? ????????? (? ???????????? ????): \n");
    i=a[0][1];
    while(done!=p){
          if(k==p)
               k=0;
 
          if(a[k][1]<=i){
               if(a[k][2]!=0){
                    if(a[k][2]>=q){
                         printf("%5d-----------\n        |p-%-4d|\n",i,a[k][0]);
                         a[k][2]-=q;
                         i+=q;
                         }
                    else{
                         printf("%5d-----------\n        |p-%-4d|\n",i,a[k][0]);
                         i+=a[k][2];
                         a[k][2]=0;
                         }
 
                    if(a[k][2]==0){
                         b[s][0]=a[k][0];
                         b[s][1]=a[k][1];
                         b[s][2]=i;
                         b[s][3]=a[k][4];
                         b[s][4]=((i-a[k][1])-a[k][4]);        
                         s++;
                         done++;
                         }
                    }
               k++;             
               }
          }
    printf("%5d-----------",i); 
             
	printf("\n\n\n??????? ?????????:");
    printf("\n\n?????   ????? ????????   ????? ?????????   ????? ?????    ????? ????????    ????????? \n-------------------------------------------------------------------------------------\n");
    for(i=0;i<s;i++)
    	printf("  %d           %d                %d               %d               %d                %d\n", b[i][0], b[i][1], b[i][2], b[i][3], b[i][4], b[i][0]);
		 
    return 0;
}

