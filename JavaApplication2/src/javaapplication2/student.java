/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class student {
    private String name;
    private int id;
    private course[] r =new course [3];
    Scanner input=new Scanner(System.in);
    public student(String name,int id){
        this.name=name;
        this.id=id;
    }
    
    public void input_course(){
        
        for(int i=0;i<3;i++){
        System.out.println("enter the degree of the course "+(i+1));
            System.out.println("the midterm");
                int p=input.nextInt();
                System.out.println("lab");
                int q=input.nextInt();
                System.out.println("Final");
                int s=input.nextInt();
                 r[i]=new course(p,q,s);
                 
        }
    }
        
        public void output_course(){
            int s=0;
            for(int i=0;i<3;i++){
              s+= r[i].add_values();
            }
            System.out.println("the total is "+s);
            System.out.println("the average is "+(float)(s/3));
            
        }
        
        
        
        
        }
    
    
    
    
    

