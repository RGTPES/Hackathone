
#include <stdio.h>
int main() {
    int q = 100, a, value, index, mid, start, end, check, temp, min, secondMin;
    int ans, count = 0, flag = 0;
    int arr[q], item;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra cac phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao co trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them phan tu vao vi tri dau tien\n");
        printf("6. Xoa phan tu\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu\n");
        printf("9. Sap xep mang theo thu tu so le dung truoc, so chan dung sau\n");
        printf("10. Dao nguoc thu tu cac phan tu co trong mang\n");
        printf("11. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &ans);

        switch (ans) {
            case 1: 
                flag = 1;
                printf("Nhap so phan tu cho mang: ");
                scanf("%d", &a);
                for (int i = 0; i < a; i++) {
                    printf("Nhap gia tri cua mang arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2: 
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    for (int i = 0; i < a; i++) {
                        printf("arr[%d] = %d\n", i, arr[i]);
                    }
                }
                break;
            case 3:  
        
                break;
            case 4:  
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    min = 32767, secondMin = 32767;
                    for (int i = 0; i < a; i++) {
                        if (arr[i] < min) {
                            secondMin = min;
                            min = arr[i];
                        } else if (arr[i] < secondMin && arr[i] != min) {
                            secondMin = arr[i];
                        }
                    }
                    if (secondMin == 32767) {
                        printf("Khong co gia tri nho thu 2\n");
                    } else {
                        printf("Gia tri nho thu 2 trong mang: %d\n", secondMin);
                    }
                }
                break;
            case 5:  
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    printf("Nhap gia tri them: ");
                    scanf("%d", &value);
                    for (int i = a; i >= 1; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = value;
                    a++;
                }
                break;
            case 6: 
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &index);
                    if (index < 1 || index > a) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = index - 1; i < a - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        a--;
                    }
                }
                break;
            case 7: 
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    for (int i = 0; i < a - 1; i++) {
                        for (int j = i + 1; j < a; j++) {
                            if (arr[i] < arr[j]) {
                                temp = arr[i];
                                arr[i] = arr[j];
                                arr[j] = temp;
                            }
                        }
                    }
                    printf("Mang da sap xep giam dan.\n");
                }
                break;
            case 8: 
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
               
		}else{
			end = a-1;
			printf("nhap gia tri can tim : ");
			scanf("%d",&item);
		while(start<=end){
		
		mid =(start+end)/2;
		if(arr[mid]==item){
		printf("phan tu %d co vi tri  thu %d ",item,mid+1);
		 check = 2;
		break;
		}else if(arr[mid] <item ){
		start = mid +1;
	}else if(arr[mid] >item){
			end = mid -1;
	}
	}
}
                break;
            case 9:  
                if (flag != 1) {
                    printf("Moi ban nhap mang truoc!\n");
                } else {
                    int odd[q], even[q], x = 0, y = 0;
                    for (int i = 0; i < a; i++) {
                        if (arr[i] % 2 != 0) odd[x++] = arr[i];
                        else even[y++] = arr[i];
                    }
                    printf("Mang sau khi sap xep: ");
                    for (int i = 0; i < x; i++) {
                    printf("%d ", odd[i]);}
                    for (int i = 0; i < y; i++) {
                        printf("%d ", even[i]);}
                                                 
                    printf("\n");
                }
                break;
            case 10:  
             
                break;
        }
    } while (ans != 11);

    return 0;
}

    
