/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.mavenproject4;

/**
 *
 * @author MF
 */
public class Mavenproject4 {

    public static void main(String[] args) {
//        rectangle r1=new rectangle();
//              System.out.println(r1.getlength());
//              System.out.println(r1.getwidth());
//rectangle r2= new rectangle(30,60);
//       System.out.println(r2.getlength());
//              System.out.println(r2.getwidth());
//        car c1;
//        c1 = new car();
//        System.out.println(c1.get_maker());
//        System.out.println(c1.get_model());
//
//        car c2;
//        c2 = new car("bmw", 2029);
//        System.out.println(c2.get_maker());
//        System.out.println(c2.get_model());

        rectangle r1;
        rectangle r2;
        r1 = new rectangle(100, 50);
        r2 = new rectangle(100, 50);
        if (r1.isequal(r2)) {
            System.out.println("the two object are the same");
        } else {
            System.out.println("the two object are different");
        }

    }

}
