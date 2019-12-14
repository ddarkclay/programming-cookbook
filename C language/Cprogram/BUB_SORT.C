/* Bubble sort */
void main()
{
int arr[5] = {4,8,1,9,3};
int i,j,temp;
clrscr();
printf("Original array");
for(i = 0;i<=4;i++)
    printf("%d  ",arr[i]);
for(i=0;i<5;i++)
{
   for(j=0;j<=3-i;j++)
   {
     if(arr[j] > arr[j+1])
	{
	temp = arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
    }
}
printf("\nSorted array  ");
for(i=0;i<5;i++)
printf("%d  " ,arr[i]);
getch();
}