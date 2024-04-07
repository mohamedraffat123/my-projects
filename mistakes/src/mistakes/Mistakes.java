/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package mistakes;




public class Mistakes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        speaker current;
        current =new dog();
        current.speak();
//        current=new philosopher();
//        current.speak();
        
        speaker first =new dog();
        philosopher secound=new philosopher();
         first= secound;
       ((philosopher)first).speak();
    }
    
}
