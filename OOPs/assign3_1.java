public class assign3_1 {
    private String name;
    private int age;

    // Constructor with no parameters
    public assign3_1() {
        this.name = "John Doe";
        this.age = 30;
    }

    // Constructor with name parameter
    public assign3_1(String name) {
        this.name = name;
        this.age = 30;
    }

    // Constructor with name and age parameters
    public assign3_1(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Display method to print the person's information
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        // Creating objects using different constructors
        assign3_1 person1 = new assign3_1();
        assign3_1 person2 = new assign3_1("Alice");
        assign3_1 person3 = new assign3_1("Bob", 25);

        // Displaying information for each person
        System.out.println("Person 1:");
        person1.display();

        System.out.println("\nPerson 2:");
        person2.display();

        System.out.println("\nPerson 3:");
        person3.display();
    }
}
