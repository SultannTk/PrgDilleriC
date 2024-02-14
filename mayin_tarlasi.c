#include <stdio.h>
#include <stdlib.h>

#define MATRIS_BOYUT 8  //Mayin tarlasinin kaça kaçlýk matris old.
#define MAYIN 7   // Mayin sayisi
#define WIN 1    //KAZANDIM
#define LOSE -1//KAYBETTIM
#define CONTINUE 0//Oyuna devam ediyorum

// Global Degiskenler

int alttablo[MATRIS_BOYUT+2][MATRIS_BOYUT+2];
char tab[MATRIS_BOYUT+2][MATRIS_BOYUT+2];
int nb_mine;



//Projede kullanilan fonksiyonlar

void alt_dizi_olustur();//Alt tablomu olusturmami saglar
void diziyi_baslat();//ilk olarak tablomu baslatmami saglar
void alt_tabloyu_goster();//Alt tablomu bastirmami saglar
void tabloyu_goster();//Tablomu bastirmami saglar
void mayin_yerlestir();//Mayinlari yerlestirir
void sonuc_kontrol();//Kazanip kazanmadigimizi kontrol eden bir fonkiyon
void kesfet();//Mayin tarlamda ne var ne yok kesif ediyo.
int ac(int satir,int sutun);//Mayin tarlasinin icindeki istedigim koordinati acmami saglar.







  
int main(void)
{
  int satir,sutun;
    int ilerleme;

    int yeniden;
    char action;//Hangi harf
    printf("Mayin Tarlasi oyunumuza hosgeldiniz\n");
    alt_dizi_olustur();
    diziyi_baslat();
    do
    {
        alt_tabloyu_goster();
        printf("\n");
        printf("Lutfen su formatta giriniz: c,satir,sutun veya d,satir,sutun veya e,satir,sutun\n");
	    scanf("%c,%d,%d",&action,&satir,&sutun);
        printf("\n");

        if(action == 'c')
        {

            ilerleme=ac(satir,sutun);
        }
        else if(action == 'd')
        {
            if(nb_mine >d_count)
            {
                d_count++;
                tab[satir][sutun]='D';
                ilerleme=sonuc_kontrol();
            }
        }
        else if(action == 'e')
        {
            if(d_count>0)
            {
                d_count--;
            }
            tab[satir][sutun]='#';
            ilerleme=ac(satir,sutun);
        }


        if(ilerleme==LOSE)
        {
            printf("Arkadasim oyunu kaybettin \n");
            alttabloyu_goster();
            printf("Oyunu yendiden oynamak istiyorusunuz? [1-Evet][0-Hayir] \n");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
            case 0:
                printf("Tesekkürler Gorusuruz\n");
                return 0;
                break;
            case 1:
                d_count=0;
                ilerleme=CONTINUE;
                alt_dizi_olustur();
                diziyi_baslat();
                break;
            default:
                printf("Yanlis bir deger girdiniz\n");
                break;
            }
        }

        if(ilerleme==WIN)
        {
            printf("Bravo Harika bir is cikardin\n");
            alttabloyu_goster();
            printf("Oyunu yendiden oynamak istiyorusunuz? [1-Evet][0-Hayir] \n");
            scanf("%d",&yeniden);
            switch(yeniden)
            {
            case 0:
                printf("Tesekkürler Gorusuruz\n");
                return 0;
                break;
            case 1:
                d_count=0;
                ilerleme=CONTINUE;
                alt_dizi_olustur();
                diziyi_baslat();
                break;
            default:
                printf("Yanlis bir deger girdiniz\n");
                break;
            }

        }

    }
    while(1);
    return 0;

}

void alt_dizi_olustur()
{
    int i,j,nb_mine;

    for(i=0;i<=MATRIS_BOYUT+1;i++)
    {

        for(j=0;j<=MATRIS_BOYUT,+1;j++)
        {
            alttablo[i][j]=0;
        }

    }

    for(i=0;i<=MATRIS_BOYUT+1;i++)
    {
        alttablo[i][0]=1;
        alttablo[i][MATRIS_BOYUT+1]=1;
    }
    for(j=0;j<=MATRIS_BOYUT;j++)
    {
        a alttablo[0][j]=1;
        alttablo[MATRIS_BOYUT+1][j]=1;
    }
    nb_mine=MAYIN;
     mayin_yerlestir();

}


