/*(1)�m�W�G�L�ؼ�
     �Ǹ��G110816003*/
/*(2)����ɷ|��ܤp��L�������C
     ���U%��A�U�ƼƦr�|���H100�C
     ���UCE��A�U�ƼƦr�|�Q�M���C
     ���UC��A�W�U�ƼƦr�ҷ|�Q�M���C
     ���U����A�U�ƪ��̫�@�ӼƦr�|�Q�M���C
     ���U1/x��A�U�ƪ��Ʀr�|�ܦ��˼ơC
     ���Ux^2��A�U�ƪ��Ʀr�|����C
     ���U��x��A�U�ƪ��Ʀr�|�}�ڸ��C
     ���U����A�W�ƹB�⦡�|�i�氣�k�B��C
     ���U7��A�U�ƼƦr�|�s�W7�C
     ���U8��A�U�ƼƦr�|�s�W8�C
     ���U9��A�U�ƼƦr�|�s�W9�C
     ���U����A�W�ƹB�⦡�|�i�歼�k�B��C
     ���U4��A�U�ƼƦr�|�s�W4�C
     ���U5��A�U�ƼƦr�|�s�W5�C
     ���U6��A�U�ƼƦr�|�s�W6�C
     ���U-��A�W�ƹB�⦡�|�i���k�B��C
     ���U1��A�U�ƼƦr�|�s�W1�C
     ���U2��A�U�ƼƦr�|�s�W2�C
     ���U3��A�U�ƼƦr�|�s�W3�C
     ���U+��A�W�ƹB�⦡�|�i��[�k�B��C
     ���U����A�U�ƪ��Ʀr�|�ܦ��쥻���t�ơC
     ���U0��A�U�ƼƦr�|�s�W0�C
     ���U.��A�U�ƼƦr�|�s�W.�C
     ���U=��A�W�ƹB�⦡�|�i��B��A�U�ƼƦr��ܵ��G�C
     ���U������|�}�ҹ�ܤ���A�߰ݬO�_�T�w�n�����A
     ���U�T�w��N�|���}�{���A���U�����h�^���Ӥp��L�������C*/
/*(3)1.�{�����N�q�B�i�H����
     2.�Ȥ䴩��ƹB��
     3.�䴩�p�ƹB��
     4.�]�t�Ҧ��\��
     �۵��G95*/
/*(5)�W�[�T�w�O�_�n�������\��C*/
import java.awt.*;
import java.awt.event.*;
public class H7_110816003 extends Frame implements ActionListener,WindowListener
{
    static H7_110816003 frm=new H7_110816003();
    static Panel pnl=new Panel(new GridLayout(6,4,2,2));
    static Label lab1=new Label("",Label.RIGHT);
    static Label lab2=new Label("0",Label.RIGHT);
    static Button btnpc=new Button("%");
    static Button btnce=new Button("CE");
    static Button btnc=new Button("C");
    static Button btnbc=new Button("��");
    static Button btnre=new Button("1/x");
    static Button btnsq=new Button("x^2");
    static Button btnsqrt=new Button("��x");
    static Button btndi=new Button("��");
    static Button btn7=new Button("7");
    static Button btn8=new Button("8");
    static Button btn9=new Button("9");
    static Button btnmu=new Button("��");
    static Button btn4=new Button("4");
    static Button btn5=new Button("5");
    static Button btn6=new Button("6");
    static Button btnmi=new Button("-");
    static Button btn1=new Button("1");
    static Button btn2=new Button("2");
    static Button btn3=new Button("3");
    static Button btnpl=new Button("+");
    static Button btnplmi=new Button("��");
    static Button btn0=new Button("0");
    static Button btndot=new Button(".");
    static Button btneq=new Button("=");
    StringBuffer s1=new StringBuffer();
    StringBuffer s2=new StringBuffer();
    double num1=0,num2=0;
    int oper=0;

    static Dialog dlg=new Dialog(frm);
    static Label lab3=new Label("�аݽT�w�n��������?");
    static Button sure=new Button("�T�w");
    static Button cancel=new Button("����");

