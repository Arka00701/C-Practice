#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define PINK "\033[1;35m"
#define CYAN "\033[1;36m"
#define GOLD "\033[1;33m"
#define DIM "\033[2m"

static void trim_newline(char *text)
{
	text[strcspn(text, "\n")] = '\0';
}

static void print_bar(void)
{
	printf("%s\n        * * * * * * * * * * * * * * * * * * * *%s\n", PINK, RESET);
}

int main()
{
	char name[50];
	int mood;

	printf("\n%s", PINK);
	printf("        M I D N I G H T   M U S E\n");
	printf("        your personal dose of charm\n");
	printf("%s", RESET);
	print_bar();

	printf("\n%sWhat should I call you? %s", CYAN, RESET);
	if (fgets(name, sizeof(name), stdin) == NULL)
	{
		return 1;
	}
	trim_newline(name);

	if (name[0] == '\0')
	{
		strcpy(name, "mysterious one");
	}

	printf("\n%sChoose your mood:%s\n", CYAN, RESET);
	printf("  1. Velvet confidence\n");
	printf("  2. Dangerous sparkle\n");
	printf("  3. Soft and irresistible\n");
	printf("\n%sMood: %s", CYAN, RESET);

	if (scanf("%d", &mood) != 1 || mood < 1 || mood > 3)
	{
		mood = 1;
	}

	printf("\n%s", PINK);
	printf("              .-''''''-.\n");
	printf("            .'          '.\n");
	printf("           /   .------.   \\\n");
	printf("          ;   /  .--.  \\   ;\n");
	printf("          |  |  (    )  |  |\n");
	printf("          ;   \\  '--'  /   ;\n");
	printf("           \\   '-.__.-'   /\n");
	printf("            '.          .'\n");
	printf("              '-.____.-'\n");
	printf("%s", RESET);

	printf("\n%s%s, your midnight reading:%s\n", GOLD, name, RESET);
	switch (mood)
	{
		case 2:
			printf("You walk in and the room forgets what it was saying.\n");
			printf("Your signature move: a smile with excellent timing.\n");
			break;
		case 3:
			printf("You are the kind of beautiful people remember on the way home.\n");
			printf("Your signature move: making eye contact feel like a secret.\n");
			break;
		default:
			printf("You do not chase attention; it keeps finding you anyway.\n");
			printf("Your signature move: entering like you already own the night.\n");
			break;
	}

	print_bar();
	printf("%s  Stay luminous. Stay unforgettable.%s\n\n", DIM, RESET);
	return 0;
}
