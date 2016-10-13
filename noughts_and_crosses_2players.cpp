#include <iostream.h>

using namespace std;

int main()
{
	int i, j, numero, num=0, h=0, l=0, c=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, cs=0;
	char player, matriz[3][3];
	string jogador;

	for(h=0; h<9; h++)
	{
		system("cls");

		if(h%2==0)
		{
			cout<<"Player 1"<<endl;
			player='x';
			jogador='1';
			cout<<endl;
		}
		if(h%2!=0)
		{
			cout<<"Player 2"<<endl;
			player='2';
			jogador='2';
			cout<<endl;
		}

		cout<<"posicoes: "<<endl;
		cout<<endl;
		num=0;

		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				num++;
				cout<<num;
				cout<<" ";
			}
			cout<<endl;
			cout<<endl;
		}

		cout<<"jogadas: "<<endl;
		cout<<endl;
		num=0;

		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				num++;
				if(matriz[i][j]=='2')
				{
					cout<<"o";
				}
				if(matriz[i][j]=='x')
				{
					cout<<"x";
				}
				if(matriz[i][j]!='2' && matriz[i][j]!='x')
				{
					cout<<"_";
				}
				cout<<" ";
			}
			cout<<endl;
			cout<<endl;
		}

		cout<<"Digite a posicao que deseja: ";
		cin>>numero;

		if(numero>=10 || numero<1)
		{
			cout<<"Essa posicao nao existe";
			h--;
		}
		else
		{
			if(numero==1 && c1!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==1 && c1==0)
			{
				c1++;
				l=0;
				c=0;
				matriz[l][c]=player;
			}
			if(numero==2 && c2!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==2 && c2==0)
			{
				c2++;
				l=0;
				c=1;
				matriz[l][c]=player;
			}
			if(numero==3 && c3!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==3 && c3==0)
			{
				c3++;
				l=0;
				c=2;
				matriz[l][c]=player;
			}
			if(numero==4 && c4!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==4 && c4==0)
			{
				c4++;
				l=1;
				c=0;
				matriz[l][c]=player;
			}
			if(numero==5 && c5!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==5 && c5==0)
			{
				c5++;
				l=1;
				c=1;
				matriz[l][c]=player;
			}
			if(numero==6 && c6!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==6 && c6==0)
			{
				c6++;
				l=1;
				c=2;
				matriz[l][c]=player;
			}
			if(numero==7 && c7!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==7 && c7==0)
			{
				c7++;
				l=2;
				c=0;
				matriz[l][c]=player;
			}
			if(numero==8 && c8!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==8 && c8==0)
			{
				c8++;
				l=2;
				c=1;
				matriz[l][c]=player;
			}
			if(numero==9 && c9!=0)
			{
				cout<<"Essa opcao ja foi digitada"<<endl;
				h--;
			}
			if(numero==9 && c9==0)
			{
				c9++;
				l=2;
				c=2;
				matriz[l][c]=player;
			}

			if( (matriz[0][0]==matriz[0][1] && matriz[0][0]==matriz[0][2]) || (matriz[1][0]==matriz[1][1] && matriz[1][0]==matriz[1][2]) || (matriz[2][0]==matriz[2][1] && matriz[2][0]==matriz[2][2]) || (matriz[0][0]==matriz[1][0] && matriz[0][0]==matriz[2][0]) || (matriz[0][1]==matriz[1][1] && matriz[0][1]==matriz[2][1]) || (matriz[0][2]==matriz[1][2] && matriz[0][2]==matriz[2][2]) || (matriz[0][0]==matriz[1][1] && matriz[0][0]==matriz[2][2]) || (matriz[0][2]==matriz[1][1] && matriz[0][2]==matriz[2][0]))
			{
				system("cls");
				cout<<"Ganhou o player "<<jogador<<endl;
				system("pause");
				return 0;
			}
		}
	}
	system("cls");
	cout<<"Empataram"<<endl;
}
