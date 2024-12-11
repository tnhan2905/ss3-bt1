#include <stdio.h>

int main() {
    char name[100];  // Mang luu tru ten nguoi dung  

    // Yeu cau nguoi dung nhap ten 
    printf("Vui long nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);  // Su dung fgets de doc ten nguoi dung  

    // In ra thong diep chao mung  
    printf("Xin chao %s", name);

    return 0;
}
