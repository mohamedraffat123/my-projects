/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication6;

/**
 *
 * @author MF
 */
import java.util.Scanner;

public class parent {

    child[] b = new child[3];
    Scanner input = new Scanner(System.in);

    public parent(child[] b) {
        this.b = b;
    }

    public void informaatin_child() {
        int q;
        String n, w;

        for (int i = 0; i < b.length; i++) {
            System.out.println("child no." + (i + 1));
            System.out.println("enter your name");
            n = input.next();
            System.out.println("plesae enter your age ");
            q = input.nextInt();
            System.out.println("enter your gender");
            w = input.next();

            b[i] = new child(n, q, w);
        }

    }

  public void getchildren (){
      
      
      for(int i=0;i<b.length;i++){
          System.out.println("child no."+(i+1));
          System.out.println("the name is ");
          System.out.println( b[i].getName());
          System.out.println("the age is ");
          System.out.println( b[i].getAge());
          System.out.println("the gender is");
          System.out.println(b[i].getGender());
          System.out.println("-----------------------");
      }
  }

    

}
