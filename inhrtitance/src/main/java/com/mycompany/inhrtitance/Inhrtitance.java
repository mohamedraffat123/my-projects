/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */
package com.mycompany.inhrtitance;

/**
 *
 * @author MF
 */
import java.util.Scanner;

public class Inhrtitance {

    public static void main(String[] args) {
        int c, r, e, o, k, l, p;
        Scanner n = new Scanner(System.in);
        System.out.println("enter the years of the experiance");
        r = n.nextInt();
        System.out.println("enter the salary per hour");
        e = n.nextInt();
        part_time_job x = new part_time_job("mohamed", 20031, "egypt", r, e);
        System.out.println("plaese enter the no. of workhours");
        c = n.nextInt();
        x.setNo_of_work_hour(c);
        System.out.println(x);
        System.out.println(" eneter youe salary per month");
        o = n.nextInt();
        System.out.println("eneter the years of the experiance");
        p = n.nextInt();
        full_time_job a = new full_time_job("mohamed", 20031, "eygpt", p, o);
        System.out.println("enter the overtime");
        k = n.nextInt();
        a.setOvertime(k);
        System.out.println("enter the no. of over time");
        l = n.nextInt();
        a.setNo_overtime(l);
        System.out.println(a);
    }
}
