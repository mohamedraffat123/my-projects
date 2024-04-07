/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.projects;

/**
 *
 * @author MF
 */
class mather {
    private static  int count;
    private int id;
    private String name;
    private float balance;
    private String m;
    private float mjj=balance;
    public mather(){
        balance =0;
        count++;
    }
    public mather (String n,int i,float b){
        name=n;
        id=i;
        balance=b;
        count++;
    }
    public void  deposite (float f){
        balance=balance+f;
    }
    public void withdraw (float q){
        if(balance>q )
            balance=balance-q;  
        else
            System.out.println( "you are so poor");
    }

    public void setBalance(float balance) {
        this.balance = balance;
    }

    public float getBalance() {
        return balance;
    }
    
    
    public String toString(){
        
        
        return "name is " +m+" id is "+id+" your balance is "+ balance ;       
                
                
    }

   
   
    
}
