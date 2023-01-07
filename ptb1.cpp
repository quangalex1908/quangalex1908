#include <stdio.h>
// ham main
int main () {
// khai bao bien
// phuong trinh bac nhat; ax + b = 0;
// so thuc float
float a, b, x;
// nhap du lieu
printf("Nhap he so cua phuong trinh ax + b = 0");
printf("\na=");
scanf("%f", &a);
printf("\nb=");
scanf("%f", &b);
// xu li
x = -b/a;


// xuat du lieu ra man hinh
printf("x =  %.2f", x);

}
