/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject7;

/**
 *
 * @author MF
 */
public class car {
    private int car_tire;
    private String name ;

    public int getCar_tire() {
        return car_tire;
    }

    public String getName() {
        return name;
    }

    public void setCar_tire(int car_tire) {
        this.car_tire = car_tire;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void display(){
        System.out.println("iam the car");
        System.out.println("i have the "+car_tire+"wheels");
    }
    
}
