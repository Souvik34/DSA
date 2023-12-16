// Parent class
class Person {
    String name;

    // Constructor
    Person(String name) {
        this.name = name;
    }

    void displayInfo() {
        System.out.println("Name: " + name);
    }
}

// Child class
class Employee extends Person {
    int employeeId;

    // Constructor
    Employee(String name, int employeeId) {
        super(name); // Call the constructor of the superclass (Person) with the 'name' parameter
        this.employeeId = employeeId;
    }

    void displayInfo() {
        super.displayInfo(); // Call the displayInfo() method from the superclass (Person)
        System.out.println("Employee ID: " + employeeId);
    }
}

public class assign3_3 {
    public static void main(String[] args) {
        // Create an object of the Employee class
        Employee employee = new Employee("John Doe", 12345);

        // Call the overridden displayInfo() method in the Employee class
        employee.displayInfo();
    }
}
