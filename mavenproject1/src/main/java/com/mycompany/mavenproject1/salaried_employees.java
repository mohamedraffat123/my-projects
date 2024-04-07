/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class salaried_employees extends employee {

    double bonus;
    double deduction;

    public salaried_employees() {

    }

    public salaried_employees(String n, int a, String ad, String nat, double s, String r, String j, double b, double d) {
        super(n, a, ad, nat, s, r, j);
        bonus = b;
        deduction = d;
    }

    @Override
    public double getSalary() {
        return salary + bonus - deduction;
    }

}
