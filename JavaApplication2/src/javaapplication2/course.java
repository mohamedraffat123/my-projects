/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;

/**
 *
 * @author MF
 */
public class course {
    private int midterm;
    private int lab;
    private int Final;
    
    public course(int midterm,int lab,int Final){
        this.midterm=midterm;
        this.lab=lab;
        this.Final=Final;
    }
    
    
    public int add_values(){
        return midterm+lab+Final;
    }
    
}
