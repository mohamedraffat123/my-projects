/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject8;

/**
 *
 * @author MF
 */
public class person {
    String full_name;
    long ID;
    String address;

    public person(String full_name, long ID, String address) {
        this.full_name = full_name;
        this.ID = ID;
    }
    public long getID() {
        return ID;
    }

    public String getfull_name(){
           return full_name;
       }

    public String getAddress() {
        return address;
        
    }
    public void setFull_name(String h){            
    full_name=h;
    }

    public void setAddress(String address) {
        this.address = address;
    }
    public void setID(long j){
        ID=j;
    }
    
    public void display(){
        System.out.println(" the name is "+full_name);
        System.out.println("the ID is "+ID);
        System.out.println(" the address is "+address);
    }
    
    
    
    
    }
    
    
    
    
    
    

