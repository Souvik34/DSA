class Student {
    // Static data member (class variable)
    static int totalStudents = 0;

    // Instance variables
    String name;
    int rollNumber;

    // Constructor
    Student(String name) {
        this.name = name;
        this.rollNumber = ++totalStudents; // Assign a unique roll number to each student
    }

    // Static method to get the total number of students
    static int getTotalStudents() {
        return totalStudents;
    }

    // Instance method to display student information
    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
    }
}

public class assign2_1 {
    public static void main(String[] args) {
        // Create instances of the Student class
        Student student1 = new Student("Alice");
        Student student2 = new Student("Bob");
        Student student3 = new Student("Charlie");

        // Display information for each student
        student1.displayInfo();
        student2.displayInfo();
        student3.displayInfo();

        // Access the static data member using the class name
        System.out.println("Total Students: " + Student.getTotalStudents());
    }
}
