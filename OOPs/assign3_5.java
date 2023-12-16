// Parent class
class Vehicle {
    void start() {
        System.out.println("Vehicle starts.");
    }
}

// Child class (subclass) inheriting from Vehicle
class Car extends Vehicle {
    // Override the start method
    void start() {
        System.out.println("Car starts with a key.");
    }

    void stop() {
        System.out.println("Car stops.");
    }
}

// Child class (subclass) inheriting from Vehicle
class Motorcycle extends Vehicle {
    // Override the start method
    void start() {
        System.out.println("Motorcycle starts with a kick.");
    }

    void accelerate() {
        System.out.println("Motorcycle accelerates.");
    }
}

public class assign3_5 {
    public static void main(String[] args) {
        // Create objects of Vehicle, Car, and Motorcycle classes
        Vehicle vehicle = new Vehicle();
        Vehicle car = new Car();
        Vehicle motorcycle = new Motorcycle();

        // Call the start method on different objects
        vehicle.start();     // Calls the method from the Vehicle class
        car.start();         // Calls the overridden method from the Car class
        motorcycle.start();  // Calls the overridden method from the Motorcycle class
    }
}
