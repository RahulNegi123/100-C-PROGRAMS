#include <stdio.h>
#include<windows.h>
#include<string.h>
#include <stdlib.h>
#include<math.h>
#define MAX_SIZE 100
#define MAXSIZE 100
char str[100], sub[100];
int count = 0, count1 = 0;
int func(int a, int b)  // function definition
{
    printf("\n\n a = %d \n", a);
    printf("\n\n b = %d \n", b);
}
int EVENorODD(int numEVENorODD)
{
    int remainder;
    remainder=numEVENorODD/2;
    return remainder;
}
float circleAREA(int rad)
{
    float PI = 3.14;
    float area=PI * rad * rad;
    return area;
}
int GREATof3(int num1,int num2,int num3)
{
    int greatest=0;
    if ((num1 > num2) && (num1 > num3))
    {
        greatest=num1;
    }
    if ((num2 > num3) && (num2 > num1))
    {
        greatest=num2;
    }
    if ((num3 > num1) && (num3 > num2))
    {
        greatest=num3;
    }
    return greatest;
}
int HELLO ()
{
    printf("Hello World");
    return 0;
}
int checkArmstrongNumber(int num)
{
    int original, rem, result = 0, n = 0, flag;
    original = num;
    while (original != 0)
    {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0)
    {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }
    // condition for Armstrong number
    if (result == num)
        flag = 1;
    else
        flag = 0;
    return flag;
}
int checkPrime(int n)
{
    int i, isPrime = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
long int multiplyNumbers(int n)
{
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
long long convert1(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int find_largest(int arr1[],int size1)
{
    	int temp_larg,i;
    	temp_larg=arr1[0];
    	for(i=1;i<size1;i++)
            	{
    			if(arr1[i]>temp_larg)
    				temp_larg=arr1[i];
    		}
    	return(temp_larg);
}
void con()
{
    float f,c=0.0;
    printf("\n ENTER TEMP IN F SCALE");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("TEMP IN C: %.2f",c);
}

void multiply(int mat1[12][12],int mat2[12][12],int m,int n,int p)
{
    int mul[12][12],i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            mul[i][j]=0;
            for(k=0;k<n;k++)
            {
                mul[i][j]=mul[i][j]+mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("The resultant matrix formed on multiplying the two matrices\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
void read_arr(int a[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
        printf("Enter Element %d %d : ",i,j);
        scanf("%d",&a[i][j]);
            }
    }
}
void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
    m3[i][j] =  (m1[i][j] + m2[i][j]);
    }
    }
}
void print_arr(int m[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
        {
        for(j=1;j<=col;j++)
        {
            printf("%d ",m[i][j]);
         }
        printf("\n");
        }
}
void sort(int m, int x[ ])
   {
       int ik, j, t;

       for(ik = 1; ik <= m-1; ik++)
          for(j = 1; j <= m-ik; j++)
             if(x[j-1] >= x[j])
             {
                t = x[j-1];
                x[j-1] = x[j];
                x[j] = t;
             }
   }
int find_len (char str[], int index)
{
	static int l = 0;

	if (str[index] == '\0')
		return l;
	else
		l ++;

	find_len (str, index + 1);
}
int lcm(int a, int b)
{
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
int product(int a, int b)
{
    if (a < b)
    {
        return product(b, a);
    }
    else if (b != 0)
    {
        return (a + product(a, b - 1));
    }
    else
    {
        return 0;
    }
}
void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

void binary_search(int list[], int lo, int hi, int key)
{
    int mid;

    if (lo > hi)
    {
        printf("Key not found\n");
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        printf("Key found\n");
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}
void ascii()
{
char c;
    printf("Enter a character : ");
    gets(c);
    printf("\n\nASCII value of %c = %d",c,c);
}
void divide()
{
    int num1,num2;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
}
void detailsOFnum()
{
    int number;
    printf("Please enter a number:\n");
    scanf("%d",&number);

    if(number < 100)
        printf("Number is less than 100!\n");
    else if(number == 100)
        printf("Number is 100!\n");
    else
        printf("Number is greater than 100!\n");

}
void grades()
{
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Keep it up!\n\n");
            break;
        case 'C':
            printf("Well done\nbreak keyword takes execution to exit the switch case\n\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n",grade);
}
void basicFOR()
{
    int i = 0;  // declaration and initialization at the same time


    for(i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
    }

    printf("\n\The value of i after exiting the loop is %d\n\n", i);

    printf("\nRemember that the loop condition checks the conditional statement before it loops again.\n\n");

    printf("Consequently, when i equals 10, the loop breaks.\n\n");

    printf("i is updated before the condition is checked- hence the value of i after exiting the loop is 10 .\n\n");
}
void basicDOwhile()
{
    int i = 10;

    do
    {
        printf("i = %d\n",i);
        i = i-1;
    }

    while(i > 0);

    printf("\n\The value of i after exiting the loop is %d\n\n", i);

}
void nestedFOR()
{
printf("\n\nNested loops are usually used to print a pattern in c. \n\n");
    printf("\n\nThey are also used to print out the matrix using a 2 dimensional array. \n\n");

    int i,j,k;
    printf("\n\nOutput of the nested loop is :\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("\t\t\t\t");
        for(j = 0; j < 5; j++)
        printf("* ");

        printf("\n");
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
}
void sumofDIGITS()
{
    int n, sum = 0, c, remainder;

    	printf("Enter the number you want to add digits of:  ");
    	scanf("%d", &n);

	while(n != 0)
    	{
        	remainder = n%10;
        	sum += remainder;
        	n = n/10;
    	}

    	printf("\n\nSum of the digits of the entered number is  =  %d\n\n", sum);
}
void difference()
{
    int nu1,nu2;
    printf("Enter two numbers");
    scanf("%d%d",&nu1,&nu2);
    int diff=nu1-nu2;
    printf("difference is %d",diff);
}
void average()
{
    int n, i;
    float sum = 0, x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\n\n\nEnter %d elements\n\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\n\n\nAverage of the entered numbers is =  %f", (sum/n));
}
void armstrong()
{
    int n,sum,i,t,a;
    printf("\n\n\nThe Armstrong numbers in between 1 to 500 are : \n\n\n");

    for(i = 1; i <= 500; i++)
    {
        t = i;  // as we need to retain the original number
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("\n\t\t\t%d", i);
    }

}
void factors()
{
    int  num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("\n\n\nFactors of %d are \n\n", num);

    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("\t\t\t%d\n", i);
    }

}
void sumofN()
{
    int n,sum=0,c,value;

    printf("\n\nEnter the number of integers you want to add:  ");
    scanf("%d", &n);

    printf("Enter %d integers\n\n",n);
    for(c = 1; c <= n; c++)
    {
        scanf("%d", &value);
        /*
            need to initialise sum before using otherwise
            garbage value will get printed
        */
        sum += value;
    }

    printf("\n\n\nsum of entered numbers  = %d", sum);
}
void largestN()
{
    int n,i;
    float c,big;

    printf("\n\nEnter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\n\nEnter %d numbers :\n", n);

    printf("\n\n\t\t\tElement 1: ");

    //Important step- always initialize big to the first element
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        printf("\n\t\t\tElement %d  : ", i);
        scanf("%f", &c);
        /*
            if input number is larger than the
            current largest number
        */
        if(big < c)
            big = c;    // update big to the larger value
    }

    printf("\n\n\nThe largest of the %d numbers is  %f ", n, big);
}
void numTYPE()
{
     char number[10];
    int flag = 0;
    int length, i = 0;

    printf("\n\nEnter a number: ");
    scanf("%s", number);

    length = strlen(number);

    // till string does not end
    while(number[i++] != '\0')    // same as while(length-->0)
    {
        if(number[i] == '.')    // decimal point is present
        {
            flag = 1;
            break;
        }
    }

    // if(0) is same as if(false)
    if(flag)
        printf("\n\n\n\tEntered Number is a Floating point Number\n\n");
    else
        printf("\n\n\n\tEntered Number is a integer Number\n\n");
}
void Table()
{
    int n,i;

    printf("Enter an integer you need to print the table of: ");
    scanf("%d", &n);
    printf("\n\n\n");

    for(i = 1; i <= 10; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n*i);
    }

}
void insertARRAY()
{
    int array[100], position, c, n, value;

    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nEnter the location where you want to insert new element:  ");
    scanf("%d", &position);

    printf("\n\nEnter the value to insert: ");
    scanf("%d", &value);

    // shifting the elements from (position to n) to right
    for(c = n-1; c >= position-1; c--)
        array[c+1] = array[c];

    array[position - 1] = value;    // inserting the given value

    printf("\n\nResultant array is: ");
    /*
        the array size gets increased by 1
        after insertion of the element
    */
    for(c = 0; c <= n; c++)
        printf("%d  ", array[c]);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
}
void deleteELEMENT()
{
    int array[100], position, c, n;
    printf("\n\nEnter number of elements in array:");
    scanf("%d", &n);

    printf("\n\nEnter %d elements\n", n);
    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("\n\nEnter the location where you want to delete element from:  ");
    scanf("%d", &position);

    if(position >= n+1)
        printf("\n\nDeletion not possible\n\n");
    else
        // updating the locations with next elements
        for(c = position-1; c < n-1; c++)
        array[c] = array[c+1];

    printf("\n\nResultant array is: ");
    /*
        the array size gets reduced by 1
        after deletion of the element
    */
    for(c = 0; c < n-1; c++)
        printf("%d  ", array[c]);
}
void sumAR()
{
    int n, sum = 0, c, array[100];

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

    printf("\n\nEnter %d integers \n\n", n);

    for(c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c];    // same as sum = sum + array[c]
    }

    printf("\n\nSum = %d\n\n", sum);
}
void dup()
{
     int a[20], i, j, k, n;


    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter %d array element: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array is: ");
    for(i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    printf("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void determinant()
{
    int a[2][2], i, j;
    long determinant;

    printf("\n\nEnter the 4 elements of the array\n");
    for(i = 0; i < 2; i++)
    for(j = 0; j < 2; j++)
    scanf("%d", &a[i][j]);

    printf("\n\nThe entered matrix is: \n\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", a[i][j]);   // to print the complete row
        }
        printf("\n"); // to move to the next row
    }

    // finding the determinant of a 2x2 matrix
    determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    printf("\n\nDterminant of 2x2 matrix is : %d - %d =  %d", a[0][0]*a[1][1], a[1][0]*a[0][1], determinant);
}
void concatenate()
{
    char aa[100], bb[100];

    printf("\nEnter the first string: ");
    gets(aa);   // inputting first string

    printf("\nEnter the second string to be concatenated: ");
    gets(bb);   // inputting second string

    char *a = aa;
    char *b = bb;

    // pointing to the end of the 1st string
    while(*a)   // till it doesn't point to NULL-till string is not empty
    {
        a++;    // point to the next letter of the string
    }
    while(*b)   // till second string is not empty
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';  // string must end with '\0'
    printf("\n\n\nThe string after concatenation is: %s ", aa);
}
void PtoF()
{
    // function pointer
    int(*fptr)(int , int);

    // assign address to function pointer
    fptr = func;

    // function calling
    func(2,3);
    fptr(2,3);  // calling a function referring to pointer to a function
}
void add()
{
   int n1,n2;
   printf("Enter two numbers");
   scanf("%d%d",&n1,&n2);
   int summ=n1+n2;
   printf("their sum is %d",summ);
}
void rev()
{
    char str[100];
    char rev[100];
    char *sptr = str; // sptr stores the base address of the str
    char *rptr = rev; // rptr stores the base address of the reverse

    int i = -1;

    printf("\n\nEnter a string: ");
    scanf("%s", str);

    // storing the ending address of str in sptr
    while(*sptr)
    {
        sptr++;
        i++; // i is the index of the end location
    }

    // storing the string str in rev in reverse order
    while(i >= 0)
    {
        /*
            First decrementing then using as it stores
            the location after the end location due to above while loop
        */
        sptr--;
        *rptr = *sptr;  // storing the value in sptr in rptr
        rptr++; // pointing to next location
        i--;    // decrementing the index
    }
    /*
        String should always end with '\0' so explicitly
        putting it at the end of the string
    */
    *rptr = '\0';
    rptr = rev; // restoring the base address of the reverse string

    // storing the reverse string in the original string
    while(*rptr)
    {
        *sptr = *rptr;
        sptr++;
        rptr++;
    }

    // printing the reverse string
    printf("\n\nReverse of the string is: %s ", str);
}
void swaap()
{
    int a, b;
    int *ptra, *ptrb;
    int temp;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("\n\nEnter value for b: ");
    scanf("%d", &b);

    printf("\n\nThe values before swapping are: a = %d     b = %d", a, b);

    ptra = &a;    // to store the location of a
    ptrb = &b;    // to store the location of b

    temp = *ptra;   // temp stores the value at location ptra
    *ptra = *ptrb;  // assigning value at location  ptrb to ptra
    *ptrb = temp;   // assign value of themp to  the variable at location ptrb

    printf("\n\nThe values after swapping are: a = %d    b = %d", a, b);
}
void poinBASIC()
{
    int var = 24;   // actual variable declaration
    int *p;

    p = &var;   // storing address of int variable var in pointer p

    printf("\n\nAddress of var variable is: %x \n\n", &var);

    // address stored in pointer variable
    printf("\n\nAddress stored in pointer variable p is: %x", p);

    // access the value using the pointer variable
    printf("\n\nValue of var variable or the value stored at address p is   %d ", *p);
}
void poiINC()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    printf("The numbers are %d and %d",x,y);

}
void p1()
{
    int i,j;

	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
			printf(" * ");
		}
		printf("\n");
	}

}
void p2()
{
int i,j;

	for (i=0; i<5; i++) {
		for (j=0; j<=i; j++) {
			printf(" * ");
		}
		printf("\n");
	}

}
void p3()
{
    int i,j,k;

	for (i=1; i<=5; i++) {
		for (j=5; j>=i; j--) {
			printf(" ");
		}
		for (k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}

}
void p4()
{
    int i,j,k,samp=1;

	for (i=5; i>=1; i--) {
		for (k=samp; k>=0; k--) {
			printf(" ");
			// only 1 space
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}

}
void p5()
{
    int i,j;

	for (i=5; i>=1; i--) {
		for (j=1; j<=i; j++) {
			printf(" * ");
		}
		printf("\n");
	}

}
void p6()
{
int i,j,k,t=0;

	for (i=1; i<=5; i++) {
		for (k=t; k<5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf(" * ");
			t = t + 1;
		}
		printf("\n");
	}
}
void p7()
{
  int i,j,k,samp=1;

	for (i=1; i<=5; i++) {
		for (k=samp; k<=5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	samp = 1;
	for (i=4; i>=1; i--) {
		for (k=samp; k>=0; k--) {
			printf(" ");
		}
		for (j=i; j>=1; j--) {
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
}
void p8()
{
    int rw, c, no=1 ,len;

	printf("Enter number of rows: ");
	scanf("%d",&len);
	for (rw=1; rw<=len; rw++) {
		printf("\n");
		for (c=1; c<=rw; c++) {
			printf(" %2d ", no);
			no++;
		}
	}
}
void p9()
{
int i,j,k;
	for (i=1;i<=5;i++) {
		j=i;
		for (k=1;k<=i;k++) {
			printf("%d",j++);
		}
		printf("\n");
	}
}
void p10()
{
int i, j=5, k, x;

	for (i=1;i<=5;i++) {
		for (k=1;k<=j;k++) {
			printf(" ");
		}
		for (x=1;x<=i;x++) {
			printf("%d",i);
			printf(" ");
		}
		printf("\n");
		j=j-1;
	}
}
long fact(int num){
    long f=1;
    int i=1;
    while(i<=num){
         f=f*i;
         i++;
  }
  return f;
 }

void pascals()
{
    int line,i,j;

    printf("Enter the no. of lines: ");
    scanf("%d",&line);

    for(i=0;i<line;i++){
         for(j=0;j<line-i-1;j++)
             printf(" ");

         for(j=0;j<=i;j++)
             printf("%ld ",fact(i)/(fact(j)*fact(i-j)));
         printf("\n");
    }
}
void p11()
{
    int rw,c,no,spc;

	printf("Enter number of rows : ");
	scanf("%d", &no);
	for (rw=1; rw<=no; rw++) {
		for (spc=no; spc>=rw; spc--) {
			printf(" ");
		}
		for (c=1; c<=rw; c++) {
			printf("%2d",c);
		}
		printf("\n");
	}

}
void p12()
{
int i,j,k;

	for (i=1; i<=5; i++) {
		for (j=1; j<=5-i; j++) {
			printf("   ");
		}
		for (k=1; k<=2*i-1; k++) {
			printf(" %d ",k);
		}
		printf("\n");
	}
}
void p13()
{
int i,j,asci,spc;

	for (i=7; i>=1; i--) {
		for (spc=6; spc>=i; spc--) {
			printf("  ");
		}
		asci=65;
		for (j=1; j<=i; j++) {
			printf("%2c",asci++);
		}
		for (j=i-1; j>=0; j--) {
			printf("%2c",--asci);
		}
		printf("\n");
	}
}
void p14()
{
char ch1, ch2, ch3;

	for (ch1='A' ; ch1<='C' ; ++ch1) {
		for (ch2='A' ; ch2<='C' ; ++ch2) {
			for (ch3='A' ; ch3<='C' ; ++ch3) {
				printf(" %c%c%c", ch1, ch2, ch3);
			}
		}
	}
}
void p15()
{
int i, j;
	for (i=1;i<=5;i++) {
		for (j=5;j>=i;j--) {
			printf("%d",i);
		}
		printf("\n");
	}
}
void p16()
{
int i,j;
	for (i=7;i>=1;i-=2) {
		for (j=1;j<=i;j++) {
			printf("%d",j);
		}
		printf("\n");
	}
}
void p17()
{
int i, j, k;
	for (i=5;i>=1;i--) {
		k = i;
		for (j=1;j<=5;j++) {
			if(k <= 5) {
				printf("%d",k);
			} else {
				printf("5");
			}
			k++;
		}
		printf("\n");
	}
}
void p18()
{
int i,j,k;
	for (i=1;i<=5;i++) {
		for (j=1;j<=i;j++) {
			printf("%d",j%2);
		}
		printf("\n");
	}
}
void p19()
{
int i,j,k;
	for (i=4;i>=1;i--) {
		for (j=1;j<=4;j++) {
			if(j<=i)
			        printf("%d",j); else
			        printf(" ");
		}
		for (j=4;j>=1;j--) {
			if(j<=i)
			        printf("%d",j); else
			        printf(" ");
		}
		printf("\n");
	}
}
void p20()
{
int i,j;
	for (i=1;i<=5;i++) {
		for (j=5;j>=1;j--) {
			if(i==j)
			        printf("*"); else
			        printf("%d",j);
		}
		printf("\n");
	}
}
void compare()
{
  int count1 = 0, count2 = 0, flag = 0, i;
	char string1[30], string2[30];

	printf ("Enter the First string\n");
	gets (string1);

	printf ("Enter the Second string\n");
	gets (string2);

	while (string1[count1] != '\0')
		count1 ++;

	while (string2[count2] != '\0')
		count2 ++;

	i = 0;

	while (string1[i] == string2[i] && string1[i] != '\0')
	{
		i ++;
	}

	if (string1[i] > string2[i])
		printf ("First string is greater than Second string\n");
	else if (string1[i] < string2[i])
		printf("Second string is greater than First string\n");
	else
		printf ("Both strings are EQUAL\n");
}

void repeat()
{
int i, j, l, l1, l2;

    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);

    l1 = strlen(str);

    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);

    l2 = strlen(sub);

    for (i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }
    printf("%s occurs %d times in %s", sub, count1, str);
}
void mergesort()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;

    /* Input size of first array */
    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    /* Input elements in first array */
    printf("Enter elements in first array : ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    /* Input size of second array */
    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);

    /* Input elements in second array */
    printf("Enter elements in second array : ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }


    mergeSize = size1 + size2;


    /*
     * Merge two array in ascending order
     */
    index1 = 0;
    index2 = 0;
    for(mergeIndex=0; mergeIndex < mergeSize; mergeIndex++)
    {
        /*
         * If all elements of one array
         * is merged to final array
         */
        if(index1 >= size1 || index2 >= size2)
        {
            break;
        }


        if(arr1[index1] < arr2[index2])
        {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        }
        else
        {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    /*
     * Merge remaining array elements
     */
    while(index1 < size1)
    {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while(index2 < size2)
    {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }


    /*
     * Print merged array
     */
    printf("\nArray merged in ascending order : ");
    for(i=0; i<mergeSize; i++)
    {
        printf("%d\t", mergeArray[i]);
    }
}
void bubble()
{

    int array[MAXSIZE];
    int i, j, num, temp;

    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    /*   Bubble sorting begins */
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}
void pascalD()
{
    int array[30], temp[30], i, j, k, l, num;           //using 2 arrays

    printf("Enter the number of lines to be printed: ");
    scanf("%d", &num);
    temp[0] = 1;
    array[0] = 1;
    for (j = 0; j < num; j++)
        printf(" ");
    printf(" 1\n");
    for (i = 1; i < num; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (k = 1; k < num; k++)
        {
            array[k] = temp[k - 1] + temp[k];
        }
        array[i] = 1;
        for (l = 0; l <= i; l++)
        {
            printf("%3d", array[l]);
            temp[l] = array[l];
        }
        printf("\n");
    }
}
void odev()
{
    int array[100], i, num;
        printf("Enter the size of an array \n");

        scanf("%d", &num);
        printf("Enter the elements of the array \n");

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Even numbers in the array are - ");
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("%d \t", array[i]);
            }
        }

        printf("\n Odd numbers in the array are -");
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
                printf("%d \t", array[i]);
            }
        }

}
void repeatFREQ()
{
int arr[10], FreqArr[10], i, j, Count, Size;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}

	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
		}
	}

 	printf("\n Frequency of All the Elements in this Array are : \n");
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
		}
  	}
}

