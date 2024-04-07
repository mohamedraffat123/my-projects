/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.inhrtitance;

/**
 *
 * @author MF
 */
public class full_time_job extends programmer {

   
    private int overtime;
    private int no_overtime;
    private int salary;

    public full_time_job(String name, int id, String add, int y_expe, int money) {
        super(name, id, add, y_expe);
        salary = money;
    }

    public int getOvertime() {
        return overtime;
    }

    public void setOvertime(int overtime) {
        this.overtime = overtime;
    }

    public int getNo_overtime() {
        return no_overtime;
    }

    public void setNo_overtime(int no_overtime) {
        this.no_overtime = no_overtime;
    }

    @Override
    public int calculate_salary() {
        int z = (Y_experiance * salary) + (overtime * no_overtime);
        return z;
    }

    @Override
    public String toString() {
        return "name " + full_name + " id " + ID + " full_time_job{ "+ ", overtime= " + overtime + ", no_overtime= " + no_overtime + '}' + " salary per month is " + salary + " your salary now is " +this.calculate_salary() + " your level is " + super.define_experiance_level();
    }

}
