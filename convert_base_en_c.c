#include<stdio.h>

#define BASE "0123456789ABCDEF"
// verifier que les bases A et B entre 2 et 16 
int check_base(int base)
{
	return (base >= 2 && base <= 16);
}
// convert le type de la base a une base ,example : la base 10 = 0123456789
void	chose_base(int typedebase)
{
	int i;

	for (i = 0; i < typedebase; i++)
		printf("%c", BASE[i]);
	printf("\n");
}

// convert les carateres de type char a la valeur equivalente , exemple : A dans hexadicimal = 10
int CharToDec(char c){
  if(c>='0' && c<='9') return c-'0';
  if(c>='a' && c<='f') return c-'a'+10;
  if(c>='A' && c<='F') return c-'A'+10;
  return 0;
}
// veriefier est ce que le nombre saisir par l'utilisateur appartient a la base A : example 0101 est dans la base binaire "01" 
int	check_range(char c, int base)
{
	char	*B = "0123456789ABCDEF";
	int i;

	for (i = 0; i < base; i++)
	{
		if (i < 10)
		{
			if (c == B[i])
				return (1);
		}
		else
		{
			if (c == B[i] || c == B[i] + 32)
				return (1);
		}
	}
	return (0);
} 
int	is_valid(char *nbr, int base)
{
	int i;
	for (i = 0; nbr[i]; i++)
	{
		if (check_range(nbr[i], base) == 0)
			return (0);
	}
	return (1);
}
// convertir le nombre saisie par l'utilisateur au decimale 
int to_decimal(char H[], int typedebase)
{
  char *P;
  int p=1, d=0;
  
  for(P=H;*P;P++);

  for(P--;P>=H;P--)
  {
    d = d + (CharToDec(*P) * p);
    p =  p*typedebase;
  }
  return d;
}
// convert le decimal a la base B 
void ft_putnbr_base(int nbr, int size)
{
	if(nbr >= size)
	{
		ft_putnbr_base(nbr / size, size);
		ft_putnbr_base(nbr % size, size);
	}
	else
		printf("%c", BASE[nbr]);
}

int main( )
{
		char nbr_de_depart[1000];
		int type_de_baseA;
		int type_de_baseB;
		int decimal;
	
		// get base A 
		printf("choisir votre base A entre 2 et 16 : ");
		scanf("%d",&type_de_baseA);
		// afiche l'erreur quand l'utilisateur sasit une base superieur a 16 
		while(check_base(type_de_baseA) == 0)
		{
			printf("error ==> choisir un nombre btw 2 et 16: ");
			scanf("%d",&type_de_baseA);
		}
		// affiche la base A choisit par l'utilisateur 
		printf("la base choisie A et: ");
		chose_base(type_de_baseA);

		// get number 
		printf("entre le nobre a convertir dans la base A: ");
		scanf("%s",nbr_de_depart);
		// afiche l'erreur quand l'utilisateur saisit un nombre qui n'appartient pas a la base A
		while(is_valid(nbr_de_depart, type_de_baseA) == 0)
		{
			printf("error ==> le nombre n'est pas valid: ");
			scanf("%s",nbr_de_depart);
		}

		// convertie le nombre vers la base decimal 
		decimal = to_decimal(nbr_de_depart,type_de_baseA);

		// get base B 
		printf("entrer le type de la base B entre 2 et 16: ");
		scanf("%d",&type_de_baseB);
		// affiche l'erreur quand l'utilisateur entre une base superieur a 16
		while(check_base(type_de_baseB) == 0)
		{
			printf("error ==> choisir un nombre btw 2 et 16: ");
			scanf("%d",&type_de_baseB);
		}
		// affiche la base B choisie par l'utilisateur
		printf("la base choisie B et: ");
		chose_base(type_de_baseB);
	
		// convertie decimal a base B + print resultas 
		printf("result est: ");
		ft_putnbr_base(decimal, type_de_baseB);
	return 0;
}
