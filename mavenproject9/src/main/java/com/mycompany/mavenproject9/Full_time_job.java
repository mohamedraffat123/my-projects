/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
public class Full_time_job  extends programmer {

    private int em_salary;
private int salary;

    public Full_time_job(String n,String a, int i, int y) {
        super(n, i,a, y);
    }
    
   
    
    public  int calcilate_salary(){
        
         
        return em_salary;
    }
    
     public int full_time_job(int s,int n){
       return y_experiance*s*n;
   } 
}
