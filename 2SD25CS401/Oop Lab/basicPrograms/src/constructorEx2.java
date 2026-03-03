
public class constructorEx2 {
	int n1;
	constructorEx2(int n1) {
		this.n1 = n1*n1;
	}
	
	constructorEx2(int n1,int n2) {
		this.n1 = n1 + n2;
	}
	
	constructorEx2(int n1,int n2,int n3) {
		this.n1 = ((n1+n2+n3)/3);
	}
	
	void display() {
		System.out.println(n1);
	}
	public static void main(String[] args) {
		constructorEx2 c1 = new constructorEx2(10);
		System.out.print("Square of 10:");
		c1.display();
		constructorEx2 c2 = new constructorEx2(10,20);
		System.out.print("Sum of 10 & 20:");
		c2.display();
		constructorEx2 c3 = new constructorEx2(10,20,30);
		System.out.print("Average of 10,20,30:");
		c3.display();
	}
}
