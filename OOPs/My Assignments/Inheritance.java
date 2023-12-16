
// Inheritance here  all types

//Single inherance
 class Animal {
    void eat()
    {
        System.out.println("I am Animal");
    }
}

class Dog extends Animal
{
    void bark()
    {
        System.out.println("I am Dog");
    }
}

/**
 * Inheritance
 */
public class Inheritance {

    public static void main(String args[])
    {
        Dog obj = new Dog();
        obj.eat();
        obj.bark();
    }
}


