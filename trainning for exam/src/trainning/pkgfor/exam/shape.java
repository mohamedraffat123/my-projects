/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package trainning.pkgfor.exam;

/**
 *
 * @author MF
 */
public abstract class shape {
    protected String color="red";
    protected boolean filled=true;
   public shape(){
   } 
  public shape( String color ,boolean filled){
      this.color=color;
      this.filled=filled;
  }
  public String get_color(){
      return color;
  }      
  public void set_color(String color){
  this.color=color;
  }
  public boolean isfiiled(){
      return filled;
  }
  public void set_filled(boolean filled){
      this.filled=filled;
  }
  public abstract double get_area();
  public abstract double get_parameter();
  
  public String toString(){
      return "the color is \n"+color+"\n the filled is "+filled;
  }
    
}
