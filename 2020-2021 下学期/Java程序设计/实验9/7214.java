import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        String loginName;
        FileReader fr = new FileReader("7214.txt");
        BufferedReader br = new BufferedReader(fr);
        loginName = br.readLine();
        br.close();
        fr.close();
        JFrame window = new JFrame("7214");
        window.setBounds(260,100,300,120);
        Container con = new Container();
        con.setLayout(new FlowLayout());
        JLabel jl = new JLabel("用户名：");
        JTextField jtf = new JTextField(15);
        JButton jb =new JButton("登录");
        jb.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(jtf.getText().equals(loginName)) {
                    JOptionPane.showMessageDialog(window,"登录成功");
                }else {
                    JOptionPane.showMessageDialog(window,"登录失败");
                }
            }
        });
        con.add(jl);
        con.add(jtf);
        con.add(jb);
        window.add(con);
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
