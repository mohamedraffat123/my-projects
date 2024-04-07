/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stack;

/**
 *
 * @author MF
 */
public class reverser {
    private String input;
    private String output;
    
    public reverser(String input){
    this.input=input;
    }
    public String doRev(){
    part2 stack=new part2(input.length());
    for(int i=0;i<input.length();i++){
    char ch=input.charAt(i);
    stack.push(ch);
    }
    output="";
    while(!stack.isEmpty()){
        char c=stack.pop();
        output+=c;
    }
      return output;
}
}