/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.learn;

/**
 *
 * @author MF
 */
public class crc {
   private String firstname,lastname;
   private address homeadd,schooladd;

    public crc(String firstname, String lastname, address homeadd, address schooladd) {
        this.firstname = firstname;
        this.lastname = lastname;
        this.homeadd = homeadd;
        this.schooladd = schooladd;
    }

   
   
   
    public String getFirstname() {
        return firstname;
    }

    public String getLastname() {
        return lastname;
    }

    public address getHomeadd() {
        return homeadd;
    }

    public address getSchooladd() {
        return schooladd;
    }

    public void setFirstname(String firstname) {
        this.firstname = firstname;
    }

    public void setLastname(String lastname) {
        this.lastname = lastname;
    }

    public void setHomeadd(address homeadd) {
        this.homeadd = homeadd;
    }

    public void setSchooladd(address schooladd) {
        this.schooladd = schooladd;
    }

    @Override
    public String toString() {
        return "crc{" + "firstname=" + firstname + ", lastname=" + lastname + ", homeadd=" + homeadd + ", schooladd=" + schooladd + '}';
    }
   
   
   
   
}
