/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package linked.list;

/**
 *
 * @author MF
 */
public class LinkedList {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        List l = new List();
        l.add(10);
        l.add(20);
        l.add(30);
        l.add(40);
        l.add(50);
        l.add(60);
        l.add(70);
       // l.add_first(5);
        l.insert(100, 70);
       l.insert(25, 20);
   l.delete(50);
   l.delete(60);
  l. replace(99,70);
        l.print();
    }

}
