#include<stdio.h>
int main(){
	int q =100,a,value,index,mid,start=0,end,check =0,temp,min,secondMin;
	int ans,count =0,flag;
	char sign;
int arr[q],item;

do{
printf("\nMENU\n");
printf("1. Nhap so phan tu va gia tri cho mang\n");
printf("2. In ra cac phan tu trong mang\n");
printf("3. Dem so luong cac so hoan hao co trong mang \n");
printf("4. tim gia tri nho thu 2 trong mang\n");
printf("5. them phan tu vao vi tri dau tien\n");
printf("6. Xoa phan tu\n");
printf("7. sap xep mang theo thu tu giam dan\n");
printf("8. tim kiem phan tu\n");
printf("9. sap xep mang theo thu tu so le dung truoc so chan dung sau\n");
printf("10. dao nguoc thu tu cac phan tu co trong mang\n");
printf("11. Thoat\n");
printf("Nhap lua chon cua ban : ");
scanf("%d",&ans);
switch(ans){
	case 1:
		flag =1;
		printf("Nhap so phan tu cho mang : ");
		scanf("%d",&a);
		for(int i =0;i<a;i++){
			printf("Nhap gia tri cua mang arr[%d] : ",i);
			scanf("%d",&arr[i]);
		}
		break;
	case 2:
		if(flag!=1){
			printf("moi ban nhap mang");
			break;
		}else{
		for(int i =0;i<a;i++){
			printf("arr[%d] = %d\n",i,arr[i]);
		}	
		}
		
	break;
	case 3:
//		for(int i =0;i<a;i++){
//			for(int j =1;j<arr[i],j++){
//				if()
//			}
//		}
	break;
	case 4:
		  min=32767, secondMin=32767;
            for (int i = 0; i < a; i++) {
                if (arr[i] < min) {
                    secondMin = min;
                    min = arr[i];
                } else if (arr[i] < secondMin && arr[i] != min) {
                    secondMin = arr[i];
                }
            }
            if (secondMin == 32767) {
                printf("khong co gia tri nho thu 2\n");
            } else {
                printf("gia tri nho thu 2 trong mang: %d\n", secondMin);
            }
	break;
	case 5:
		if(flag!=1){
			printf("moi ban nhap mang");
			break;
		}else{
		printf("Nhap gia tri them : ");
		scanf("%d",&value);
		for(int i=a;i>=1;i--){
			arr[i]=arr[i-1];
		}
			arr[0]=value;
			a++;
		}
		
	break;
	case 6:
			if(flag!=1){
			printf("moi ban nhap mang");
			break;
	}else{
		printf("nhap vi tri can xoa : ");
		scanf("%d",&index);
		for(int i = index-1;i<a;i++){
			arr[i]=arr[i+1];
		}
		a--;
	}
		
	break;
	case 7:
		if(flag!=1){
			printf("moi ban nhap mang");
			break;
		}else{
			for(int i =0;i<a;i++){
			int Max=i;
			for(int j =i+1;j<a;j++){
				if(arr[Max]<arr[j]){
					Max=j;
				}
			
			}	temp=arr[Max];
				arr[Max]=arr[i];
				arr[i]=temp;
		}
	
		
		}	
	
	break;
	case 8:
		if(flag!=1){
			printf("moi ban nhap mang");
			break;
		}else{
			printf("nhap gia tri can tim : ");
			scanf("%d",&item);
		while(start<=end){
	end = a-1;
	mid =(start+end)/2;
	if(arr[mid]==item){
		printf("phan tu %d co vi tri  thu %d ",item,mid+1);
		 check = 1;
		break;
	}else if(arr[mid] <item ){
		start=mid +1;
	}else{
		end = mid -1;
	}
}
if(check !=1){
		printf("ko tim thay phan tu %d",item);
}

   }
		
	
	break;
	case 9:
 if(flag==1){
               int arrX[50], arrY[50];
                 int x=0, y=0;
                    for(int i=0; i<a; i++){
                        if(arr[i]%2!= 0){
                            arrX[x]=arr[i];
                            x++;
                        }else{
                            arrY[y]=arr[i];
                            y++;
                        }
                    }
                    for(int i=0; i< x; i++){
                        printf("%d  ", arrX[i]);
                    }
                    for(int i=0; i<y; i++){
                        printf("%d  ", arrY[i]);
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
	break;
	case 10:
		for(int i =0;i<a;i++){
		
	for(int j =0;j<a-1-i;j++){
			if(arr[j]<arr[j+1]){
					temp = arr[j+1];
					arr[j+1]=arr[j];
				arr[j]=temp;
			}
			}
			
		}
		for(int i =0;i<a;i++){
			if(arr[i]%2==0){
				sign = "c";
				printf("arr[%d] = %d -  \n",i,arr[i]);
			}else{
				sign = "l";
				printf("arr[%d] = %d -  \n",i,arr[i]);
			}
		
		
	}
	break;
	
}
	
}while(ans!=11);






return 0;

}

