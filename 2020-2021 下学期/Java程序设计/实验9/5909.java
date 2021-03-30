import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        JFrame window = new JFrame("简易计算器");
        window.setBounds(260,100,300,110);
        Container con = new Container();
        con.setLayout(new FlowLayout());
        JTextField jtf = new JTextField(8);
        JTextField jtf2 = new JTextField(8);
        JLabel jl = new JLabel("显示结果");
        JButton jb_add = new JButton("加");
        jb_add.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jtf.getText());
                double b = Double.parseDouble(jtf2.getText());
                jl.setText(String.valueOf(a+b));
            }
        });
        JButton jb_minus = new JButton("减");
        jb_minus.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jtf.getText());
                double b = Double.parseDouble(jtf2.getText());
                jl.setText(String.valueOf(a-b));
            }
        });
        JButton jb_mul = new JButton("乘");
        jb_mul.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jtf.getText());
                double b = Double.parseDouble(jtf2.getText());
                jl.setText(String.valueOf(a*b));
            }
        });
        JButton jb_div = new JButton("除");
        jb_div.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                double a = Double.parseDouble(jtf.getText());
                double b = Double.parseDouble(jtf2.getText());
                jl.setText(String.valueOf(a/b));
            }
        });
        con.add(jtf);
        con.add(jtf2);
        con.add(jl);
        con.add(jb_add);
        con.add(jb_minus);
        con.add(jb_mul);
        con.add(jb_div);
        window.add(con);
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
