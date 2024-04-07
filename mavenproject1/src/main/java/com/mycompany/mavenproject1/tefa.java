/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author MF
 */
public class tefa {

    String name;
    int age;
    String address;
    String nationality;

    public tefa() {

    }

    public tefa(String n, int a, String ad, String nat) {
        age = a;
        name = n;
        address = ad;
        nationality = nat;

    }

    public void setname(String n) {
        name = n;
    }

    public void setage(int a) {
        age = a;
    }

    public void setaddress(String ad) {
        address = ad;
    }

    public void setnationality(String nat) {
        nationality = nat;
    }

    public String gettaddress() {
        return address;
    }

    public String getnationality() {
        return nationality;
    }

    public double getage() {
        return age;
    }

    public String getname() {
        return name;

    }

    public void print_all_detail() {
        System.out.println("Name:" + name + "\n age:" + age + "\n address:" + address + "\n nationality:" + nationality);

    }

}
