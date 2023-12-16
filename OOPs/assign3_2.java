// Parent class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Child class inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

// Grandchild class inheriting from Dog
class Bulldog extends Dog {
    void guard() {
        System.out.println("The bulldog guards the house.");
    }
}

public class assign3_2 {
    public static void main(String[] args) {
        // Create an object of Bulldog
        Bulldog bulldog = new Bulldog();

        // Call methods from each level of inheritance
        bulldog.eat();   // Method from Animal class
        bulldog.bark();  // Method from Dog class
        bulldog.guard(); // Method from Bulldog class
    }
}
