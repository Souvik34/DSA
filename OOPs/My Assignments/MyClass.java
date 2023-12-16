public class MyClass {

    // Default constructor
    public MyClass() {
        System.out.println("Default constructor");
    }

    // Parameterized constructor
    public MyClass(int a, int b) {
        System.out.println("Parameterized constructor with two parameters");
    }

    // Copy constructor
    // public MyClass(MyClass other) {
    //     this(other.a, other.b);
    //     System.out.println("Copy constructor");
    // }

    // Another parameterized constructor
    public MyClass(String s) {
        System.out.println("Parameterized constructor with one string parameter");
    }

    public static void main(String[] args) {
        MyClass myClass1 = new MyClass(); // Default constructor
        MyClass myClass2 = new MyClass(1, 2); // Parameterized constructor with two parameters
        // MyClass myClass3 = new MyClass(myClass2); // Copy constructor
        MyClass myClass4 = new MyClass("Hello"); // Parameterized constructor with one string parameter
    }
}