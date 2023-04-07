#include <stdio.h>

// function to calculate the simple interest
float calculateSimpleInterest(float principle, float rate, float time) {
    float interest;
    if (rate == 12.0) {
        interest = principle * rate * time / 100.0;
    } else {
        interest = principle * rate * time / 100.0;
    }
    return interest;
}

int main() {
    float principle, rate, time, interest;
    int isSeniorCitizen;

    // get input from user
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Are you a senior citizen? (0 for no, 1 for yes): ");
    scanf("%d", &isSeniorCitizen);

    // calculate interest
    if (isSeniorCitizen) {
        rate = 12.0; // 12% rate of interest for senior citizens
    } else {
        rate = 10.0; // 10% rate of interest for other customers
    }
    interest = calculateSimpleInterest(principle, rate, time);

    // print output
    printf("Principle amount: %.2f\n", principle);
    printf("Rate of interest: %.2f%%\n", rate);
    printf("Time (in years): %.2f\n", time);
    printf("Simple interest: %.2f\n", interest);

    return 0;
}

