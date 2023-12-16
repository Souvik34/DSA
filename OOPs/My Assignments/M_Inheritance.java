

class Animal
{
    void eat()
    {
        System.out.println("I am Animal");
    }
}

class Dog extends Animal
{
    void bark()
    {
        System.out.println("I am dog");
    }
}

class babydog extends Dog
{
    void weep()
    {
        System.out.println("I am baby dog");
    }
}

/**
 * M_Inheritance
 */
public class M_Inheritance {

    public static void main(String[] args) 
    {
        babydog obj = new babydog();
        obj.weep();
        obj.eat();
        obj.bark();
    }
}