void kth()
{
    int arr[100], len, i, j, temp, n;
    printf("Enter the size of array");
    scanf("%d", &len);
    printf("\n Enter the array elements");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The new array is:");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n Enter Which kth Number You want");
    scanf("%d", &n);
    printf("\n The %d th kth number is: %d", n, arr[n - 1]);

}
void arrNUM()
{
    int nu,nu3;
    printf("Enter two numbers");
    scanf("%d%d",&nu,&nu3);
    int mu=nu*nu3;
    printf("%d",mu);
}
void AlternateE()
{
     int array[10];
        int i;
        printf("enter the element of an array \n");
        for (i = 0; i < 10; i++)
            scanf("%d", &array[i]);

        printf("Alternate elements of a given array \n");
        for (i = 0; i < 10; i += 2)
            printf( "%d\n", array[i]) ;
}
void MAT()
{
     int a[10][10], b[10][10];
        int i, j, row1, column1, row2, column2, flag = 1;

        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row1, &column1);

        printf("Enter the order of the matrix B \n");
        scanf("%d %d", &row2, &column2);

        printf("Enter the elements of matrix A \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of matrix B \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        printf("MATRIX A is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");

        }

        printf("MATRIX B is \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");

        }

        /*  Comparing two matrices for equality */

        if (row1 == row2 && column1 == column2)
        {
            printf("Matrices can be compared \n");
            for (i = 0; i < row1; i++)
            {
                for (j = 0; j < column2; j++)
                {
                    if (a[i][j] != b[i][j])
                    {
                        flag = 0;
                        break;
                    }
                 }
            }
        }

        else
        {
            printf(" Cannot be compared\n");
            exit(1);
        }

        if (flag == 1)
            printf("Two matrices are equal \n");
        else
            printf("But, two matrices are not equal \n");
}

