package classWork.p4;
import java.util.*;

public class student {
	techskills ob = null;
	String Name, Branch;
	long rollno;

	public student(techskills ob) {
		this.ob = ob;
	}

	public void SetData(Scanner sc) {
		Name = sc.nextLine().toUpperCase();
		Branch = sc.nextLine().toUpperCase();
		rollno = Long.parseLong(sc.nextLine());
		ob.lang = sc.nextLine().toUpperCase();
		ob.tools = sc.nextLine().toUpperCase();
		ob.scr_langs = sc.nextLine();
	}

	public void getdata() {
		int i = 1;
		StringTokenizer st = null;
		System.out.println("Name : " + Name);
		System.out.println("Branch : " + Branch);
		System.out.println("Roll no : " + rollno);
		st = new StringTokenizer(ob.lang, " ,");
		System.out.println("programming language : ");
		while (st.hasMoreElements()) {
			System.out.println(i++ + "." + st.nextToken());
		}
		st = new StringTokenizer(ob.tools, " ,");
		i = 1;
		System.out.println("tools : ");
		while (st.hasMoreElements()) {
			System.out.println(i++ + "." + st.nextToken());
		}
		st = new StringTokenizer(ob.scr_langs, " ,");
		i = 1;
		System.out.println("Scripting Language : ");
		while (st.hasMoreElements()) {
			System.out.println(i++ + "." + st.nextToken());
		}
	}

}