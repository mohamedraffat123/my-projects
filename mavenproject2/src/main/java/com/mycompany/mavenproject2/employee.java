/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.mavenproject2;

/**
 *
 * @author MF
 */
public class employee {
    private int Emp_ID;
    private String name;
    private double salary;
     private  double bonus;
     private boolean resident;
     
     public employee(){
         Emp_ID=12345;
         name="mohammed";
         salary=45000;
         bonus=50000;
         resident=false;
     }
     public employee(int id,String n){
         Emp_ID=id;
         name=n;
     }     
     public employee (int id,String n,boolean r){
         this(id,n);
         resident=r;
     }
     public employee (int  id,String n,boolean r,double v,double b){
     
     this(id,n,r);
     salary=v;
     bonus=b;
     }
     public void set_Salary(double s){
      salary=s;   
     }
     public void Set_salary(double x,double t){
        this.set_Salary(x);
         bonus=t;
       
     }
     public void Set_depart(String s){
         name =s;
     }
     public void Set_Emp_ID(int id){
         Emp_ID=id;
     }
     public void print_emp_data(){
         System.out.println("emo_id="+Emp_ID);
         System.out.println("name:"+name);
         System.out.println("salary="+salary);
         System.out.println("bonus="+bonus);
         System.out.println("resident="+resident);                
     }
     
     
     
}
