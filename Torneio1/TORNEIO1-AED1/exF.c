/*
PROBLEMA 1383 BEECROWD
O jogo de Sudoku espalhou-se rapidamente por todo o mundo,
tornando-se hoje o passatempo mais popular em todo o planeta.
Muitas pessoas, entretanto, preenchem a matriz de forma incorreta, desrespeitando as restrições do jogo. 
Sua tarefa neste problema é escrever um programa que verifica se uma matriz preenchida é ou não uma solução 
para o problema.
*/

#include <stdio.h>

int linhas(int game[9][9]);
int colunas(int game[9][9]);
int quad(int game[9][9]);

int main()
{
	int n, l, c, i, ii, iii, k=1, game[9][9];
	scanf("%d", &n);
	while(n>0)
	{
		for(l=0; l<9; l++)//recheia a matriz
		{
			for(c=0; c<9; c++)
			{
				scanf("%d", &game[l][c]);
			}
		}

		i = linhas(game);//i ii e iii sao variaveis que assumem binarios de acordo com o retorno 
		ii = colunas(game);//de cada uma destas funcoes para chegar a uma conclusao sobre cada instancia
		iii = quad(game);

		printf("Instancia %d", k);
		if(i==0 && ii==0 && iii==0)
		{
			printf("\nSIM\n");
		}else printf("\nNAO\n");

		printf("\n");
		n--;
		k++;
	}
	return 0;
}

/*a funcao abaixo compara cada coluna de uma linha da matriz e avalia se ha algum elemento repetido, retornando 1 caso sim e 0 caso nao*/
int linhas(int game[9][9])
{
	int l, c, cc, v=0;
	for(l=0; l<9; l++)
	{
		for(c=0; c<9; c++)
		{
			cc = 0;
			while(cc<9)
			{
				if(cc!=c)
				{
					if(game[l][cc]==game[l][c])
					{
						v = 1;
						return v;
					}else cc++;
				}else cc++;
			}
		}
	}
  return v;
}

/*a funcao abaixo compara cada linha de uma coluna da matriz e avalia se ha algum elemento repetido, retornando 1 caso sim e 0 caso nao*/
int colunas(int game[9][9])
{
	int l, c, lc, v=0;
	for(c=0; c<9; c++)
	{
		for(l=0; l<9; l++)
		{
			lc = 0;
			while(lc<9)
			{
				if(lc!=l)
				{
					if(game[lc][c]==game[l][c])
					{
						v = 1;
						return v;
					}else lc++;
				}else lc++;
			}
		}
	}
	return v;
}

/*a funcao abaixo divide a matriz em 9 quadrantes e avalia se ha algum elemento repetido, retornando 1 caso sim e 0 caso nao*/
int quad(int game[9][9])
{
  int l, c, aux, al, ac, v=0;
	for(l=0; l<3; l++)//analisa os quadrantes 1 2 e 3
	{
		for(c=0; c<3; c++)
		{
			aux = game[l][c];
			for(al=0; al<3; al++)
			{
    	if(al==l)
    	{
        	for(ac=0; ac<3; ac++)
			{
        		if(ac!=c)
            	{
					if(aux == game[al][ac])
						{
							v = 1;
					    } 
              	}
			}
        }else
        {
          for(ac=0; ac<3; ac++)
				    {
					   if(aux == game[al][ac])
					   {
						   v = 1;
					   } 
				    }
        }
			}
		}
	}
	for(l=3; l<6; l++)//analisa os quadrantes 4 5 e 6
	{
		for(c=0; c<3; c++)
		{
			aux = game[l][c];
			for(al=3; al<6; al++)
			{
        		if(al==l)
        		{
          			for(ac=0; ac<3; ac++)
          			{
            		if(ac!=c)
              		{
						if(aux == game[al][ac])
						{
							v = 1;
						} 
              		}
          			}
        		}else
        		{
          			for(ac=0; ac<3; ac++)
					{
						if(aux==game[al][ac])
						{
							v=1;
						} 
					}
        		}
			}
		}
	}
	for(l=6; l<9; l++)//analisa os quadrantes 7 8 e 9
	{
		for(c=0; c<3; c++)
		{
			aux = game[l][c];
			for(al=6; al<9; al++)
			{
        		if(al==l)
        		{
          			for(ac=0; ac<3; ac++)
          			{
            		if(ac!=c)
              		{
						if(aux == game[al][ac])
						{
							v = 1;
						} 
              		}
          			}
        		}else
        		{
          			for(ac=0; ac<3; ac++)
					{
						if(aux==game[al][ac])
						{
							v=1;
						} 
					}
        		}
			}
		}
	}
	return v;
}