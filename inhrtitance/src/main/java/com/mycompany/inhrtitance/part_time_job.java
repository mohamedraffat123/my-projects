/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.inhrtitance;

/**
 *
 * @author MF
 */
public class part_time_job extends programmer {

    private int no_of_work_hour;

    private int salary;

    public part_time_job(String name, int id, String add, int y_expe, int money) {
        super(name, id, add, y_expe);
        salary = money;
    }

    public void setNo_of_work_hour(int no_of_work_hour) {
        this.no_of_work_hour = no_of_work_hour;
    }

    public int getNo_of_work_hour() {
        return no_of_work_hour;
    }

    @Override
    public int calculate_salary() {
        int z = Y_experiance * salary * no_of_work_hour;
        return z;
    }

    @Override
    public String toString() {
        return " name " + full_name + " id " + ID + " part_time_job{ " + " no_of_work_hour= " + no_of_work_hour + "  salary per hour is " + salary + " and your level is " + super.define_experiance_level() + " you salary total is " + this.calculate_salary();
    }

}
