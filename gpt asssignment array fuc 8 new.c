//8. WAP to reverse a string and check that the string is palindrome or not
//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage



#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int isPalindrome(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);
    reverseString(str);
    printf("Reversed String: %s\n", str);
    printf("The string is %sa palindrome.\n", isPalindrome(str) ? "" : "not ");
    return 0;
}




#include <stdio.h>

typedef struct {
    int empno;
    char empname[100];
    char address[200];
    int age;
} Employee;

void displayEmployee(Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    Employee emp = {1, "John Doe", "1234 North Street, Anytown", 30};
    displayEmployee(emp);
    return 0;
}






#include <stdio.h>

typedef struct {
    int empno;
    char empname[100];
    char address[200];
    int age;
} Employee;

void displayEmployee(Employee emp) {
    printf("\nEmployee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    Employee emps[5] = {
        {1, "John Doe", "1234 North Street, Anytown", 30},
        {2, "Jane Smith", "5678 South Avenue, Anycity", 28},
        {3, "Alice Johnson", "9101 East Road, Anyville", 35},
        {4, "Bob Brown", "2345 West Lane, Anystate", 40},
        {5, "Charlie Davis", "6789 Central Blvd, Anyplace", 25}
    };

    for (int i = 0; i < 5; i++) {
        displayEmployee(emps[i]);
    }
    return 0;
}

