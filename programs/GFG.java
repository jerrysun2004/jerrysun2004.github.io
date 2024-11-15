// Java Program to Demonstrate TreeMap
// using the Default Constructor
  
// Importing required classes
import java.util.*;
import java.util.concurrent.*;
  
// Main class
// TreeMapImplementation
public class GFG {
  
    // Method 1
    // To show TreeMap constructor
    static void Example1stConstructor()
    {
        // Creating an empty TreeMap
        TreeMap<Integer, String> tree_map
            = new TreeMap<Integer, String>();
  
        // Mapping string values to int keys
        // using put() method
        tree_map.put(10, "Geeks");
        tree_map.put(15, "4");
        tree_map.put(20, "Geeks");
        tree_map.put(25, "Welcomes");
        tree_map.put(30, "You");
  
        // Printing the elements of TreeMap
        System.out.println("TreeMap: " + tree_map);
        System.out.println(tree_map.floorKey(30));
        System.out.println(tree_map.size());
        System.out.println(tree_map.containsValue(3));
        System.out.println(tree_map.lastEntry());
        System.out.println(tree_map.remove(10));
        System.out.println("TreeMap: " + tree_map);
    }
  
    // Method 2
    // Main driver method
    public static void main(String[] args)
    {
        System.out.println("TreeMap using "
                           + "TreeMap() constructor:\n");
        
        // Calling constructor
        Example1stConstructor();
    }
}