/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.learn;

/**
 *
 * @author MF
 */
public class address {
    private String streetdd;
    private String city,state,zipcode;

    public address(String streetdd, String city, String state, String zipcode) {
        this.streetdd = streetdd;
        this.city = city;
        this.state = state;
        this.zipcode = zipcode;
    }

    
    
    
    public String getStreetdd() {
        return streetdd;
    }

    public String getCity() {
        return city;
    }

    public String getState() {
        return state;
    }

    public String getZipcode() {
        return zipcode;
    }

    public void setStreetdd(String streetdd) {
        this.streetdd = streetdd;
    }

    public void setCity(String city) {
        this.city = city;
    }

    public void setState(String state) {
        this.state = state;
    }

    public void setZipcode(String zipcode) {
        this.zipcode = zipcode;
    }

    @Override
    public String toString() {
        return "address{" + "streetdd=" + streetdd + ", city=" + city + ", state=" + state + ", zipcode=" + zipcode + '}';
    }
    
    
    
    
    
    
}
