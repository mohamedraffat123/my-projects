/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication9;

/**
 *
 * @author MF
 */


    /**
     * @param args the command line arguments
  */
   
        // TODO code application logic here
   
    
   
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
public class ThreeButtonsPanel extends JPanel{
	 private JLabel numberLabel;
	   private JButton add, subtract, multiply;
	   private int number;
	public ThreeButtonsPanel() {
		number =1;
		add= new JButton("Add");
		add.addActionListener(new ThreeButtonsistener());
		subtract =new JButton("Subtract");
		subtract.addActionListener(new ThreeButtonsistener());
		multiply= new JButton("Multiply");
		multiply.addActionListener(new ThreeButtonsistener());
		numberLabel= new JLabel(""+number);
		
		add(numberLabel);
		add(add);
		add(subtract);
		add(multiply);
	}
	private class ThreeButtonsistener implements ActionListener{
		public void actionPerformed(ActionEvent event)
	      {
			JButton test =(JButton) event.getSource();
			String display;
			if (test == add){
				display=numberLabel.getText();
				display= ""+ (Integer.parseInt(display)+5);
				numberLabel.setText(display);
			}
			else if(test==subtract){
				display=numberLabel.getText();
				display= ""+ (Integer.parseInt(display)-5);
				numberLabel.setText(display);
			}
			else if (test== multiply){
				display=numberLabel.getText();
				display= ""+ (Integer.parseInt(display)*5);
				numberLabel.setText(display);
			}
	      }
	}
}




public class TestThreeButtons {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ThreeButtonsPanel p1= new ThreeButtonsPanel();
		JFrame frame = new JFrame("Increment / Decrement");
	      frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	      frame.getContentPane().add(p1);
	      frame.pack();
	      frame.setVisible(true);
	}
}

    
    

