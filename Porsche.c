#include <stdio.h>
#include <conio.h>
#include <string.h>

struct DongXe {
    double gia_xe;
};

struct MauXe {
    double gia_son;
};

struct NoiThatXe {
    double gia_noi_that;
};

struct BaoHanhXe {
    double gia_bao_hanh;    
};

double car_line(double current_total, struct DongXe cars[])
{   
    int m;
    printf("\nDanh sach nhung dong xe Porsche chung toi hien co:\n");
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

double paint(double current_total, struct MauXe paint_price[])
{
    int n;
    printf("\nDanh sach nhung mau sac chung toi hien co:\n");
    printf("1. Den (Gia tieu chuan: 283.500.000 VND)\n");
    printf("2. Trang (Gia tieu chuan: 283.500.000 VND)\n");
    printf("3. Xam (Gia tieu chuan: 297.500.000 VND)\n");
    printf("4. Nau (Gia tieu chuan: 297.500.000 VND)\n");
    printf("5. Kem (Gia tieu chuan: 297.500.000 VND)\n");
    printf("6. Do (Gia tieu chuan: 318.280.225 VND)\n");
    printf("7. Xanh (Gia tieu chuan: 318.280.225 VND)\n");
    printf("8. Vang (Gia tieu chuan: 318.280.225 VND)\n");

    do {
        printf("Nhap vao 1 so dai dien cho mau xe ban muon mua:\n");
        scanf("%d", &n);
    } 
    while((n<1)||(n>4));

    current_total+=paint_price[n - 1].gia_son;
    return current_total;
}

double interior(double current_total, struct NoiThatXe interior_price[])
{
    int o;
    printf("\nDanh sach nhung loai noi that chung toi hien co:\n");
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

double insurance(double current_total, struct BaoHanhXe insurance_price[])
{
    int p;
    printf("\nDanh sach nhung goi bao hanh xe chung toi hien co:\n");
    printf("1. Bao hanh mau son 3 nam (Gia tieu chuan: 36.400.000 VND)\n");
    printf("2. Bao hanh phu tung 3 nam (Gia tieu chuan: 27.300.000 VND)\n");
    printf("3. Bao hanh than vo 3 nam (Gia tieu chuan: 81.900.000 VND)\n");
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
    system("CLS");
    char code_giam_gia[100];
    double total=0;
    struct DongXe cars[12];
    struct MauXe paint_price[10];
    struct NoiThatXe interior_price[4];
    struct BaoHanhXe insurance_price[4];
    FILE *f;
    double buffer;
    /* Open file for both reading and writing */
    f = fopen("C:\\Khoa\\UTE_HK1_N2\\C Programming\\Cars\\car_line.txt", "r");

    /* Read and display data */
    for (int i=0; i<10; i++)
    {
        fscanf(f, "%lf", &buffer);
        cars[i].gia_xe= buffer;
    }
    fclose(f);

    f = fopen("C:\\Khoa\\UTE_HK1_N2\\C Programming\\Cars\\car_paint.txt", "r");
    for (int i=0; i<8; i++)
    {
        fscanf(f, "%lf", &buffer);
        paint_price[i].gia_son= buffer;
    }
    fclose(f);

    f = fopen("C:\\Khoa\\UTE_HK1_N2\\C Programming\\Cars\\car_interior.txt", "r");
    for (int i=0; i<4; i++)
    {
        fscanf(f, "%lf", &buffer);
        interior_price[i].gia_noi_that= buffer;
    }
    fclose(f);

    f = fopen("C:\\Khoa\\UTE_HK1_N2\\C Programming\\Cars\\car_insurance.txt", "r");
    for (int i=0; i<3; i++)
    {
        fscanf(f, "%lf", &buffer);
        insurance_price[i].gia_bao_hanh= buffer;
    }
    fclose(f);

    printf("\nXin chao quy khach!\n");
    total = car_line(total,cars);
    total = paint(total,paint_price);
    total = interior(total,interior_price);
    total = insurance(total,insurance_price);
    printf("\nNhap vao ma code giam gia: ");
    scanf("%s", code_giam_gia);
    if (!strcmp(code_giam_gia, "391875"))
    {
        printf("XIN CHUC MUNG! CODE GIAM GIA CUA BAN CHINH XAC!\n");
        printf("BAN DUOC GIAM GIA 25 PHAN TRAM!\n");
        total=total*0.75;
    }
    printf("\nTong thiet hai cho vi tien cua ban la: %lf", total);
    return 0;
}
