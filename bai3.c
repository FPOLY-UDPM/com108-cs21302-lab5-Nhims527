/******************************************************************************
 * Họ và tên: [Trần Quốc Cường]
 * MSSV:      [PS48626]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

void hoanVi(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;

    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);

    hoanVi(&a, &b);

    printf("Sau khi hoan vi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}