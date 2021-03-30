import javax.swing.*;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        JFrame window = new JFrame("新建文本文档-记事本");
        window.setBounds(260,100,800,500);
        JMenuBar jMenuBar = new JMenuBar();
        String name[] = {"文件","编辑","格式","查看","帮助"};
        String itemName[][] = {{"新建","打开","保存","另存为","-","页面设置","-","打印","退出"},
                {"撤销","-","剪切","复制","粘贴","删除","-","使用 Bing 搜索...","查找","查找下一个","查找上一个","替换","转到","-","全选","时间/日期"},
                {"自动换行","字体"},
                {"缩放","状态栏"},
                {"查看帮助","发送反馈","-","关于记事本"}};
        ArrayList<JMenu> jMenuList= new ArrayList<>();
        for(String s:name) {
            jMenuList.add(new JMenu(s));
        }
        int index = 0;
        for(String ss[]:itemName) {
            for(String s:ss) {
                if(index==3&&s.equals("缩放")) {
                    JMenu jm = new JMenu(s);
                    jm.add(new JMenuItem("放大"));
                    jm.add(new JMenuItem("缩小"));
                    jm.add(new JMenuItem("恢复默认缩放"));
                    jMenuList.get(index).add(jm);
                }
                else if(s.equals("-"))jMenuList.get(index).addSeparator();
                else jMenuList.get(index).add(new JMenuItem(s));
            }
            index++;
        }
        for(JMenu jm:jMenuList) {
            jMenuBar.add(jm);
        }
        window.setJMenuBar(jMenuBar);
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
