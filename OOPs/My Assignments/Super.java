
//Use of super keyword to refer to intermediate parent class
class Animal
{
   
        String color= "white";
}

class Dog extends Animal
{
    void paint()
    {
       String paint = "black";

    }

    void display()
    {
        System.out.println(super.color);
        System.out.println("Black");
    }
}

/**
 * Super
 */
public class Super {

    public static void main(String[] args) {
        Dog obj = new Dog();
        obj.display();
    }
}
