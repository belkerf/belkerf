int ft_atoi(char *str)
{
	int n = 0;
	int a = 0;
	int s = 2;
	int k = 0;

	while (*str)
	{
		if (*str <= '9' && *str >= '0')
		{
			n = (n * 10) + *str - '0';
			a++;
		}
		else if (*str == ' ' && a == 0)
		{
			k++;
		}
		else if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				s++;
			a++;
		}
		else
			break;
		str++;
	}
	if (s % 2 != 0)
		return -n;
	else
		return n;
}
int main()
{
	int i;
	char *str = "  ---+1234a13";

	i = ft_atoi(str);
	printf("%i", i);

}
