
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
public class Sequencial2 extends Thread {

    private JTextField tf1;

    Sequencial2(JTextField _tf1) {
        tf1 = _tf1;
    }

    public void run() {
        while (ArduinoBLL.getFlag()) {
            int numero = 1, aux;
            for (int i = 0; i < 9; i++) {
                aux = numero;
                numero = numero << 1;
                numero = numero | aux;
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
