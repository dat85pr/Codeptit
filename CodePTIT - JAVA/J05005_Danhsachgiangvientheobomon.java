import java.util.*;
import java.util.Arrays;
class Giangvien{
    private String id, name, major;

    public Giangvien(int id, String name, String major) {
        this.id = "GV" + String.format("%02d", id);
        this.name = name;
        this.major=  major;
    }

    public String getMajor() {
        return major;
    }

    public String getmaj(){
        String[] words = major.split("\\s+");
        StringBuilder s = new StringBuilder();
        for(String word : words){
            if(!word.isEmpty()){
                s.append(word.substring(0, 1).toUpperCase());
            }
        }
        return s.toString();
    }
    public String toString(){
        return String.format("%s %s %s", id, name, this.getmaj());
    }
}
public class J05005_Danhsachgiangvientheobomon {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Giangvien[] list  = new Giangvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String major = ip.nextLine();
            list[i] = new Giangvien(i + 1, name , major);
        }
        int q = ip.nextInt();
        ip.nextLine();
        while(q-- > 0){
            String s = ip.nextLine();
            String[] words = s.split("\\s+");
            StringBuilder x = new StringBuilder();
            for(String word : words){
                if(!word.isEmpty()){
                    x.append(word.substring(0, 1).toUpperCase());
                }
            }
            String a = x.toString();
            System.out.println(String.format("DANH SACH GIANG VIEN BO MON ") + a + ":");
            for(int i = 0; i < t; i++) {
                if (s.equals(list[i].getMajor())) {
                    System.out.println(list[i]);
                }
            }
        }
    }
}   