/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject4;

/**
 *
 * @author MF
 */
public class car {

    private String maker;
    private int model;

    public car() {
        maker = "honda";
        model = 2018;

    }

    public car(String m, int mo) {
        maker = m;
        model = mo;
    }

    public void setmaker(String m) {

        if (m == "toyota" || m == "honda" || m == "mercedes") {
            maker = m;
        } else {
            System.out.println(" invalid maker");
        }
    }

    public String get_maker() {
        return maker;
    }

    public int get_model() {
        return model;
    }

}
