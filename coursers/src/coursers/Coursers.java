/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package coursers;

/**
 *
 * @author MF
 */ 
import java.util.Scanner;
public class Coursers {
    
  
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        System.out.println("enter the size if the stack");
        int n,c;
        n=input.nextInt();
      new_stack i=new new_stack(n);
      while(true){
          System.out.println("enter the num '1' if you want to push and '2' if you want to pop and if you want to exit click 0 and click '3' to show data \n"+
                  "if you want to change the size click '4'");
          c=input.nextInt();
          if(c==1){
          System.out.println("enter the number that you want to push");
          i.push(input.nextInt());
          } 
          else if(c==2){
              System.out.println("the number that poped is "+i.pop());
          }
          else if(c==0){
              break;
          }
          else if(c==3){
            i.show();
          }
          else if(c==4){
              n=input.nextInt();
          }
      }
        
        
    }
    
}
