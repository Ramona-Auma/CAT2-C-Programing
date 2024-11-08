//program to define a structure named employee
/*program to define a structure named employee
Author: Ramona Auma 
Reg No: CT101/G/21863/24
Date: 7/11/2024
*/

// Define the employee structure
struct employee {
    char name[25];
    char department[20];
    int id;
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize a variable 
    struct employee emp1 = {
        "John Doe",        // name of employee
        "Human resources", // department
        12345,              // id
        55000.50,             // salary 
        "john.doe@company.com",  // email
    };
    //printing employee data
    printf("Name: %s\n", emp1.name);
    printf("Department: %s\n", emp1.department);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary); 
    printf("Email: %s\n", emp1.email);

    return 0;
}


