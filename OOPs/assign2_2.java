class MathUtils {
    // Static method to calculate the factorial of a number
    static long factorial(int n) {
        if (n < 0) {
            throw new IllegalArgumentException("Factorial is not defined for negative numbers");
        }
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    // Static method to find the maximum of two numbers
    static int max(int a, int b) {
        return a > b ? a : b;
    }
}

public class assign2_2 {
    public static void main(String[] args) {
        // Call the factorial method from the MathUtils class
        int num = 5;
        long factorialResult = MathUtils.factorial(num);
        System.out.println("Factorial of " + num + " is: " + factorialResult);

        // Call the max method from the MathUtils class
        int x = 10, y = 7;
        int maxResult = MathUtils.max(x, y);
        System.out.println("Maximum of " + x + " and " + y + " is: " + maxResult);
    }
}
