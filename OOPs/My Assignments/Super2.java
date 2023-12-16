
//Use of super() is to invoke parent class constructor
// here not ot write void and write class name there

class Animal
{
    Animal()
    {
        System.out.println("Animal is created");
    }
}
class Dog extends Animal
{
    Dog()
    {
        super();
        System.out.println("Dog is created");
    }
}

/**
 * Super2
 */
public class Super2 {

    public static void main(String[] args) {
        Dog obj = new Dog();
        
    }
}