    public static void main(String args[])
    {
        btnpc.addActionListener(frm);
        btnce.addActionListener(frm);
        btnc.addActionListener(frm);
        btnbc.addActionListener(frm);
        btnre.addActionListener(frm);
        btnsq.addActionListener(frm);
        btnsqrt.addActionListener(frm);
        btndi.addActionListener(frm);
        btn7.addActionListener(frm);
        btn8.addActionListener(frm);
        btn9.addActionListener(frm);
        btnmu.addActionListener(frm);
        btn4.addActionListener(frm);
        btn5.addActionListener(frm);
        btn6.addActionListener(frm);
        btnmi.addActionListener(frm);
        btn1.addActionListener(frm);
        btn2.addActionListener(frm);
        btn3.addActionListener(frm);
        btnpl.addActionListener(frm);
        btnplmi.addActionListener(frm);
        btn0.addActionListener(frm);
        btndot.addActionListener(frm);
        btneq.addActionListener(frm);

        sure.addActionListener(frm);
        cancel.addActionListener(frm);
        frm.addWindowListener(frm);

        frm.setLayout(null);
        frm.setTitle("�p��L");
        frm.setSize(500,550);
        frm.setLocation(100,50);
        frm.setResizable(false);
        lab1.setBounds(0,60,480,30);
        lab1.setForeground(Color.gray);
        lab1.setFont(new Font("Arial",Font.PLAIN,16));
        lab2.setBounds(0,90,480,30);
        lab2.setFont(new Font("Arial",Font.BOLD,30));
        pnl.setBounds(10,140,480,400);
        btnpc.setFont(new Font("Arial",Font.PLAIN,18));
        btnce.setFont(new Font("Arial",Font.PLAIN,18));
        btnc.setFont(new Font("Arial",Font.PLAIN,18));
        btnbc.setFont(new Font("Arial",Font.PLAIN,20));
        btnre.setFont(new Font("Arial",Font.PLAIN,18));
        btnsq.setFont(new Font("Arial",Font.PLAIN,18));
        btnsqrt.setFont(new Font("Arial",Font.PLAIN,18));
        btndi.setFont(new Font("Arial",Font.PLAIN,18));
        btn7.setFont(new Font("Arial",Font.BOLD,20));
        btn8.setFont(new Font("Arial",Font.BOLD,20));
        btn9.setFont(new Font("Arial",Font.BOLD,20));
        btnmu.setFont(new Font("Arial",Font.PLAIN,20));
        btn4.setFont(new Font("Arial",Font.BOLD,20));
        btn5.setFont(new Font("Arial",Font.BOLD,20));
        btn6.setFont(new Font("Arial",Font.BOLD,20));
        btnmi.setFont(new Font("Arial",Font.PLAIN,20));
        btn1.setFont(new Font("Arial",Font.BOLD,20));
        btn2.setFont(new Font("Arial",Font.BOLD,20));
        btn3.setFont(new Font("Arial",Font.BOLD,20));
        btnpl.setFont(new Font("Arial",Font.PLAIN,20));
        btnplmi.setFont(new Font("Arial",Font.PLAIN,20));
        btn0.setFont(new Font("Arial",Font.BOLD,20));
        btndot.setFont(new Font("Arial",Font.BOLD,20));
        btneq.setFont(new Font("Arial",Font.PLAIN,20));
        pnl.add(btnpc);
        pnl.add(btnce);
        pnl.add(btnc);
        pnl.add(btnbc);
        pnl.add(btnre);
        pnl.add(btnsq);
        pnl.add(btnsqrt);
        pnl.add(btndi);
        pnl.add(btn7);
        pnl.add(btn8);
        pnl.add(btn9);
        pnl.add(btnmu);
        pnl.add(btn4);
        pnl.add(btn5);
        pnl.add(btn6);
        pnl.add(btnmi);
        pnl.add(btn1);
        pnl.add(btn2);
        pnl.add(btn3);
        pnl.add(btnpl);
        pnl.add(btnplmi);
        pnl.add(btn0);
        pnl.add(btndot);
        pnl.add(btneq);
        frm.add(lab1);
        frm.add(lab2);
        frm.add(pnl);

        dlg.setTitle("��������");
        dlg.setSize(250,180);
        dlg.setLocation(400,120);
        dlg.setLayout(new FlowLayout(FlowLayout.CENTER,15,25));
        lab3.setFont(new Font("",Font.PLAIN,20));
        sure.setFont(new Font("",Font.PLAIN,18));
        cancel.setFont(new Font("",Font.PLAIN,18));
        dlg.add(lab3);
        dlg.add(sure);
        dlg.add(cancel);

        frm.setVisible(true);
    }

