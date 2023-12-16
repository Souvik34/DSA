// Example of a final variable
class MathConstants {
    final double PI = 3.14159265359;
}

// Example of a class with final methods
class Calculator {
    // Final methods that cannot be overridden by subclasses
    final int add(int a, int b) {
        return a + b;
    }

    final int subtract(int a, int b) {
        return a - b;
    }
}

// Example of a final class
final class UtilityClass {
    // This class cannot be extended
}

public class assign2_3 {
    public static void main(String[] args) {
        // Example of using a final variable
        MathConstants constants = new MathConstants();
        System.out.println("Value of PI: " + constants.PI);

        // Example of using a class with final methods
        Calculator calculator = new Calculator();
        int sum = calculator.add(5, 3);
        System.out.println("5 + 3 = " + sum);

        int difference = calculator.subtract(10, 4);
        System.out.println("10 - 4 = " + difference);

        // Example of using a final class
        UtilityClass utility = new UtilityClass();
    }
}
