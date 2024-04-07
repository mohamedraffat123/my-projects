/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
import java.util.Scanner;

public class student {

    private String name;
    private int id;
    private courses[] cs =new courses[100];
    Scanner s = new Scanner(System.in);

    public student(String n, int q) {
        name = n;
        id = q;
    }

    public void input_course() {
        int p, w, e;
        
        for (int i = 0; i < 3; i++) {
            System.out.println("enter the degree of the course no." + (i + 1));
            System.out.println("midterm");
            p = s.nextInt();
            System.out.println("lab");
            w = s.nextInt();
            System.out.println("Final");
            e = s.nextInt();
            cs[i] = new courses(p, w, e);
        }
    }

    public void output_course() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += cs[i].get_total();
        }
        System.out.println("sum" + sum);
        System.out.println("avearge" + (sum / 3));
    }
    
    
 

}
