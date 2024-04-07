/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class employee extends tefa {

    double salary;
    String rank;
    String job;

    public employee() {

    }

    public employee(String n, int a, String ad, String nat, double s, String r, String j) {
        super(n, a, ad, nat);
        salary = s;
        rank = r;
        job = j;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void setRank(String rank) {
        this.rank = rank;
    }

    public void setJob(String job) {
        this.job = job;
    }

    public  double getSalary() {
        return salary;
    }

    public String getRank() {
        return rank;
    }

    public String getJob() {
        return job;
    }

    @Override
    public void print_all_detail() {
        super.print_all_detail();
        System.out.println("job:" + job + "\n rank:" + rank + "\n salary:" + salary);
    }

}