void diziyi_baslat()
{
     int i,j;

    for(i=0;i<=MATRIS_BOYUT+1;i++)
    {

        for(j=0;j<=MATRIS_BOYUT+1;j++)
        {
            tab[i][j]='#';
        }

    }

    for(i=0;i<=MATRIS_BOYUT+1;i++)
    {
        tab[i][0]='*';
        tab[i][MATRIS_BOYUT+1]='*';
    }
    for(j=0;j<=MATRIS_BOYUT;j++)
    {
        tab[0][j]='*';
        tab[MATRIS_BOYUT+1][j]='*';
    }

}


void alt_tabloyu_goster()
{
    int i,j;

    printf("\n");

    for(i=1;i<=MATRIS_BOYUT;i++)
    {
        printf("%3d",i);
    }
    printf("\n");

    for(i=1;i<=MATRIS_BOYUT;i++)
    {
        for(j=1;j<=MATRIS_BOYUT;j++)
        {

            printf("%3c",tab[i][j]);
        }
        printf("  |%d",i);
        printf("\n");
    }

    for(i=1;i<=MATRIS_BOYUT;i++)
        printf("---");


}


void mayin_yerlestir()
{
    srand(time(NULL));
    nb_mine=MAYIN;
    int i,j,k,p,satir,sutun;

    for(i=1;i<=nb_mine;i++)
    {
        ligne=1+rand()%MATRIS_BOYUT;
        colonne=1+rand()%MATRIS_BOYUT;
        if(alttablo[satir][sutun] == -1)
            i--;
        alttablo[satir][sutun]=-1;
        for(k=-1;k<=1;k++)
        {
            for(p=-1;p<=1;p++)
            {
                if(alttablo[i][j]==-1)
                {
                    if(alttablo[satir+k][sutun+p]!=-1)
                    {
                        alttablo[satir+k][sutun+p]++;
                    }
                }

            }
        }



    }

}
int sonuc_kontrol()
{
	int i,j,y=0,sonuc;
	for(i=1;i<=MATRIS_BOYUT;i++)
	{
        for(j=1;j<=MATRIS_BOYUT;j++)
        {
            if(tab[i][j]=='D') //Bayraksa say
			{
                if(alttablo[i][j]==-1)
                {
                    y++;
                }
			}

        }
	}
	if(y==MAYIN)//Bayraklarýn sayisiyla acilmamislarin sayisinin toplami bomba sayisina esitse
                                                                                    
	{
		sonuc=WIN;
	}
	else
		sonuc=CONTINUE;

	return sonuc;
}

void kesfet (int satir, int sutun) {
	int i, j;


	tab[satir][sutun] = '0' + alttablo[satir][sutun]; //Alt tablodaki deðeri üst tabloya karakter olarak atýyoruz(açma operasyonu)
  //Tüm komþular için
	for (i = -1; i <= 1; i++) {
		for (j = -1; j <= 1; j++) {
			//Sayý varsa (komþusu mayýnlýysa)ve açýk deðilse
			if (alttablo[satir + i][sutun + j] > 0 && tab[satir + i][sutun + j] == '#')
			{
				tab[satir + i][sutun + j] = '0'+ alttablo[satir + i][sutun + j];//Komþuyu aç
			}
			//Sayý 0 sa (komþusu mayýnsýzsa)
			else if (alttablo[satir + i][sutun + j] == 0 && tab[satir + i][sutun + j] == '#')
			{
				kesfet(satir + i, sutun + j);//Komþuya geç ayný iþlemi tekrar  rekürsif olarak yap
			}
		}
	}
}


int ac(int satir, int sutun)
{
	int x=0;
    if (alttablo[satir][sutun] == -1)//Bomba mý
    {
    	x=LOSE;//Öldün
    }

    else if (alttablo[satir][sutun ] > 0)//Sayý  mý (komþusu mayýnlýysa)
    {
        tab[satir][sutun] = ('0' + alttablo[satir][sutun]);//Aç
    //Bittimi
        x=CONTINUE;
	}
    else//Boþsa(Komþusu bossa)
    {
    	kesfet(satir, sutun); //Komþularýný açarak ilerle
    	 // Bittimi diye bak
    }

    return x;/
}




