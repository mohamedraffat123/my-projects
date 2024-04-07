/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
public class courses {
    private int midterm;
    private int lab;
    private int Final;
    
    public courses(int m,int l,int f){
        midterm=m;
        lab=l;
        Final=f;
    }
    public int get_total(){
        return midterm+lab+Final;
    }
    
    
}
