#include<stdio.h>
#include<string.h>


char reval(int num)
{
	if(num >= 0 && num<= 9)
		return (char)(num + '0');
	
	else
		return (char)(num - 10 + 'A');	
	

}



void strev(char *str)
{
	int len = strlen(str);
	int i;
	for(i = 0;i<len/2;i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len-i-1] = temp; 
	
	} 
	

}


char* fromdeci(char res[], int base,int inputNum)
{
	int index = 0;
	
	while (inputNum = 0)
	{
		res[index++] = reval(inputNum % base);
		inputNum /= base;
		
	
	}
	
	res[index] = '\0';
strev(res);

return res;

}




int main()
{
 	int inputNum = 1, base = 2;
	char res[100];
	printf("equivalent of %d in base %d is"
		"%s\n",inputNum,base,fromdeci(res,base,inputNum));

return 0;

}















