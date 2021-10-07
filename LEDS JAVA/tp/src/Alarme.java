/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author asenj
 */
import javax.swing.JTextField;

public class Alarme extends Thread{
    private JTextField    tf1;

    Alarme(JTextField _tf1) {tf1=_tf1;}

  public void run()
    {
    int i=0;
    while (ArduinoBLL.getFlag())
       {
       ArduinoBLL.setDisplay(0);
       tf1.setText(ArduinoBLL.mostraBits(ArduinoBLL.getDisplay()));
       try {Thread.sleep(1000);} catch(InterruptedException e) {}
       ArduinoBLL.setDisplay(255);
       tf1.setText(ArduinoBLL.mostraBits(ArduinoBLL.getDisplay()));
       try {Thread.sleep(1000);} catch(InterruptedException e) {}
       }
    }    
}
