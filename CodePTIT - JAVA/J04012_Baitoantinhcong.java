import java.util.*;
class Nhanvien{
    private String id, name;
    private int salary, day, thuong , pc, tol;
    private String position;
    public Nhanvien(String id, String name, int salary, int day, String position) {
        this.id = "NV01";
        this.name = name;
        this.salary = salary;
        this.day = day; 
        this.position = position;   
    }
    public void tinh(){
        salary = salary * day;
        if(day >= 25) thuong = salary / 5;
        else if(day >= 22) thuong  = salary / 10;
        if(position.equals("GD")) pc = 250000;
        else if(position.equals("PGD")) pc = 200000;
        else if(position.equals("TP")) pc = 180000;
        else if(position.equals("NV")) pc = 150000;
        tol = salary + pc + thuong;
    }
    @Override
    public String toString(){
        tinh();
        return String.format("%s %s %d %d %d %d", id, name, salary, thuong, pc, tol);
    }
}
public class J04012_Baitoantinhcong {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        String name = ip.nextLine();
        int l = ip.nextInt();
        int d = ip.nextInt();
        ip.nextLine();
        String p = ip.nextLine();
        Nhanvien a = new Nhanvien("NV01", name, l, d, p);
        System.out.println(a);   
    }
}