#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#include<signal.h>
FILE *dosya;
int A=0,B=0,t_sure=0,fark=0,sira=1;

    void alarmdaCalisacakFonksiyon(int signum);
    int main (int argc,char *argv[]){
    	signal(SIGALRM,alarmdaCalisacakFonksiyon);
        
        int rdeger=0,min=0,max=99,oyuncu1=0,oyuncu2=0;
        int flag=0;
        A=atoi(argv[1]);
        B=atoi(argv[2]);
        alarm(A);
        time_t start=0,final=0;
        srand(time(NULL));
        rdeger=rand()%100;
        dosya=fopen("oyun_181213038.txt","w");
        while(1==1){
        	sira=1;
                time(&start);
                printf("\noyuncu1 [%d-%d] arasi tahminini girsin : ",min,max);scanf("%d",&oyuncu1);fflush(stdout);
                time(&final);
                fark=difftime(final,start);
                t_sure=t_sure+fark;
                alarm(0);
                if(oyuncu1>=min && oyuncu1<=max){
                	if(oyuncu1==rdeger){
                		printf("\nDogru.oyuncu1 kaybetti gecen sure %d ",t_sure);
                        fprintf(dosya,"\noyuncu1 tahmini: %d\noyuncu1 gecen sure: %d \n ",oyuncu1,fark);
                        fprintf(dosya,"\nkazanan: oyuncu2");
                        flag=1;
                        break;
                        }
					else{
						printf("\nYanlis. Gecen sure %d : ",fark);
                        fprintf(dosya,"\noyuncu1 tahmini: %d\noyuncu1 gecen sure: %d \n ",oyuncu1,fark);
                        if(oyuncu1 <rdeger) min=oyuncu1;
                        else if(oyuncu1 > rdeger ) max=oyuncu1;
                        sira=2;

                        time(&start);
                        printf("\nOyuncu2 [%d-%d] arasý bir tahmin girsin :",min,max);
                            scanf("%d",&oyuncu2);time(&final);fflush(stdin);
                            fark=difftime(final,start);;
                            t_sure=t_sure+fark;
                            alarm(0);
                            fprintf(dosya,"\noyuncu2 tahmini: %d\noyuncu2 gecen sure: %d \n ",oyuncu2,fark); 
                            if(oyuncu2>=min && oyuncu2<=max){
                            	if(oyuncu2 == rdeger){
                                    printf("\nDogru. Oyuncu2 kaybetti gecen sure %d",fark);fflush(stdout);
                                    fprintf(dosya,"\noyuncu2 tahmin: %d\noyuncu2 gecen sure: %d\n ",oyuncu2,fark);
                                    fprintf(dosya,"\nkazanan: oyuncu1");
                                    flag=1;
                                    break;  
								}
								else{
									printf("\nYanlis. Gecen sure %d : ",fark);
                                     if(oyuncu2 <rdeger) min=oyuncu2;
                                    else if(oyuncu2 > rdeger ) max=oyuncu2;
								}
							}
							else{
								printf("\nOyuncu2 aralikta bir tahmin girmedi. Kazanan oyuncu1\n");fflush(stdout);
                                fprintf(dosya,"\noyuncu2 tahmini: %d\nAralýk: [%d-%d] \nkazanan: oyuncu1",oyuncu2,min,max);
                                flag=2;break;
                                	}
					}
				}
				else{
                   
					printf("\nOyuncu1 belirtilen aralikta tahmin girmedi. Kazanan oyuncu2");fflush(stdout);
                    fprintf(dosya,"\noyuncu1 tahmini: %d\nAralýk: [%d-%d] \nkazanan: oyuncu2",oyuncu1,min,max);
                    flag=2;break;

				}
				if(t_sure > B){
                    fprintf(dosya,"\nOyun belirtilen sürede bitmedi.\nOyuncu1 ve Oyuncu2 kaybetti.");
                    printf("\nZAMAN DOLDU KAZANAN YOK.\nOYUNCU1 VE OYUNCU2 KAYBETTI");
                    exit(EXIT_SUCCESS);
                }else;
		}
		 fclose(dosya);
                dosya=fopen("oyun_181213038.txt","+a");
                if(flag!=1 || flag!=2){
                    fprintf(dosya,"\nKazanan yok süre doldu");
                     }
                
                fclose(dosya);
	}
	
	 void alarmdaCalisacakFonksiyon(int signum){
        fprintf(dosya,"\nA : %d  B : %d\nOyuncu%d belirtilen sürede sayi girmedi",A,B,sira);
         if(sira==1) fprintf(dosya,"\nkazanan oyuncu2");
        else if(sira==2) fprintf(dosya,"\nkazanan oyuncu1");
        printf("\nZAMAN DOLDU OYUNCU%d KAYBETTI!\ngecen sure :%d ",sira,t_sure);
        exit(EXIT_SUCCESS);
    }
