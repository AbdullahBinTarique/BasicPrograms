#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int maths, phy, chem, a, tot;
    float per;
    printf("Enter Values of Physics, Chemistry and Maths.\n");
    scanf("%d %d %d", &phy, &chem, &maths);
    tot=phy+chem+maths;
    per=tot/3.0;
    if(maths>=100 || phy>=100 || chem>=100)
    printf("Enter yours Marks Correctly.\n");
    else{ 
    if(per >= 40.0 && maths>=33 && chem>=33 && phy>=33)
    a=1;
    else
    a=0;
    switch(a){
    case 1:
    printf("Congratulations you have passed.\n Your Percentage is=%f", per);
    break;
    case 0:
    printf("Sorry To Say You have Failed \n Your Percentage is =%f",per);
    }
    }
    return 0;
}