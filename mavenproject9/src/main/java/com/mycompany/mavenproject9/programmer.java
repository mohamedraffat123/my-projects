/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject9;

/**
 *
 * @author MF
 */
public abstract class programmer  extends person {
    protected int y_experiance;
    
    
    public abstract int calcilate_salary();
         

    public programmer(String n, int i,String a ,int y) {
        super(n, i,a);
        y_experiance=y;
              
    }
    public void define_exp_level(int n){
        System.out.println(" your level :");
      if(n>1 && 5>n){
          System.out.println("juinor");
      }
      else if(n>5){
          System.out.println("senior");
      } 
      else 
            System.out.println("fresh graduate");
        
    }
    
}
