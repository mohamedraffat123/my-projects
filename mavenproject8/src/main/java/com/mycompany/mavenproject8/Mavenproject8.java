/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.mavenproject8;

/**
 *
 * @author MF
 */
import java.util.Scanner;

public class Mavenproject8 {

    public static void main(String[] args) {
        int d, r, y;
        Scanner q = new Scanner(System.in);
        System.out.println("eneter three integer please");
        d = q.nextInt();
        r = q.nextInt();
        y = q.nextInt();
        if (r < y && d < y) {
            if (r < d) {
                System.out.println("the minimum is " + r);
                System.out.println("the maximum is " + y);
            } else {
                System.out.println("the minimum is " + d);
                System.out.println("the maximum is " + y);
            }
        } else if (d < r && y < r) {
            if (d < y) {
                System.out.println("the maximum is " + r);
                System.out.println("the minimum is " + d);
            } else {
                System.out.println("the maximum is " + r);
                System.out.println("the minimum is " + y);
            }

        } else if (y < d && r < d) {

            if (y < r) {
                System.out.println("the maximum is " + d);
                System.out.println("the minimum is " + y);
            } else {
                System.out.println("the maximum is " + d);
                System.out.println("the minimum is " + r);
            }
           

        } else {
            System.out.println("please enter the two number different and integer ");
        }
        

        
    }
}
