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
    printf("\nList of Porsche models we currently have:\n");
    printf("1. Porsche Cayenne (Standard price: 4.930.000.000 VND)\n");
    printf("2. Porsche Macan (Standard price: 3.150.000.000 VND)\n");
    printf("3. Porsche Taycan (Standard price: 4.170.000.000 VND)\n");
    printf("4. Porsche Panamera (Standard price: 5.560.000.000 VND)\n");
    printf("5. Porsche 718 Boxster (Standard price: 3.740.000.000 VND)\n");
    printf("6. Porsche 718 Cayman (Standard price: 3.620.000.000 VND)\n");
    printf("7. Porsche 911 Carrera (Standard price: 7.130.000.000 VND)\n");
    printf("8. Porsche 911 Targa (Standard price: 8.500.000.000 VND)\n");
    printf("9. Porsche 911 Turbo (Standard price: 13.420.000.000 VND)\n");
    printf("10. Porsche 911 GT2 RS (Standard price: 20.200.000.000 VND)\n");
    do {
        printf("Enter a number for the car you want to buy:\n");
        scanf("%d", &m);
    } 
    while((m<1)||(m>10));
    
    current_total= current_total+cars[m - 1].gia_xe;
    return current_total;
}

double paint(double current_total, struct MauXe paint_price[])
{
    int n;
    printf("\nList of colors we have available:\n");
    printf("1. Black (Standard price: 283.500.000 VND)\n");
    printf("2. White (Standard price: 283.500.000 VND)\n");
    printf("3. Grey (Standard price: 297.500.000 VND)\n");
    printf("4. Brown(Standard price: 297.500.000 VND)\n");
    printf("5. Cream (Standard price: 297.500.000 VND)\n");
    printf("6. Red (Standard price: 318.280.225 VND)\n");
    printf("7. Blue (Standard price: 318.280.225 VND)\n");
    printf("8. Yellow (Standard price: 318.280.225 VND)\n");

    do {
        printf("Enter 1 number for the color of the car you want to buy:\n");
        scanf("%d", &n);
    } 
    while((n<1)||(n>8));

    current_total+=paint_price[n - 1].gia_son;
    return current_total;
}

double interior(double current_total, struct NoiThatXe interior_price[])
{
    int v;
    printf("\nList of types of interior we currently have:\n");
    printf("1. Low-class (Additional amount: 0VND)\n");
    printf("2. Standard-class (Additional amount: 25.000.000 VND)\n");
    printf("3. High-class (Additional amount: 50.000.000 VND)\n");
    printf("4. Premium-class (Additional amount: 100.000.000 VND)\n");

    do {
        printf("Enter 1 number for the interior you want to buy:\n");
        scanf("%d", &v);
    } 
    while((v<1)||(v>4));

    current_total+=interior_price[v - 1].gia_noi_that;
    return current_total;
}

double insurance(double current_total, struct BaoHanhXe insurance_price[])
{
    int p;
    printf("\nList of car warranty packages we currently have:\n");
    printf("1. Paint warranty 3 year (Standard price: 36.400.000 VND)\n");
    printf("2. Spare parts warranty 3 year (Standard price: 27.300.000 VND)\n");
    printf("3. Body warranty 3 year (Standard price: 81.900.000 VND)\n");
    do {
        printf("Enter a number for the warranty pack you want to buy:\n");
        scanf("%d", &p);
    } 
    while((p<1)||(p>3));

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

    printf("\nWelcome to PORSCHE PRICING SYSTEM!\n");
    total = car_line(total,cars);
    total = paint(total,paint_price);
    total = interior(total,interior_price);
    total = insurance(total,insurance_price);
    printf("\nEnter discount code: ");
    scanf("%s", code_giam_gia);
    if (!strcmp(code_giam_gia, "391875"))
    {
        printf("CONGRATULATIONS! YOUR DISCOUNT CODE EXACTLY!\n");
        printf("YOU GET 25 PERCENT OFF!\n");
        total=total*0.75;
    }
    else 
    {
    printf("\nSorry, the discount code is not correct!\n");
    }
    printf("\nThe total damage to your wallet is: %lf\n\n", total);
    
    return 0;
}
