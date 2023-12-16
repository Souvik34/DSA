// Method Overriding

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


public class Overriding {

    public static void main(String[] args) {
        Animal obj1 = new Animal();
        obj1.eat();

        Dog obj2 = new Dog();
        obj2.eat();
    }
}
