import Pk1.*;
import Pk2.*;
class PackageDemo_9
{
	public static void main(String args[])
	{
		System.out.print("AccessControl\n");
		AccessControl a = new AccessControl(3,4,5,6);
		System.out.print("\n\nSameSub\n");
		SameSub s = new SameSub(3,4,5,6);
		System.out.print("\n\nSameNonSub\n");
		SameNonSub sn = new SameNonSub(3,4,5,6);
		System.out.print("\n\nDiffNonSub\n");
		DiffSub d = new DiffSub(3,4,5,6);
		System.out.print("\n\nSameSub\n");
		DiffNonSub dn = new DiffNonSub(3,4,5,6);
	}
}
