class MyCalculator {
    // Public method that uses a private method to perform addition
    int add(int a, int b) {
        return performAddition(a, b);
    }

    // Public method that uses a private method to perform subtraction
    int subtract(int a, int b) {
        return performSubtraction(a, b);
    }

    // Private method for addition
    private int performAddition(int a, int b) {
        return a + b;
    }

    // Private method for subtraction
    private int performSubtraction(int a, int b) {
        return a - b;
    }
}

public class assign2_6 {
    public static void main(String[] args) {
        // Create an instance of the MyCalculator class
        MyCalculator calculator = new MyCalculator();

        // Call public methods that use private methods internally
        int sum = calculator.add(5, 3);
        //int sum = calculator.performAddition(5, 3);
        int difference = calculator.subtract(10, 4);
        //int difference = calculator.performSubtraction(10, 4);

        // Display the results
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
    }
}
