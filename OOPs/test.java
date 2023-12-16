import java.util.*;
class test
{
    public static void main(String args[])
    {
        // Creating a HashMap
         
    HashMap<String , String> languages = new HashMap<>();
    languages.put("Java", "Enterprise");
    languages.put("Python", "ML/AI");
    languages.put("JavaScript", "Frontend");
    System.out.println("HashMap: " + languages);

    // iterating through key/value mappings
Iterator hmIterator = languages.entrySet().iterator();


while (hmIterator.hasNext()) {
 
  Map.Entry mapElement
      = (Map.Entry)hmIterator.next();
 

  // Printing mark corresponding to string entries
  System.out.println(mapElement.getKey() + " : "
                     + languages);
    } 
}
}