void Identity()
{
    int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;

	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("      n = number of columns\n");
	scanf ("%d %d", &row, &col);

	int flag = 0;

	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}

	if (flag == 0)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}


}
void interchange()
{
     static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;

    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficents of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d,", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    printf("Enter the numbers of two rows to be exchanged \n");
    scanf("%d %d", &a, &b);
    for (i = 0; i < m; ++i)
    {
        /*  first row has index is 0 */
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("Enter the numbers of two columns to be exchanged \n");
    scanf("%d %d", &p, &q);
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            printf(" %d", array2[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; ++i)
    {
        /*  first column index is 0 */
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
     }
    printf("The matix after interchanging the two rows(in the original matrix) \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array1[i][j]);
        }
        printf("\n");
     }
    printf("The matix after interchanging the two columns(in the original matrix) \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
            printf(" %d", array2[i][j]);
        printf("\n");
    }

}
void freq()
{
    static int array[10][10];
    	int i, j, m, n, even = 0, odd = 0;

    	printf("Enter the order ofthe matrix \n");
    	scanf("%d %d", &m, &n);

    	printf("Enter the coefficients of matrix \n");
    	for (i = 0; i < m; ++i)
        {
                for (j = 0; j < n; ++j)
                {
                     scanf("%d", &array[i][j]);
                     if ((array[i][j] % 2) == 0)
                     {
                         ++even;
                     }
                     else
                         ++odd;
                 }

    	}

    	printf("The given matrix is \n");
    	for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }

        printf("\n The frequency of occurrence of odd number  = %d \n", odd);
        printf("The frequency of occurrence of even number = %d\n", even);
}
void upper()
{
    int i, j, r, c, array[10][10];
        printf("Enter the r and c value:");

        scanf("%d%d", &r, &c);
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }

        printf("matrix is");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%d", array[i][j]);
            }
            printf("\n");
        }

        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%d", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }

        }

        printf("\n\n");
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
	            if (j >= i)
                    {
                	printf("%d", array[i][j]);
            	    }
            	    else
                    {
                	//printf("\t");
	            }
            // printf("\n");

        }
}
}
void lower()
{
    int array[3][3], i, j, flag = 0 ;
    printf("\n\t Enter the value of Matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (array[i] < array[j] && array[i][j] == 0)
            {
                flag = flag + 1;
            }
        }
    }
    if (flag == 3)
        printf("\n\n Matrix is a Lower triangular matrix");
    else
        printf("\n\n Matrix is not a lower triangular matrix");
}
void ip1()
{
int i,j;
	printf("0\n");
	for (i=9;i>=1;i--) {
		for (j=i;j<=9;j++)
		      printf("%d",j);
		printf("0");
		for (j=9;j>=i;j--)
		      printf("%d",j);
		printf("\n");
	}
}
void ip2()
{
int i,j,k;
	for (i=1;i<=5;i++) {
		for (j=5;j>=1;j--) {
			if(j<=i)
			        printf("%d",j); else
			        printf(" ");
		}
		printf("\n");
	}
}
void ip3()
{
int i,j,k;
	for (i=1;i<=5;i++) {
		for (j=1;j<=5;j++) {
			if(j<=i)
			        printf("%d",j); else
			        printf(" ");
		}
		for (j=5;j>=1;j--) {
			if(j<=i)
			        printf("%d",j); else
			        printf(" ");
		}
		printf("\n");
	}
}
void ip4()
{
int i,j;
	for (i=1;i<=4;i++) {
		for (j=1;j<=i;j++) {
			if(j<i)
			        printf("%d*",i); else
			        printf("%d",i);
		}
		printf(" \n");
	}
	for (i=4;i>=1;i--) {
		for (j=1;j<=i;j++) {
			if(j<i)
			        printf("%d*",i); else
			        printf("%d",i);
		}
		printf(" \n");
	}
}
void ip5()
{
int i,j,k=1,l=1,n=4;
	for (i=1;i<=n;i++) {
		l=k;
		for (j=1;j<=i;j++)
		      printf("%d",l++);
		k=l--;
		for (j=1;j<i;j++)
		      printf("%d",--l);
		printf("\n");
	}
}
void ip6()
{
int i,j;
	for (i=1;i<=4;i++) {
		for (j=1;j<=i;j++) {
			printf("%d ", 9+i+j);
		}
		printf("\n");
	}
}
void ip7()
{
int i,j,k;
	k=1;
	for (i=1;i<=5;i++) {
		for (j=5;j>=1;j--) {
			if(j > i)
			        printf("   "); else
			        printf("%3d",k++);
		}
		printf("\n");
	}
}
void ip8()
{
int i,j;
	for (i=1;i<=4;i++) {
		for (j=i;j>1;j--)
		      printf("%d",j);
		for (j=1;j<=i;j++)
		      printf("%d",j);
		printf("\n");
	}
}
void ip9()
{
int i,j,k;
	k=1;
	for (i=1;i<=5;i++) {
		for (j=5;j>=i;j--) {
			printf("%3d",k++);
		}
		printf("\n");
	}
}
void ip10()
{
int i, j;
	for (i=5;i>=1;i--)
        {
		for (j=1;j<=i;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}
}



long fact(int);
void getFibonacii(int a,int b, int n)
{
    int sum;
    if(n>0)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        getFibonacii(a,b,n-1);
    }

}

