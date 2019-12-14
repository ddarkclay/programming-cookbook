import java.util.*;

public class MapDemo
{
	public static void main(String args[])
	{
		Map map = new HashMap();
		Integer num = new Integer(1);
		for(int i = 0, n = args.length; i < n; i++)
		{
			String key = args[i];
			Integer frequency = (Integer)map.get(key);
			if(frequency == null)
			{
				frequency = num;
			}
			else
			{
				int value = frequency.intValue();
				frequency = new Integer(value +1);
			}
			map.put(key, frequency);
		}
		Map sortedMap = new TreeMap(map);
		System.out.println(sortedMap);
	}
}