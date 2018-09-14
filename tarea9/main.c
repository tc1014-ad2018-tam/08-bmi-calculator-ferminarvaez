#include <stdio.h>

double Calculate_metric_IBM(double kg, double m){
    double result;
    result= kg/(m*m);
    return  result;
}

double Calculate_imperial_IBM(double pound, double ft){
    double result,kg,m;
    kg=pound*0.453592;
    m=ft*0.3048;
    result=kg/(m*m);
    return  result;
}

double Calculate_imperial_IBM_2(double pound, double inc){
    double result,kg,m;
    kg=pound*0.453592;
    m=inc*12.00;
    result=kg/(m*m);
    return  result;
}


double IBM_Categories(double IBM){
    if (IBM<18.50){
    printf("Go to see a doctor, you are under your weight");
    }
    else if(IBM>= 18.50 && IBM<25.00){
    printf("You are fine");
    }
    else if (IBM>=25.00 && IBM<30.00){
    printf("Take care of you. You are overweight");
    }
    else if (IBM>=35.00 && IBM<40){
    printf("You have obesity");
    }
}
int main() {
    unsigned short int option=0;
    double w=0.0, h=0.0, IBM;

    printf("This program is going to help you to get your BMI");
    printf("What system would you like to use? \n Enter 1 to use the metric units \n Enter 2 to use the imperial units \n Enter 3 to use imperial units (inches) \n");
    scanf("%i",&option);
    switch(option){
        case 1:
            do {
                printf("\nGive me your height in meters: ");
                scanf("%lf", &h);
            }while(h<=0);
                 printf("\nGive me your weight in kilograms: ");
                 scanf("%lf",&w);
                 IBM=Calculate_metric_IBM(w,h);
                 printf("\nYour IBM is: %lf \n",IBM);
                 IBM_Categories(IBM);
            break;

        case 2:
            do {
                printf("\nGive me your height in feets: ");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nGive me your weight in pounds: ");
            scanf("%lf",&w);

            IBM=Calculate_imperial_IBM(w,h);
            printf("\nYour IBM is: %lf \n",IBM);
            IBM_Categories(IBM);
            break;
            
        case 3:
            do {
                printf("\nGive me your height on inches: ");
                scanf("%lf", &h);
            }while(h<=0);
            printf("\nGive me your weight in pounds: ");
            scanf("%lf",&w);

            IBM=Calculate_imperial_IBM_2(w,h);
            printf("\nYour IBM is: %lf \n",IBM);
            IBM_Categories(IBM);
            break;

        default:
            printf("Enter something valid please");
            break;

    }

    return 0;
}