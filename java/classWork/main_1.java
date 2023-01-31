package classWork;


import java.util.Scanner;

import classWork.p4.student;
import classWork.p4.techskills;
public class main_1 {
    public static void main(String[] args) {
		student st = new student(new techskills());
		st.SetData(new Scanner(System.in));
		st.getdata();
	}
}
