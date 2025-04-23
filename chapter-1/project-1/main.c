#include <stdio.h>
#include <string.h>



int main(void)
{
	int height = -1;
	
	char input_buffer[100];
	while(height < 0)
	{	
		printf("Enter a Height value for the check marki [default = 8]: "); 
		
		if(fgets(input_buffer, sizeof(input_buffer), stdin))
		{
			input_buffer[strcspn(input_buffer, "\n")] = 0;

			if(strlen(input_buffer) == 0)
			{
				height = 8 ;
			} else {
				if(sscanf(input_buffer, "%d", &height) != 1)
				{
					printf("Invalid input!");
				}
			}
		}
	}

	int left_stars = height / 2;
	int line_width = height + left_stars - 1;

	for(int i = 0; i < height; i++)
	{
		printf("\n");
		for(int j = 0; j < line_width; j++)
		{

			if(j == i - (height/2) || j == line_width - 1)
			{
				putchar('*');
				fflush(stdout);
			} else {
				putchar(' ');
				fflush(stdout);
			}
		}

		line_width--;
	
	}
	
	printf("\n");
	return 0;
}
