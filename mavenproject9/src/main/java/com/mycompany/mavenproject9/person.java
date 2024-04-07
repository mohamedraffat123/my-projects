/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
public class person {
    private String name;
    private int id;
    private String address;
    
    
    
    public person(String n,int i,String a){
        name=n;
        id=i;
        address=a;
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public String getAddress() {
        return address;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setAddress(String address) {
        this.address = address;
    }
    @override
    public String toString(){
    return " the name is "+ name+" and the id "+id+" address "+ address;
    }
    
    
    
    
}
