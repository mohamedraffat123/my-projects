/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package assignment;

/**
 *
 * @author MF
 */
public class Assignment {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        modified_insertion_sort a=new modified_insertion_sort(5);
        a.insert(2);
        a.insert(10);
        a.insert(6);
        a.insert(2);
        a.insert(5);
        a.insertion_sorting();
        a.display();

       
    }
    
}
