/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.inhrtitance;

/**
 *
 * @author MF
 */
public abstract class programmer extends person {

    protected int Y_experiance;
    protected int salary;

    public programmer(String name, int id, String add, int y_expe) {
        super(name, id, add);
        Y_experiance = y_expe;

    }

    public abstract int calculate_salary();

    public String define_experiance_level() {

        if (Y_experiance > 1 && Y_experiance < 5) {
            return "junior";
        } else if (Y_experiance > 5) {
            return "senior";
        } else {
            return " fresh graduate";
        }
    }

}
