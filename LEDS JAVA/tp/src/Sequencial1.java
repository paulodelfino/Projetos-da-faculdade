
import javax.swing.JTextField;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author unisanta
 */
public class Sequencial1 extends Thread {

    private JTextField tf1;

    Sequencial1(JTextField _tf1) {
        tf1 = _tf1;
    }

    public void run() {
        while (ArduinoBLL.getFlag()) {
            int numero = 1;
            for (int i = 0; i < 9; i++) {

                numero = numero << 1;
                ArduinoBLL.setDisplay(numero);
                tf1.setText(ArduinoBLL.mostraBits(ArduinoBLL.getDisplay()));
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                }
            }
        }
    }
}
