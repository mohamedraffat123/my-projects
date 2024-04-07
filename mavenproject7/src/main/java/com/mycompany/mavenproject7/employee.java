/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject7;

/**
 *
 * @author MF
 */
class employee {

    String name;
    int number;
    double salary;
    String country;

    public employee(String n, int f, double d, String q) {
        name =n;
         number = f;
         salary=d;
         country =q;
    }

   

    public String getName() {
        return name;
    }

    public int getNumber() {
        return number;
    }

    public double getSalary() {
        return salary;
    }

    public String getCountry() {
        return country;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void setCountry(String country) {
        this.country = country;
    }

    public void display() {
        System.out.println("the name is : " + name);
        System.out.println("the number of the employee is " + number);
        System.out.println("the salary of the employee is " + salary);
        System.out.println("the country is " + country);

    }
}
