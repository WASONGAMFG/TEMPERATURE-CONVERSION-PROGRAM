#include <stdio.h>

int main() { 

  char choice = '\0';
  float fahreinheit = 0.0f;
  float celcius = 0.0f;

  printf("Temperature Conversion Program\n");
  printf("C. Celsius to Fahreinheit\n");
  printf("F. Fahreinheit to Celsius\n");
  printf("Is the temp in Celsius(C) or fahreinheit(F): ");
  scanf("%c", &choice);

  if(choice == 'C'){
     printf("Enter the temperature in Celsius: ");
     scanf("%f", &celcius);
     fahreinheit = (celcius * 9 / 5) + 32;
     printf("%.1f Celcius is equal to %.1f Fahreinheit\n", celcius, fahreinheit);
  }
  else if(choice == 'F'){
     printf("Enter your temperature in Fahreinheit: ");
     scanf("%f", &fahreinheit);
     celcius = (fahreinheit - 32) * 5 / 9;
     printf("%.1f Fahreinheit is equal to %.1f Celcius\n", fahreinheit, celcius);
  }
  else{
    printf("Invalid choice please enter C or F\n");
  }

  
   

    return 0;
    }