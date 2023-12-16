class MethodOverloadingDemo {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two double values
    double add(double x, double y) {
        return x + y;
    }

    // Method to concatenate two strings
    String add(String str1, String str2) {
        return str1 + str2;
    }
}

public class assign2_5 {
    public static void main(String[] args) {
        MethodOverloadingDemo demo = new MethodOverloadingDemo();

        // Call the overloaded methods
        int sum1 = demo.add(5, 3);
        int sum2 = demo.add(2, 4, 6);
        double sum3 = demo.add(3.5, 2.5);
        String concatenatedString = demo.add("Hello ", "World!");

        // Display the results
        System.out.println("Sum of two integers: " + sum1);
        System.out.println("Sum of three integers: " + sum2);
        System.out.println("Sum of two doubles: " + sum3);
        System.out.println("Concatenated string: " + concatenatedString);
    }
}
