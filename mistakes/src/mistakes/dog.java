/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mistakes;

/**
 *
 * @author MF
 */
public class dog implements speaker{
      @Override
     public void  speak(){
          System.out.println(" iam dog");
     }
     @Override
    public void announce (String str){
         System.out.println(str); 
    }
    
}
