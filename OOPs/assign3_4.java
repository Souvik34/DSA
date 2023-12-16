// Parent class
class Shape {
    double calculateArea() {
        return 0.0; // Default area for a generic shape
    }
}

// Subclass Circle inheriting from Shape
class Circle extends Shape {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    // Override the calculateArea method for circles
    double calculateArea() {
        return Math.PI * radius * radius;
    }
}

// Subclass Rectangle inheriting from Shape
class Rectangle extends Shape {
    double length;
    double width;

    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Override the calculateArea method for rectangles
    double calculateArea() {
        return length * width;
    }
}

public class assign3_4 {
    public static void main(String[] args) {
        // Create objects of Circle and Rectangle classes
        Circle circle = new Circle(5.0);
        Rectangle rectangle = new Rectangle(4.0, 6.0);

        // Calculate and display the areas of shapes
        System.out.println("Area of Circle: " + circle.calculateArea());
        System.out.println("Area of Rectangle: " + rectangle.calculateArea());
    }
}
