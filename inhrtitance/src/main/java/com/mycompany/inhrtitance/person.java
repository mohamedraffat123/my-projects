/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.inhrtitance;

import java.util.logging.Logger;

/**
 *
 * @author MF
 */
public class person {

    protected String full_name;
    protected int ID;
    protected String address;

    public person(String name, int id, String add) {
        full_name = name;
        ID = id;
        address = add;
    }

    public String toString() {
        return "person{" + "full_name=" + full_name + ", ID=" + ID + ", address=" + address + '}';
    }

    public void setFull_name(String full_name) {
        this.full_name = full_name;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getFull_name() {
        return full_name;
    }

    public int getID() {
        return ID;
    }

    public String getAddress() {
        return address;
    }

}
