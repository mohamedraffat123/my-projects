/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject4;

/**
 *
 * @author MF
 */
public class rectangle {

    public rectangle() {
        length = 10;
        width = 20;
    }

    public rectangle(double l, double w) {
        length = l;
        width = w;
    }

    private double length;
    private double width;

    public void set_length(double l) {
        length = l;
    }

    public void set_width(double w) {
        width = w;
    }

    public double getlength() {
        return length;
    }

    public double getwidth() {
        return width;
    }

    public double getarea() {
        return length * width;
    }
    public boolean isequal(rectangle obj2){
        if(this.length==obj2.length && this.width==obj2.width){
            return true;
        }
        else
            return false;
        
    }
}
