import java.util.Random;

interface SharedConstants
{
  int No = 0;
  int Yes = 1;
  int MayBe = 2;
  int Later = 3;
  int Soon = 4;
  int Never = 5;
}

class Question implements SharedConstants
{
  Random r = new Random();
  int ask()
  {
    int prob = (int) (100*r.nextDouble());

    if (prob < 30)
	return No;
    if (prob < 60)
	return Yes;
    if (prob < 75)
	return Later;
    if (prob < 98)
	return Soon;
    else 
	return Never;
  }
}

class AskMe implements SharedConstants
{
  static void answer(int result)
  {
    switch(result)
    {
	case No:
	System.out.println("NO");
	break;
	case Yes:
	System.out.println("YES");
	break;
	case MayBe:
	System.out.println("MAYBE");
	break;
	case Later:
	System.out.println("LATER");
	break;
	case Soon:
	System.out.println("Soon");
	break;
	case Never:
	System.out.println("NEVER");
	break;
    }
  }
   public static void main(String args[])
   {
     Question q = new Question();
	answer(q.ask()); 
	answer(q.ask());
	answer(q.ask());
	answer(q.ask());
   }
}