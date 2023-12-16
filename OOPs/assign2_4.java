class Arithmetic {
    int add(int a, int b) {
        return a + b;
    }
    
    double multiply(double x, double y) {
        return x * y;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
    
    double divide(double x, double y) {
        if (y != 0) {
            return x / y;
        } else {
            System.out.println("Cannot divide by zero.");
            return Double.NaN;
        }
    }
}

public class assign2_4 {
    public static void main(String[] args) {
       // Using an anonymous object to perform arithmetic operations
       int sum = new Arithmetic().add(5, 3);
       double product = new Arithmetic().multiply(4.0, 6.0);

       // Display the results
       System.out.println("Sum: " + sum);
       System.out.println("Product: " + product);
       
       // Using the same anonymous object for additional operations
       int difference = new Arithmetic().subtract(10, 2);
       double division = new Arithmetic().divide(20.0, 4.0);

       // Display the additional results
       System.out.println("Difference: " + difference);
       System.out.println("Division: " + division);  
    }
}
