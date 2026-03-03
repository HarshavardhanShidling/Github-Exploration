
public class printNoUsingConstruct {
	int n1,n2;
	printNoUsingConstruct(int n1,int n2)
	{
			this.n1 = n1;
			this.n2 = n2;
	}
	void add(int c) {
		this.n1 += c;
		this.n2 += c;
	}
	void display()
	{
		System.out.println("N1:"+this.n1+"\nN2:"+this.n2);
	}

	public static void main(String[] args) {
		printNoUsingConstruct d1 = new printNoUsingConstruct(10,20);
		System.out.println("Before adding constant value:");
		d1.display();
		d1.add(4);
		System.out.println("After adding constant value:");
		d1.display();
	}

}
