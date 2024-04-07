/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package project11;

/**
 *
 * @author MF
 */
public class child2 extends parent {
    private String school;
    public child2 (String name,String school){
        super(name);
        this.school=school;
    }
    @Override
    public void print_info(){
        System.out.println("name is "+name +" school "+school);
    }
}
