#include<stdio.h>

int main(){
    int Mat, Sci, Phy, Chem, Eng, ger, Total;
    float per;
    printf("Enter marks obtined in Math, SCi, Phy, Chem, Eng\n");
    scanf("%d %d %d %d %d", &Mat, &Sci, &Phy, &Chem, &Eng);
    Total=Mat+Sci+Phy+Chem+Eng;
    per=Total/5.0;
    printf("Your Total is =%d\n", Total);
    printf("your Percentage is %f\n", per);
    if (per>90){
        ger=5;
    }
    else if(per>80){
        ger=3;
    }
    else if (per>70)
    {
       ger=2;
    }
    
    switch (ger)
    { case 5:
    printf("GOOD SHABASH\n");
        break;
    case 3:
    printf("padhle beta mauka hai abhi\n");
    break;
    case 2:
    printf("Are Padhlo Re Nahi to Kuch Nahi Honga Tumhara!!!");
    break;
    default:
    printf("Satyanash!!!");
        break;
    }
    
    return 0;
}