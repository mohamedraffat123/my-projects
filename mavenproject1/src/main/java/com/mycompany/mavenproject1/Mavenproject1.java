/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class Mavenproject1 {

    public static void main(String[] args) {
//   student s1=new student( 5,"information_system" ,3.8,"mohamed" ,15.0 ,"emarate" , "egyption");
//    System.out.println(s1.getname());
//    System.out.println(s1.getnationality());
//        salaried_employees s1 = new salaried_employees("ahmed", 30, "obour", "eygption", 3000, "manager", "engeineer", 500, 100);
//        System.out.println(s1.getSalary());

        employee e1 = new salaried_employees ("ahmed", 30, "obour", "eygption", 3000, "manager", "engeineer",500,100);
        System.out.println(e1.getSalary());
        
    }
}
