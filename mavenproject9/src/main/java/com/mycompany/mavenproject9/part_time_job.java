/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
public class part_time_job  extends programmer {

    private int em_salary;
    private int salary;
    private int no_work;
    public part_time_job(String n, int i,String a, int y) {
        super(n, i, a,y);
    }

    public  int calcilate_salary(){
        
         
        return em_salary;
    }
    
   public int part_time_job(){
       return y_experiance*salary*no_work;
   }
    
   
    
    
     
    
    
    
    
    
}