long int getPower(int b,int p)
{
    long int result=1;
    if(p==0) return result;
    result=b*(getPower(b,p-1));  //call function again
}
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}

int main()
{
    int jk;
    int progNUMBER;
    int EVENorODD(int numEVENorODD);
    float circleAREA(int rad);
    int GREATof3(int num1,int num2,int num3);
    int HELLO();
    int checkArmstrongNumber(int n);
    int checkPrime(int n);
    int addNumbers(int n);
    long int multiplyNumbers(int n);
    int hcf(int n1, int n2);
    void reverseSentence();
    int power(int n1, int n2);
    int convert(long long n);
    long long convert1(int n);
    int find_largest(int [],int);
    void multiply(int mat1[12][12],int mat2[12][12],int ,int ,int );
    void sort(int m, int x[ ]);
    int find_len (char [], int);
    int lcm(int, int);
    int gcd(int, int);
    int product(int, int);
    void binary_search(int [], int, int, int);
    void bubble_sort(int [], int);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);


    for(int i=0; i<3; i++)
    {
        if(i==0)
            printf("Welcome User\n\n");
        else if(i==1)
            printf("           \n** 100 PROGRAMS IN C **\n\n\n");
        else
            printf("Available Programs  ==>\n\n\n\n");

    }










    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
    for(jk=0;jk<101;jk++)
    {
         if(jk==0)
        {

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
    printf("1:  Check if a number is even or odd\n\n");
        }
    else if(jk==1){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
     printf("2:  Program to Calculate Area of Circle\n\n");}
    else if(jk==2){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
    printf("3:  Program to find greatest in 3 numbers\n\n");}

        else if(jk==3){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("4:  Program to print hello world\n\n");}

        else if(jk==4){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("5:  Program to check if a number is Armstrong or not \n\n");}

        else if(jk==5){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
         printf("6:  Program to check if the number can be expressed as the sum of two prime numbers\n\n");}

        else if(jk==6){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("7:  Program to Find the Sum of Natural Numbers using Recursion\n\n");}

        else if(jk==7){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("8:  Calculate the factorial of a number using recursion\n\n");}

        else if(jk==8){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
         printf("9:  Program to Find H.C.F Using Recursion\n\n");}

        else if(jk==9){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("10: Program to Reverse a sentence using recursion\n\n");}

        else if(jk==10){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("11: Program to Calculate the power of a number using recursion\n\n");}

        else if(jk==11){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("12: Program to convert binary to decimal\n\n");}

        else if(jk==12){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("13: Program to decimal to binary\n\n");}

        else if(jk==13){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("14: Program to find the largest element in an array \n\n");}

        else if(jk==14){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("15: Program to convert temperature in  Fahrenheit to Celsius\n\n");}

        else if(jk==15){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("16: Program to perform matrix multiplication\n\n");}

        else if(jk==16){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("17: Program to perform matrix addition \n\n");}

        else if(jk==17){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("18: Program to Sort elements of array (ASCENDING)\n\n");}

        else if(jk==18){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("19: Program to print fibonacci series using recursion\n\n");}

        else if(jk==19){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
             printf("20: Program to Calculate power of a number program using recursion\n\n");}

        else if(jk==20){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("21: Program to to count digits in a number using recursion\n\n");}

        else if(jk==21){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("22: program to calculate length of the string using recursion\n\n");}

        else if(jk==22){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("23: program to find LCM of a Number using Recursion\n\n");}

        else if(jk==23){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        printf("24: Program to Find GCD of given Numbers using Recursion\n\n");}

        else if(jk==24){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("25: Program to Find Product of 2 Numbers using Recursion\n\n");}

        else if(jk==25){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);

        printf("26: Program to Perform Binary Search using Recursion\n\n");}

         else if(jk==26){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);

        printf("27: program to find ASCII value of any input character.\n\n");}


        else if (jk==27){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("28: Program to divide two numbers\n\n");}

         else if (jk==28){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("29: program to tell details of a number\n\n");}

        else if (jk==29){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("30: program to remarks of grades\n\n");}

         else if (jk==30){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("31: program to implement basic for\n\n");}

        else if (jk==31){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("32: program to implement basic do while\n\n");}

         else if (jk==32){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("33: program to implement basic nested for loops\n\n");}

         else if (jk==33){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("34: program to find sum of digits\n\n");}

        else if (jk==34){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("35: Program to find difference of  Numbers\n\n");}

         else if (jk==35){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("36: Program to find Average of n Numbers\n\n");}

         else if (jk==36){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("37: Program for armstrong number\n\n");}

        else if (jk==37){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("38: Program for printing factors of a number \n\n");}

        else if (jk==38){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("39: Program to find sum of n numbers \n\n");}

         else if (jk==39){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("40: Program to find largest of n numbers \n\n");}

        else if (jk==40){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("41: Program to find if number int or float \n\n");}

        else if (jk==41){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("42: Program to print Multiplication Table of input Number \n\n");}

        else if (jk==42){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("43: Program to insert elements to array \n\n");}


        else if (jk==43){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("44: Program to delete element of an array \n\n");}

        else if (jk==44){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("45: Program to Sum of N Numbers using Arrays \n\n");}

         else if (jk==45){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("46: Program to remove duplicate elements in an array \n\n");}

         else if (jk==46){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("47: Program for Determinant of 2x2 matrix \n\n");}

        else if (jk==47){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("48: Program  to Concatenate Strings using Pointer \n\n");}

         else if (jk==48){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("49: Program  for pointer to a function \n\n");}

        else if (jk==49){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("50: Program  for addition of 2 numbers \n\n");}

        else if (jk==50){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("51: Program  to Reverse a String using Pointer \n\n");}
         else if (jk==51){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("52: Program  to Swapping Two Numbers using pointer \n\n");}
        else if (jk==52){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("53: Program  to implement basic pointers  \n\n");}
        else if (jk==53){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("54: Program  to pointer comparison \n\n");}
         else if (jk==53){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("54: Program for Pointer Increment and Decrement \n\n");}
        else if (jk==54){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf(" for patterns \n\n");}
         else if (jk==55){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("55: pattern 1 \n\n");}
        else if (jk==56){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("56: pattern 2 \n\n");}
        else if (jk==57){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("57: pattern 3 \n\n");}
        else if (jk==58){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("58: pattern 4 \n\n");}
        else if (jk==59){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("59: pattern 5 \n\n");}
        else if (jk==60){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("60: pattern 6 \n\n");}
         else if (jk==61){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("61: pattern 7 \n\n");}
         else if (jk==62){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("62: pattern 8 \n\n");}
         else if (jk==63){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("63: pattern 9 \n\n");}
         else if (jk==64){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("64: pattern 10 \n\n");}
         else if (jk==65){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("65: to print pascals triangle \n\n");}
        else if (jk==66){SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("66: pattern 11 \n\n");}
         else if (jk==67){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("67: pattern 12 \n\n");}
        else if (jk==68){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("68: pattern 13 \n\n");}
        else if (jk==69){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("69: pattern 14 \n\n");}
        else if (jk==70){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("70: pattern 15 \n\n");}
        else if (jk==71){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("71: pattern 16 \n\n");}
        else if (jk==72){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("72: pattern 17 \n\n");}
        else if (jk==73){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("73: pattern 18 \n\n");}
        else if (jk==74){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("74: pattern 19 \n\n");}
        else if (jk==75){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("75: pattern 20 \n\n");}
          else if (jk==76){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("76: Program  to Accepts two Strings & Compare them \n\n");}
          else if (jk==76){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("76: Program to Count the Occurence of a Substring in String   \n\n");}
        else if (jk==77){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("77: Program to Find the Most/Least Repeated Character in the String  \n\n");}
         else if (jk==78){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("78: Program to   Merge and Sort Elements of 2 different Arrays  \n\n");}
        else if (jk==79){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("79: Program to Sort N Numbers in Ascending Order using Bubble Sort  \n\n");}
        else if (jk==80){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("80: Program to  Generate Pascal Triangle 1 D Array  \n\n");}
        else if (jk==81){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("81: Program to Print the Number of Odd & Even Numbers in an Array   \n\n");}
        else if (jk==82){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("82: Program to Print frequency of each element in an Array    \n\n");}
         else if (jk==83){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("83: Program to Print the kth Element in the Array     \n\n");}
          else if (jk==84){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("84: Program to Find the multiplication of two numbers \n\n");}
        else if (jk==85){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("85: Program to Print the Alternate Elements in an Array     \n\n");}
        else if (jk==86){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("86: Program to  Check if 2 Matrices are Equal   \n\n");}
        else if (jk==87){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("87: Program to Check if a given Matrix is an Identity Matrix  \n\n");}
         else if (jk==88){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("88: Program to Interchange any two Rows & Columns in the given Matrix  \n\n");}
        else if (jk==89){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("89: Program to  Find the Frequency of Odd & Even Numbers in the given Matrix  \n\n");}
         else if (jk==90){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("90: Program to Display Upper Triangular Matrix   \n\n");}
         else if (jk==91){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("91: Program to  Display Lower Triangular Matrix \n\n");}
        else if (jk==92){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("92: intermediate pattern 1 \n\n");}

        else if (jk==93){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("93: intermediate pattern 2 \n\n");}
        else if (jk==94){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("94: intermediate pattern 3 \n\n");}

        else if (jk==95){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("95: intermediate pattern 4 \n\n");}

        else if (jk==96){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("96: intermediate pattern 5 \n\n");}

        else if (jk==97){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("97: intermediate pattern 6 \n\n");}

        else if (jk==96){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("96: intermediate pattern 7 \n\n");}

        else if (jk==98){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("98: intermediate pattern 8 \n\n");}

        else if (jk==99){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("99: intermediate pattern 9 \n\n");}
        else{
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_INTENSITY);
        printf("100: intermediate pattern  10\n\n");}

