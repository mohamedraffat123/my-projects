/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package project11;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class child1 extends parent{
    private int age;
    
    public child1 (String name, int age){
        super(name);
        this.age=age;
    }
    @Override
    public void print_info(){
        System.out.println("name is "+name +" age is "+age);
    }
    
    
}
