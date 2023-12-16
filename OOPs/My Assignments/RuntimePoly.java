// Runtime Polymorphism or dynamic dispatch method

class Animal
{
    void eat()
    {
        System.out.println("I am Animal");
    }     
}

class Dog extends Animal
{
    void eat()
    {
        System.out.println("I am Dog");
    }
}


public class RuntimePoly {

    public static void main(String[] args) {
        Animal obj1 = new Dog ();
        obj1.eat();
    }
}