Sleep(150);
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    printf("QUICK REFERENCE LIST\n\n");
    printf("        BASIC PROGRAMS\n");
    printf("1,2,3,4,5,6,12,13,15,27,28,29,30,31,32\n");
    printf("33,34,35,37,38,39,40,41,42,50,84\n\n");

    printf("        NESTED FOR LOOP PATTERNS\n");
    printf("55 to 75, 92 to 100 and 80\n\n");

    printf("        ARRAY\n");
    printf("14 to 18,  43 to 46 ,78,81,82,83,85\n\n");

    printf("        SORTING\n");
    printf("55 to 75, 92 to 100 and 80\n\n");

    printf("        MATRIX\n");
    printf("79\n\n");

    printf("        RECURSION\n");
    printf("7  to 11, 19 to 22,  24  to 26\n\n");

    printf("        STRINGS\n");
    printf("76, 77\n\n");

    printf("        POINTERS\n");
    printf("49,52,53,54\n\n");

    printf("        STRINGS AND POINTERS\n");
    printf("48,51\n\n");

int exit=2;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_INTENSITY|BACKGROUND_RED);
 while (exit>0)
 {
printf("Enter 1 to continue and -1 to exit ");
 scanf("%d",&exit);
 if(exit==-1){
    break;
 }
 else{

    printf("Enter a number corresponding to the program you want to execute\n ");
    scanf("%d",&progNUMBER);
    switch (progNUMBER)
    {
        case 1:
        {
            int numEVENorODD, remainder;
            printf("\n\nEnter an integer : ");
            scanf("%d", &numEVENorODD);
                remainder=EVENorODD(numEVENorODD);
            if (remainder == 0)
            printf("\n%d is an even integer\n", numEVENorODD);
            else
            printf("\n%d is an odd integer\n", numEVENorODD);
            break;
        }
        case 2:
        {
            int rad;
            float PI = 3.14, area;
            printf("\nEnter radius of circle in cm: ");
            scanf("%d", &rad);
            area=circleAREA(rad);
            printf("\nArea of circle : %.2f is cm2\n\n ", area);
            break;
        }
        case 3:
        {
            int num1, num2, num3,greatest;
            printf("\nEnter number 1,number 2 and number 3");
            scanf("%d %d %d", &num1, &num2, &num3);
            greatest=GREATof3(num1,num2,num3);

            printf("\n\n%d is greatest of three numbers",greatest);
            break;
}
        case 4:
        {
            int h=HELLO();
            break;
        }
        case 5:
        {
            int n, flag;
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            flag = checkArmstrongNumber(n);
            if (flag == 1)
                printf("%d is an Armstrong number.", n);
            else
                printf("%d is not an Armstrong number.", n);
            break;
        }
        case 6:
        {
            int n, i, flag = 0;
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            for (i = 2; i <= n / 2; ++i)
            {
                if (checkPrime(i) == 1)
                {
                    if (checkPrime(n - i) == 1)
                    {
                        printf("%d = %d + %d\n", n, i, n - i);
                        flag = 1;
                    }
                }
            }
            if (flag == 0)
                printf("%d cannot be expressed as the sum of two prime numbers", n);
            break;
        }
        case 7:
        {
            int num;
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            printf("Sum = %d", addNumbers(num));
            break;
        }
        case 8:
        {
            int n;
            printf("Enter a positive integer: ");
            scanf("%d",&n);
            printf("Factorial of %d = %ld", n, multiplyNumbers(n));
            break;
        }
        case 9:
        {
            int n1, n2;
            printf("Enter two positive integers: ");
            scanf("%d %d", &n1, &n2);
            printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2));
            break;
        }
        case 10:
        {
            printf("Enter a sentence: ");
            reverseSentence();
            break;
        }
        case 11:
        {
            int base, a, result;
            printf("Enter base number: ");
            scanf("%d", &base);
            printf("Enter power number(positive integer): ");
            scanf("%d", &a);
            result = power(base, a);
            printf("%d^%d = %d", base, a, result);
            break;
        }
        case 12:
        {
            long long n;
            printf("Enter a binary number: ");
            scanf("%lld", &n);
            printf("%lld in binary = %d in decimal", n, convert(n));
            break;
        }
        case 13:
        {
            int n;
            printf("Enter a decimal number: ");
            scanf("%d", &n);
            printf("%d in decimal = %lld in binary", n, convert1(n));
            break;
        }
        case 14:
        {
            int arr[30],size,largest,i;
            printf("Enter the size of the array maximum up to 30: ");
            scanf("%d",&size);
            printf("Enter the %d integer numbers: ",size);
            for(i=0;i<size;i++)
                scanf("%d",&arr[i]);
            largest = find_largest(arr,size);
            printf("\nThe largest element is: %d\n",largest);
            break;
        }
        case 15:
        {
            con();
            break;
        }
        case 16:
        {
            int mat1[12][12],mat2[12][12];
            int i,j,k,m,n,p;
            printf("Enter the number of rows and columns for 1st matrix\n");
            scanf("%d%d",&m,&n);
            printf("Enter the elements of the 1st matrix\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&mat1[i][j]);
            }
            }
    //no of col of 1st mat = no of rows of 2nd mat
            printf("Enter the number of columns for 2nd matrix\n");
            scanf("%d",&p);
            printf("Enter the elements of the 2nd matrix\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<p;j++)
            {
            scanf("%d",&mat2[i][j]);
            }
    }
printf("The 1st matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The 2 nd matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    multiply(mat1,mat2,m,n,p);
            break;
        }
        case 17:
            {
                int m1[10][10],m2[10][10],m3[10][10],row,col;
printf("Enter number of rows :");
    scanf("%d",&row);
    printf("Enter number of columns :");
    scanf("%d",&col);
    read_arr(m1,row,col);
    read_arr(m2,row,col);
    add_arr(m1,m2,m3,row,col);
    print_arr(m3,row,col);

                break;
            }
        case 18:
            {
                int ik;
       int marks[5] = {40, 90, 73, 81, 35};

       printf("Marks before sorting\n");
       for(ik = 0; ik < 5; ik++)
          printf("%d ", marks[ik]);
       printf("\n\n");

       sort (5, marks);
       printf("Marks after sorting\n");
       for(ik = 0; ik < 5; ik++)
          printf("%4d", marks[ik]);
       printf("\n");
                break;
            }
        case 19:
            {
                 int a,b,sum,n;
    int i;

    a=0;        //first term
    b=1;        //second term

    printf("Enter total number of terms: ");
    scanf("%d",&n);

    printf("Fibonacii series is : ");
    //print a and b as first and second terms of series
    printf("%d\t%d\t",a,b);
    //call function with (n-2) terms
    getFibonacii(a,b,n-2);
    printf("\n");
    return 0;
                break;
            }
        case 20:
            {
                int base,power;
    long int result;

    printf("Enter value of base: ");
    scanf("%d",&base);

    printf("Enter value of power: ");
    scanf("%d",&power);

    result=getPower(base,power);

    printf("%d to the power of %d is: %ld\n",base,power,result);
return 0;
                break;
            }
        case 21:
            {
                int number;
    int count=0;

    printf("Enter a positive integer number: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("Total digits in number %d is: %d\n",number,count);

    return 0;
                break;
            }
        case 22:
            {
                char str[100];
	int len = 0;

	printf ("Enter the string: \n");
	scanf ("%[^\n]s", str);

	len = find_len (str, 0);

	printf ("The length of the given string is: %d\n", len);

                break;
            }
        case 23:
            {
                 int a, b, result;
    int prime[100];

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);

                break;
            }
        case 24:
            {
                int a, b, result;

    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
                break;
            }
        case 25:
            {
                int a, b, result;

    printf("Enter two numbers to find their product: ");
    scanf("%d%d", &a, &b);
    result = product(a, b);
    printf("Product of %d and %d is %d\n", a, b, result);

                 break;
            }
        case 26:
            {
                int key, size, i;
    int list[25];

    printf("Enter size of a list: ");
    scanf("%d", &size);
    printf("Enter elements\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&list[i]);
    }
    bubble_sort(list, size);
    printf("\n");
    printf("Enter key to search\n");
    scanf("%d", &key);
    binary_search(list, 0, size, key);
                break;
            }
             case 27:
        {
            ascii();
            break;
        }
        case 28:
        {
            divide();
            break;
        }
        case 29:
        {
            detailsOFnum();
            break;
        }
        case 30:
        {
            grades();
            break;
        }
        case 31:
        {
            basicFOR();
            break;
        }
        case 32:
        {
            basicDOwhile();
            break;
        }
        case 33:
        {
            nestedFOR();
            break;
        }
        case 34:
        {
            sumofDIGITS();
            break;
        }
        case 35:
        {
            difference();

            break;
        }
        case 36:
        {
            average();
            break;
        }
        case 37:
        {
            armstrong();
            break;
        }
        case 38:
        {
            factors();
            break;
        }
        case 39:
        {
            sumofN();
            break;
        }
        case 40:
        {
            largestN();
            break;
        }
        case 41:
        {
            numTYPE();
            break;
        }
        case 42:
        {
            Table();
            break;
        }
        case 43:
        {
            insertARRAY();
            break;
        }
        case 44:
        {
            deleteELEMENT();
            break;
        }
        case 45:
        {
            sumAR();
            break;
        }
        case 46:
        {
            dup();
            break;
        }
        case 47:
        {
            determinant();
            break;
        }
        case 48:
        {
            concatenate();
            break;
        }
        case 49:
        {
            PtoF();
            break;
        }
        case 50:
        {
            add();
            break;
        }
        case 51:
        {
            rev();
            break;
        }
        case 52:
        {
            swaap();
            break;
        }
        case 53:
        {
            poinBASIC();
            break;
        }
        case 54:
        {
            poiINC();
            break;
        }
        case 55:
        {
            p1();
            break;
        }
        case 56:
        {
            p2();
            break;
        }
        case 57:
        {
            p3();
            break;
        }
        case 58:
        {
            p4();
            break;
        }
        case 59:
        {
            p5();
            break;
        }
        case 60:
        {
            p6();
            break;
        }
        case 61:
        {
            p7();
            break;
        }
        case 62:
        {
            p8();
            break;
        }
        case 63:
        {
            p9();
            break;
        }
        case 64:
        {
            p10();
            break;
        }
        case 65:
        {
            pascals();
            break;
        }
        case 66:
        {
            p11();
            break;
        }
        case 67:
        {
            p12();
            break;
        }
        case 68:
        {
            p13();
            break;
        }
        case 69:
        {
            p14();
            break;
        }
        case 70:
        {
            p15();
            break;
        }
        case 71:
        {
            p16();
            break;
        }
        case 72:
        {
            p17();
            break;
        }
        case 73:
        {
            p18();
            break;
        }
        case 74:
        {
            p19();
            break;
        }
        case 75:
        {
            p20();
            break;
        }
        case 76:
        {
            compare();
            break;
        }
        case 77:
        {
            repeat();
            break;
        }
        case 78:
        {
            mergesort();
            break;
        }
        case 79:
        {
            bubble();
            break;
        }
        case 80:
        {
            pascalD();
            break;
        }
        case 81:
        {
            odev();
            break;
        }
        case 82:
        {
            repeatFREQ();
            break;
        }
        case 83:
        {
            kth();
            break;
        }
        case 84:
        {
            arrNUM();
            break;
        }
        case 85:
        {
            AlternateE();
            break;
        }
        case 86:
        {
            MAT();
            break;
        }
        case 87:
        {
            Identity();
            break;
        }
        case 88:
        {
            interchange();
            break;
        }
        case 89:
        {
            freq();
            break;
        }
        case 90:
        {
            upper();
            break;
        }
        case 91:
        {
            lower();
            break;
        }
        case 92:
        {
            ip1();
            break;
        }
        case 93:
        {
            ip2();
            break;
        }
        case 94:
        {
            ip3();
            break;
        }
        case 95:
        {
            ip4();
            break;
        }
        case 96:
        {
            ip6();
            break;
        }
        case 97:
        {
            ip7();
            break;
        }
        case 98:
        {
            ip8();
            break;
        }
        case 99:
        {
            ip9();
            break;
        }
        case 100:
        {
            ip10();
            break;
        }
        default:
        {
            printf("\nNumber entered do not correspond to any program\n\n");
            break;
        }

    }
 }
 }
    return 0;
}
