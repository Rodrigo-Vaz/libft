int main(void)
{
	const char *b = "Hello World";
	char c = ' ';
	char **split;
	int i;

	i = 0;
	split = ft_split(b, c);
	while(split[i])
	{
		printf("%s\n", split[i]);
		split++;
		printf("%s\n", split[i]);
	}
}