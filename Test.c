#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//t - car's type
//c - car's colour
//f - furniture
//p - recycle packages
int const x = 10000;
long double car_price(char t)
{
    long double m;
    if( (t =='A') || (t == 'a'))
    {
        m = 4930000000;
    }
    else if( (t == 'B') || (t == 'b'))
    {
        m = 3150000000;
    }
    else if( (t == 'C') || (t == 'c'))
    {
        m = 4170000000;
    }
    else if( (t == 'D') || (t == 'd'))
    {
        m = 5560000000;
    }
     else if( (t == 'E') || (t == 'e'))
    {
        m = 3740000000;
    }
     else if( (t == 'F') || (t == 'f'))
    {
        m = 3620000000;
    }
    else if( (t == 'G') || (t == 'g'))
    {
        m = 7130000000;
    }
     else if( (t == 'H') || (t == 'h'))
    {
        m = 8500000000;
    }
     else if( (t == 'I') || (t == 'i'))
    {
        m = 13420000000;
    }
     else if( (t == 'J') || (t == 'j'))
    {
        m = 20200000000;
    }
return m;
}
void car_raw_price(char t)
{
    //m - money
    long double m;
    char *car_name;
    if( (t =='A') || (t == 'a'))
        {
        m = 4930000000;
        car_name = "Porsche Cayenne";
        printf("Your car: %s\n", car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'B') || (t == 'b'))
        {
        m = 3150000000;
        car_name = "Porsche Macan";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'C') || (t == 'c'))
        {
        m = 4170000000;
        car_name = "Porsche Taycan";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'D') || (t == 'd'))
        {
        m = 5560000000;
        car_name = "Porsche Panamera";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'E') || (t == 'e'))
        {
        m = 3740000000;
        car_name = "Porsche 718 Boxster";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'F') || (t == 'f'))
        {
        m = 3620000000;
        car_name = "Porsche 718 Cayman";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'G') || (t == 'g'))
        {
        m = 7130000000;
        car_name = "Porsche 911 Carrera";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'H') || (t == 'h'))
        {
        m = 8500000000;
        car_name = "Porsche 911 Targa";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'I') || (t == 'i'))
        {
        m = 13420000000;
        car_name = "Porsche 911 Turbo";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else if( (t == 'J') || (t == 'j'))
        {
        m = 20200000000;
        car_name = "Porsche 911 GT2 RS";
        printf("Your car: %s\n",car_name);
        printf("Price_1: %.5Lf VND", m);
        }
    else
        {
        printf("Please try again!!!");
        }
}
void car_colour(int c)
{
//Black,White,Grey,Brown,Cream,Red,Green,Yellow"
long double m_1;
char *car_colour;
if(c == 1)
{
    m_1 = 283500000;
    car_colour = "Black";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 2)
{
    m_1 = 283500000;
    car_colour = "White";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 3)
{
    m_1 = 297500000;
    car_colour = "Grey";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 4)
{
    m_1 = 297500000;
    car_colour = "Brown";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 5)
{
    m_1 = 297500000;
    car_colour = "Cream";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 6)
{
    m_1 = 318280225;
    car_colour = "Red";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 7)
{
    m_1 = 318280225;
    car_colour = "Green";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else if(c == 8)
{
    m_1 = 318280225;
    car_colour = "Yellow";
    printf("Your car colour: %s\n", car_colour);
    printf("Price: %.5Lf VND", m_1);
}
else
{
    printf("Sorry we do no have this option!\n");
    printf("Please try again");
}
}
long double car_colour_price(int c)
{
    long double m_1;
    if(c == 1)
{
    m_1 = 283500000;
}
    else if(c == 2)
{
    m_1 = 283500000;
}
    else if(c == 3)
{
    m_1 = 297500000;
}
    else if(c == 4)
{
    m_1 = 297500000;
}
    else if(c == 5)
{
    m_1 = 297500000;
}
else if(c == 6)
{
    m_1 = 318280225;
}
else if(c == 7)
{
    m_1 = 318280225;
}
else if(c == 8)
{
    m_1 = 318280225;
}
return m_1;
}
void promotion(int a)
{
    if(a == 171218)
{
    printf("Congratulations, you have the 25 discount to your total bill :3 \n");
}
    else
{
    printf("Sorry, your promotion is not valid\n");
    printf("Please check again or contact to our sellers\n");
}
}
double final_price(long double m, long double m_1)
{
    long double f_m = m + m_1;
    return f_m;
}
void price_after_discount(int a, long double b)
{
    float d = 0.25;
    if(a == 171218)
    {
        b = b - b * d;
        printf("\nThe price after discount is: %.5Lf\n", b);
    }
}
int main()
{
    char t;
    int c,a;
    long double m,m_1;
    printf("Please enter the type of car you fond of:\n");
    t = getchar();
    car_raw_price(t);
    printf("\nPlease choose your car's colour:\n");
    scanf("%d",&c);
    car_colour(c);
    printf("\nEnter your promotion code:\n");
    scanf("%d",&a);
    promotion(a);
    m = car_price(t);
    m_1 = car_colour_price(c);
    long double f_m = final_price(m,m_1);
    printf("The final price you have to pay is:\n");
    printf("%.5Lf VND",f_m);
    price_after_discount(a,f_m);
    printf("Done...");
    return 0;
}
