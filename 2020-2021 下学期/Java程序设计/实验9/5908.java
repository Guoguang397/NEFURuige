import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        JFrame window = new JFrame("5908");
        window.setBounds(260,100,300,200);
        Container con = new Container();
        con.setLayout(new FlowLayout());
        JTextField jtf = new JTextField(20);
        JTextArea jta = new JTextArea(6,20);
        jtf.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {

            }

            @Override
            public void keyPressed(KeyEvent e) {
                if(e.getKeyCode()==KeyEvent.VK_ENTER) {
                    jta.setText(jtf.getText());
                }
            }

            @Override
            public void keyReleased(KeyEvent e) {

            }
        });
        con.add(jtf);
        con.add(jta);
        window.add(con);
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
