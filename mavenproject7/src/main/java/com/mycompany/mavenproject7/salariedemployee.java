/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject7;

/**
 *
 * @author MF
 */
public class salariedemployee extends employee {
    private  double bonus;
    private double panishment;

    public double getBonus() {
        return bonus;
    }

    public double getPanishment() {
        return panishment;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public void setPanishment(double panishment) {
        this.panishment = panishment;
    }
    
     
    

    public salariedemployee(String n, int f, double d, String q,double e,double t) {
        super(n, f, d, q);
       bonus=e;
        panishment=t;
    }
    
    @Override
    public double getSalary() {
        return salary+bonus-panishment;
    }
    void display1(){
          System.out.println("the name is : " + name);
        System.out.println("the number of the employee is " + number);
        System.out.println("the salary of the employee is " + (salary+bonus-panishment));
        System.out.println("the country is " + country);
        
        
        
    }
}
