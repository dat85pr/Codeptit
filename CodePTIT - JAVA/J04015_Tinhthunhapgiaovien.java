import java.util.*;
class Teacher{
    private String id, name;
    private int salary, pc, hs;
    public Teacher(String id, String name, int salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }
    public void sum(){
        String f = id.substring(0, 2);
        String s = id.substring(2);
        hs = Integer.parseInt(s);
        if(f.equals("HT")){
            pc = 2000000;
        }
        else if(f.equals("HP")){
            pc = 900000;
        }
        else if(f.equals("GV")){
            pc = 500000;
        }
        salary = salary * hs + pc;
    }
    @Override
    public String toString(){
        sum();
        return String.format("%s %s %d %d %d", id, name, hs, pc, salary);
    }   
}

public class J04015_Tinhthunhapgiaovien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        String id = ip.nextLine();
        String name = ip.nextLine();
        int s = ip.nextInt();
        Teacher a = new Teacher(id, name, s);
        System.out.println(a);
    }
}