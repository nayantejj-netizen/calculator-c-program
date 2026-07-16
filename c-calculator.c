/*🛠️ Project: Build a "Function-Based Calculator": write separate functions add
, subtract, multiply, divide (each taking two doubles and returning a double), 
and a main that takes two numbers and an operator symbol, then calls the correct
function based on that symbol (use switch from Day 6 to decide which function to call).*/

#include <stdio.h>
double add(double a,double b){
    return a + b;
}
double subtract(double a,double b){
    return a - b;
}
double multiply(double a,double b){
    return a * b;
}
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

// UI Function
void showMenu() {
    printf("\n====================================\n");
    printf("       FUNCTION CALCULATOR \n");
    printf("====================================\n");
    printf("1. + Addition\n");
    printf("2. - Subtraction\n");
    printf("3. * Multiplication\n");
    printf("4. / Division\n");
    printf("5. X Exit\n");
    printf("====================================\n");
}
int main (){
    
    double num1,num2,result;
    int choice;
    
while(1){
    showMenu();
    
    printf("Enter your choice:");
    scanf("%d",&choice);
    
    if(choice == 5){
        printf("Exiting Calculator... Thank you!\n");
            break;
    }
    
    printf("Enter Your First number:");
    scanf("%lf",&num1);
    
    printf("Enter Your Second number:");
    scanf("%lf",&num2);
    
    switch(choice){
        
        case 1:
              result = add(num1,num2);
              printf("Result: %.2lf\n",result);
              break;
        case 2:
              result = subtract(num1,num2);
              printf("Result: %.2lf\n",result);
              break;
              
        case 3:
              result = multiply(num1,num2);
              printf("Result: %.2lf\n",result);
              break;
        
        case 4:
              if(num2 == 0){
                  printf("Cannot divide by zero!\n");
                  break;
              }
              
                  result = divide(num1,num2);
                   printf("Result: %.2lf\n",result);
                   break;
              
        
        default:
             printf("⚠️ Invalid choice! Try again.\n");
        
    }
    
    
    
    // Created by NAYAN TEJ J
    
}
    
    return 0;
    
    
    }
