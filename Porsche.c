#include <stdio.h>
#include <conio.h>
#include <string.h>

struct DongXe {
    int gia_xe;
};

struct MauXe {
    int gia_son;
};

struct NoiThatXe {
    int gia_noi_that;
};

struct BaoHanhXe {
    int gia_bao_hanh;    
};

int car_line(int current_total, struct DongXe cars[11])
{   
    int m;
    printf("Danh sach nhung dong xe Porsche chung toi hien co:\n");
    printf("1. Porsche Cayenne (Gia tieu chuan: 4.930.000.000 VND)\n");
    printf("2. Porsche Macan (Gia tieu chuan: 3.150.000.000 VND)\n");
    printf("3. Porsche Taycan (Gia tieu chuan: 4.170.000.000 VND)\n");
    printf("4. Porsche Panamera (Gia tieu chuan: 5.560.000.000 VND)\n");
    printf("5. Porsche 718 Boxster (Gia tieu chuan: 3.740.000.000 VND)\n");
    printf("6. Porsche 718 Cayman (Gia tieu chuan: 3.620.000.000 VND)\n");
    printf("7. Porsche 911 Carrera (Gia tieu chuan: 7.130.000.000 VND)\n");
    printf("8. Porsche 911 Targa (Gia tieu chuan: 8.500.000.000 VND)\n");
    printf("9. Porsche 911 Turbo (Gia tieu chuan: 13.420.000.000 VND)\n");
    printf("10. Porsche 911 GT2 RS (Gia tieu chuan: 20.200.000.000 VND)\n");
    do {
        printf("Nhap vao 1 so dai dien cho dong xe ban muon mua:\n");
        scanf("%d", &m);
    } 
    while((m<1)||(m>10));
    
    current_total= current_total+cars[m - 1].gia_xe;
    return current_total;
}

int paint(int current_total, struct MauXe paint_price[])
{
    int n;
    printf("Danh sach nhung mau sac chung toi hien co:\n");
    printf("1. Den (Gia tieu chuan: 283.500.000 VND)\n");
    printf("2. Trang (Gia tieu chuan: 283.500.000 VND)\n");
    printf("3. Xam (Gia tieu chuan: 297.500.000 VND)\n");
    printf("4. Nau (Gia tieu chuan: 297.500.000 VND)\n");
    do {
        printf("Nhap vao 1 so dai dien cho mau xe ban muon mua:\n");
        scanf("%d", &n);
    } 
    while((n<1)||(n>4));

    current_total+=paint_price[n - 1].gia_son;
    return current_total;
}

int interior(int current_total, struct NoiThatXe interior_price[])
{
    int o;
    printf("Danh sach nhung loai noi that chung toi hien co:\n");
    printf("1. Low-class (So tien bo sung them: 0VND)\n");
    printf("2. Standard-class (So tien bo sung them: 25.000.000 VND)\n");
    printf("3. High-class (So tien bo sung them: 50.000.000 VND)\n");
    printf("4. Premium-class (So tien bo sung them: 100.000.000 VND)\n");
    do {
        printf("Nhap vao 1 so dai dien cho noi that ban muon mua:\n");
        scanf("%d", &o);
    } 
    while((o<1)||(o>4));

    current_total+=interior_price[o - 1].gia_noi_that;
    return current_total;
}

int insurance(int current_total, struct BaoHanhXe insurance_price[])
{
    int p;
    printf("Danh sach nhung goi bao hanh xe chung toi hien co:\n");
    printf("1. Bao hanh mau son – 3 nam (Gia tieu chuan: 36.400.000 VND)\n");
    printf("2. Bao hanh phu tung – 3 nam (Gia tieu chuan: 27.300.000 VND)\n");
    printf("3. Bao hanh than vo – 3 nam (Gia tieu chuan: 81.900.000 VND)\n");
    do {
        printf("Nhap vao 1 so dai dien cho goi bao hanh ban muon mua:\n");
        scanf("%d", &p);
    } 
    while((p<1)||(p>4));

    current_total+=insurance_price[p - 1].gia_bao_hanh;
    return current_total;
}
int main()
{
    int total=0;
    int test;
    struct DongXe cars[12];
    FILE *f;
    int buffer;

    /* Open file for both reading and writing */
    f = fopen("file.txt", "r");

    /* Read and display data */
    fread(&buffer, sizeof(int), 1, f);
    printf("%d\n", buffer);
    fclose(f);

    return 0;
}