    public void actionPerformed(ActionEvent e)
    {
        Object btn=e.getSource();
        if(btn==btnpl) //�[��
        {
            if(oper==1) //�e�@�ӬO�[��
            {
                if(s2.length()==0)
                {
                }
                else
                {
                    num1=num1+num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=1;
                }
            }
            else if(oper==2) //�e�@�ӬO�
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=1;
                }
                else
                {
                    num1=num1-num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=1;
                }
            }
            else if(oper==3) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=1;
                }
                else
                {
                    num1=num1*num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=1;
                }
            }
            else if(oper==4) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=1;
                }
                else
                {
                    if(s2.toString().equals("0"))
                    {
                        lab2.setText("�L�k���H0");
                        s1.append(s2.toString());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        oper=0;
                    }
                    else
                    {
                        num1=num1/num2;
                        s1.append(lab2.getText());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        int num=(int)num1;
                        if(num1==num)
                        {
                            lab2.setText(Integer.toString(num));
                        }
                        else
                        {
                            lab2.setText(Double.toString(num1));
                        }
                        s2.setLength(0);
                        num2=0d;
                        oper=1;
                    }
                }
            }
            else
            {
                num1=Double.parseDouble(lab2.getText());
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                s2.setLength(0);
                num2=0d;
                oper=1;
            }
        }
        else if(btn==btnmi) //�
        {
            if(oper==1) //�e�@�ӬO�[��
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=2;
                }
                else
                {
                    num1=num1+num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=2;
                }
            }
            else if(oper==2) //�e�@�ӬO�
            {
                if(s2.length()==0)
                {
                }
                else
                {
                    num1=num1-num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=2;
                }
            }
            else if(oper==3) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=2;
                }
                else
                {
                    num1=num1*num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=2;
                }
            }
            else if(oper==4) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=2;
                }
                else
                {
                    if(s2.toString().equals("0"))
                    {
                        lab2.setText("�L�k���H0");
                        s1.append(s2.toString());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        oper=0;
                    }
                    else
                    {
                        num1=num1/num2;
                        s1.append(lab2.getText());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        int num=(int)num1;
                        if(num1==num)
                        {
                            lab2.setText(Integer.toString(num));
                        }
                        else
                        {
                            lab2.setText(Double.toString(num1));
                        }
                        s2.setLength(0);
                        num2=0d;
                        oper=2;
                    }
                }
            }
            else
            {
                num1=Double.parseDouble(lab2.getText());
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                s2.setLength(0);
                num2=0d;
                oper=2;
            }
        }
        else if(btn==btnmu) //����
        {
            if(oper==1) //�e�@�ӬO�[��
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=3;
                }
                else
                {
                    num1=num1+num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=3;
                }
            }
            else if(oper==2) //�e�@�ӬO�
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=3;
                }
                else
                {
                    num1=num1-num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=3;
                }
            }
            else if(oper==3) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                }
                else
                {
                    num1=num1*num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=3;
                }
            }
            else if(oper==4) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=3;
                }
                else
                {
                    if(s2.toString().equals("0"))
                    {
                        lab2.setText("�L�k���H0");
                        s1.append(s2.toString());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        oper=0;
                    }
                    else
                    {
                        num1=num1/num2;
                        s1.append(lab2.getText());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        int num=(int)num1;
                        if(num1==num)
                        {
                            lab2.setText(Integer.toString(num));
                        }
                        else
                        {
                            lab2.setText(Double.toString(num1));
                        }
                        s2.setLength(0);
                        num2=0d;
                        oper=3;
                    }
                }
            }
            else
            {
                num1=Double.parseDouble(lab2.getText());
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                s2.setLength(0);
                num2=0d;
                oper=3;
            }
        }
        else if(btn==btndi) //����
        {
            if(oper==1) //�e�@�ӬO�[��
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=4;
                }
                else
                {
                    num1=num1+num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=4;
                }
            }
            else if(oper==2) //�e�@�ӬO�
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=4;
                }
                else
                {
                    num1=num1-num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=4;
                }
            }
            else if(oper==3) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                    s1.deleteCharAt(s1.length()-1);
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    oper=4;
                }
                else
                {
                    num1=num1*num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=4;
                }
            }
            else if(oper==4) //�e�@�ӬO����
            {
                if(s2.length()==0)
                {
                }
                else
                {
                    if(s2.toString().equals("0"))
                    {
                        lab2.setText("�L�k���H0");
                        s1.append(s2.toString());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        oper=0;
                    }
                    else
                    {
                        num1=num1/num2;
                        s1.append(lab2.getText());
                        lab1.setText(s1.append(e.getActionCommand()).toString());
                        int num=(int)num1;
                        if(num1==num)
                        {
                            lab2.setText(Integer.toString(num));
                        }
                        else
                        {
                            lab2.setText(Double.toString(num1));
                        }
                        s2.setLength(0);
                        num2=0d;
                        oper=4;
                    }
                }
            }
            else
            {
                num1=Double.parseDouble(lab2.getText());
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                s2.setLength(0);
                num2=0d;
                oper=4;
            }
        }
        else if(btn==btneq) //����
        {
            if(oper==1) //�[��
            {
                if(s2.length()==0)
                {
                    num2=num1;
                }
                num1=num1+num2;
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                int num=(int)num1;
                if(num1==num)
                {
                    lab2.setText(Integer.toString(num));
                }
                else
                {
                    lab2.setText(Double.toString(num1));
                }
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
            else if(oper==2) //�
            {
                if(s2.length()==0)
                {
                    num2=num1;
                }
                num1=num1-num2;
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                int num=(int)num1;
                if(num1==num)
                {
                    lab2.setText(Integer.toString(num));
                }
                else
                {
                    lab2.setText(Double.toString(num1));
                }
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
            else if(oper==3) //����
            {
                if(s2.length()==0)
                {
                    num2=num1;
                }
                num1=num1*num2;
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                int num=(int)num1;
                if(num1==num)
                {
                    lab2.setText(Integer.toString(num));
                }
                else
                {
                    lab2.setText(Double.toString(num1));
                }
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
            else if(oper==4) //����
            {
                if(num1==0)
                {
                    lab2.setText("���w�q���G");
                    oper=0;
                }
                else
                {
                    if(s2.length()==0)
                    {
                        num2=num1;
                    }
                    num1=num1/num2;
                    s1.append(lab2.getText());
                    lab1.setText(s1.append(e.getActionCommand()).toString());
                    int num=(int)num1;
                    if(num1==num)
                    {
                        lab2.setText(Integer.toString(num));
                    }
                    else
                    {
                        lab2.setText(Double.toString(num1));
                    }
                    s2.setLength(0);
                    num2=0d;
                    oper=0;
                }
            }
            else
            {
                num1=Double.parseDouble(lab2.getText());
                s1.append(lab2.getText());
                lab1.setText(s1.append(e.getActionCommand()).toString());
                int num=(int)num1;
                if(num1==num)
                {
                    lab2.setText(Integer.toString(num));
                }
                else
                {
                    lab2.setText(Double.toString(num1));
                }
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
        }
        else if(btn==btndot) //�p���I
        {
            if(lab2.getText().indexOf('.')!=-1) //�w�g���p���I
            {
            }
            else
            {
                if(s2.length()==0)
                {
                    s2.append("0");
                }
                lab2.setText(s2.append(e.getActionCommand()).toString());
            }
        }
        else if(btn==btnplmi) //���t��
        {
            num2=-num2;
            s2.setLength(0);
            if(lab2.getText().indexOf('.')!=-1) //�w�g���p���I
            {
                s2.append(Double.toString(num2));
                lab2.setText(s2.toString());
            }
            else
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
            }
        }
        else if(btn==btnpc) //�ʤ���
        {
            num2=num2/100;
            s2.setLength(0);
            int num=(int)num2;
            if(num2==num)
            {
                s2.append(Integer.toString(num));
                lab2.setText(s2.toString());
            }
            else
            {
                s2.append(Double.toString(num2));
                lab2.setText(s2.toString());
            }
        }
        else if(btn==btnce) //CE
        {
            if(lab2.getText().equals("�L�k���H0"))
            {
                s2.setLength(0);
                lab2.setText(s2.append("0").toString());
                lab2.setAlignment(Label.RIGHT);
                num2=0d;
                s1.setLength(0);
                lab1.setText(s1.toString());
                oper=0;
            }
            else if(s1.toString().length()>0)
            {
                if(s1.toString().substring(s1.length()-1).equals("="))
                {
                    s1.setLength(0);
                    lab1.setText(s1.toString());
                }
                else if(lab2.getText().equals("���w�q���G"))
                {
                    s1.setLength(0);
                    lab1.setText(s1.toString());
                }
                else if(lab2.getText().equals("�L�Ī���J"))
                {
                    s1.setLength(0);
                    lab1.setText(s1.toString());
                }
                s2.setLength(0);
                lab2.setText(s2.append("0").toString());
                num2=0d;
                oper=0;
            }
            else
            {
                s2.setLength(0);
                lab2.setText(s2.append("0").toString());
                num2=0d;
                oper=0;
            }
        }
        else if(btn==btnc) //C
        {
            s2.setLength(0);
            lab2.setText(s2.append("0").toString());
            lab2.setAlignment(Label.RIGHT);
            num2=0d;
            s1.setLength(0);
            lab1.setText(s1.toString());
            num1=0d;
            oper=0;
        }
        else if(btn==btnbc) //Backspace
        {
            if(lab2.getText().equals("0"))
            {
            }
            else if(lab2.getText().length()==1)
            {
                s2.setLength(0);
                lab2.setText(s2.append("0").toString());
                num2=0d;
            }
            else if(lab2.getText().length()>1)
            {
                s2.deleteCharAt(s2.length()-1);
                lab2.setText(s2.toString());
                num2=Double.parseDouble(lab2.getText());
            }
        }
        else if(btn==btnre) //�˼�
        {
            if(lab2.getText().equals("0"))
            {
                lab2.setText("�L�k���H0");
                s1.append("1/(0)");
                lab1.setText(s1.toString());
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
            else if(oper==0)
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("1/("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("1/("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=1/num2;
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
                num1=num2;
            }
            else
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("1/("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("1/("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=1/num2;
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
            }
        }
        else if(btn==btnsq) //����
        {
            if(oper==0)
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("sqr("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("sqr("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=num2*num2;
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
                num1=num2;
            }
            else
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("sqr("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("sqr("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=num2*num2;
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
            }
        }
        else if(btn==btnsqrt) //�����
        {
            if(num2<0)
            {
                lab2.setText("�L�Ī���J");
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("��("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("��("+num2+")");
                    lab1.setText(s1.toString());
                }
                s2.setLength(0);
                num2=0d;
                oper=0;
            }
            else if(oper==0)
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("��("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("��("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=Math.sqrt(num2);
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
                num1=num2;
            }
            else
            {
                int num=(int)num2;
                if(num2==num)
                {
                    s1.append("��("+num+")");
                    lab1.setText(s1.toString());
                }
                else
                {
                    s1.append("��("+num2+")");
                    lab1.setText(s1.toString());
                }
                num2=Math.sqrt(num2);
                s2.setLength(0);
                num=(int)num2;
                if(num2==num)
                {
                    s2.append(Integer.toString(num));
                    lab2.setText(s2.toString());
                }
                else
                {
                    s2.append(Double.toString(num2));
                    lab2.setText(s2.toString());
                }
            }
        }
        else if(btn==btn0) //�Ʀr0
        {
            if(lab2.getText().equals("�L�k���H0"))
            {
                s2.setLength(0);
                lab2.setText(s2.append(e.getActionCommand()).toString());
                lab2.setAlignment(Label.RIGHT);
                num2=Double.parseDouble(lab2.getText());
                s1.setLength(0);
                lab1.setText(s1.toString());
            }
            else if(lab2.getText().equals("0"))
            {
                num2=Double.parseDouble(lab2.getText());
            }
            else
            {
                if(s1.toString().length()>0)
                {
                    if(s1.toString().substring(s1.length()-1).equals("="))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                    else if(lab2.getText().equals("���w�q���G"))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                    else if(lab2.getText().equals("�L�Ī���J"))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                }
                lab2.setText(s2.append(e.getActionCommand()).toString());
                lab2.setAlignment(Label.RIGHT);
                num2=Double.parseDouble(lab2.getText());
            }
        }
        else //��L�Ʀr�B�T�{�B����
        {
            if(btn==sure)
            {
                dlg.dispose();
                frm.dispose();
                System.exit(0);
            }
            else if(btn==cancel)
            {
                dlg.hide();
            }
            else if(lab2.getText().equals("�L�k���H0"))
            {
                s2.setLength(0);
                lab2.setText(s2.append(e.getActionCommand()).toString());
                lab2.setAlignment(Label.RIGHT);
                num2=Double.parseDouble(lab2.getText());
                s1.setLength(0);
                lab1.setText(s1.toString());
            }
            else
            {
                if(s2.toString().equals("0"))
                {
                    s2.setLength(0);
                }
                else if(s1.toString().length()>0)
                {
                    if(s1.toString().substring(s1.length()-1).equals("="))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                    else if(lab2.getText().equals("���w�q���G"))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                    else if(lab2.getText().equals("�L�Ī���J"))
                    {
                        s1.setLength(0);
                        lab1.setText(s1.toString());
                    }
                }
                lab2.setText(s2.append(e.getActionCommand()).toString());
                lab2.setAlignment(Label.RIGHT);
                num2=Double.parseDouble(lab2.getText());
            }
        }
    }

    public void windowClosing(WindowEvent e)
    {
        dlg.show();
    }
    public void windowActivated(WindowEvent e)
    {
    }
    public void windowClosed(WindowEvent e)
    {
    }
    public void windowDeactivated(WindowEvent e)
    {
    }
    public void windowDeiconified(WindowEvent e)
    {
    }
    public void windowIconified(WindowEvent e)
    {
    }
    public void windowOpened(WindowEvent e)
    {
    }
}