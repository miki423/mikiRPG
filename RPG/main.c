#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
					//////////////////////////////////////////////////////////////
					//é¿çsÇÃç€Ç…ÇÕÅAé¿çsÇµÇƒèoÇÈâÊñ ÇÃç∂è„ÇâüÇµÅAä˘íËílÇâüÇµÇƒ//
					//ÉåÉCÉAÉEÉgÇÃÉEÉBÉìÉhÉEÇÃïùÇÇPÇOÇOÅAçÇÇ≥ÇÇRÇOÇ…ÇµÇƒÇ†Ç∞Çƒ//
					//Ç≠ÇæÇ≥Ç¢ÅBÇ±ÇÍÇÇµÇ»Ç¢Ç∆ê≥ÇµÇ≠ï\é¶Ç≥ÇÍÇ»Ç¢Ç±Ç∆Ç™Ç†ÇËÇ‹Ç∑ÅB//
					//////////////////////////////////////////////////////////////

 typedef struct  {
	char			itemname[10];	//ÉAÉCÉeÉÄñº
	unsigned int	recovery;		//âÒïúó 
	unsigned int	itempower;		//ÉAÉCÉeÉÄÇÃçUåÇóÕ
	unsigned int	Quantity;		//å¬êî
} S_ITEM;

 typedef struct  {
	char			itemname[10];	//ÉAÉCÉeÉÄñº
	unsigned int	recovery;		//âÒïúó 
	unsigned int	itempower;		//ÉAÉCÉeÉÄÇÃçUåÇóÕ
	unsigned int	Quantity;		//å¬êî
} S_ITEMS;

		
		S_ITEM  items[]=
	{
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
	};

		S_ITEMS  itemi[]=
	{
		{"Portion",70,0,0},
		{"Stone",0,30,0},
		{"HiPotion",150,0,0},
		{"Iron pipe",0,300,0},
		{"Suportion",400,0,0},
		{"Rocket",0,500,0},
	};

 typedef struct  {
	char			weapon[16];	//ïêäÌÇÃñºëO
	unsigned int	wehp;		//ïêäÌÇÃëÃóÕ
	unsigned int	wepow;		//ïêäÌÇÃÉpÉèÅ[
	unsigned int	weflag;		//ÇªÇÃïêäÌÇ™Ç†ÇÈÇ©Ç«Ç§Ç©
} S_SWORDD;

		S_SWORDD  typed[]=
	{
		{"Wooden stick",0,10,1},
		{"Wooden sword",0,20,1},
		{"knife",0,35,1},
		{"Iron sword",0,45,1},
		{"Steel sword",30,50,1},
		{"Rapier",0,70,1},
		{"Bone sword",70,70,1},
		{"Straight sword",20,100,1},
		{"Dainsleif",100,170,1},
		{"Almas",0,150,1},
		{"Brunak",0,180,1},
		{"Balmung",150,200,1},
		{"Aroundight",0,250,1},
		{"Murgleys",200,300,1},
		{"Durandal",150,350,1},
		{"Caladbolg",100,400,1},
		{"Lavateinn",150,500,1},
		{"Lightsaber",250,700,1},
		{"Gram",1000,600,1},
		{"Excalibur",500,1500,1},
		{"God's sword",2000,3000,1},
	};
 typedef struct  {
	char			name[16];	//	ñºëO
	unsigned int	hp;			//	HP
	unsigned int	le;			//	ÉåÉxÉã
	unsigned int	pow;		//  óÕ
	unsigned int	exp;		//	åoå±íl
	unsigned int	money;		//	Ç®ã‡
	unsigned int	neexp;      //	éüÇÃÉåÉxÉãÇ‹Ç≈ÇÃåoå±íl
	unsigned int	nei;        //	éüÇÃÉåÉxÉãÇ‹Ç≈ÇÃåoå±ílÇÃÇΩÇﬂÇÃïœêî
} S_STATUS;


 typedef struct  {
	char			weapon[16];	//ïêäÌÇÃñºëO
	unsigned int	wehp;		//ïêäÌÇÃëÃóÕ
	unsigned int	wepow;		//ïêäÌÇÃÉpÉèÅ[
	unsigned int	weflag;		//ÇªÇÃïêäÌÇ™Ç†ÇÈÇ©Ç«Ç§Ç©
} S_SWORD;
	
		S_SWORD  type[]=
	{
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
		{"???",0,0,0},
	};
	
	
		S_STATUS  cha[]=
	{
		//ñºëO	HP	ÉåÉxÉã	óÕ	åoå±íl	Ç®ã‡	åoå±ílópïœêîÇQÇ¬                                                        Å©èâä˙íl
		{"YOU",80,1,25,0,0,70,70},	//	óEé“
	};
	
	int i,q,ex,we,wp,op,com,rga,rpow,atk,wepoi,flag_a=0,flag_b,flag_c,mfla_g,flag_o,flag_s,flag_a,flag_exit,flag_las;
	
	int php,ple,pl,ph,pp,ppow;
	
	int work_hp,  work_le,  work_pow,  work_exp,  work_neexp,  work_nei,  work_money;
	
	int si,sel,ki,kel,ii,iel,ci,cel,lei;
	
	int enel,eni,enl,enh,enpow,enatk,enrpow,enmoney,gexp,gemoney;                                    //ìGÇÃÉXÉeÅ[É^ÉX
	
	int hwork1,hwork2,hwork3,hwork4,hwork5,hwork6,hwork7,hwork8,hwork9,hwork10,hwork11               //ïêäÌópïœêî
	,hwork12,hwork13,hwork14,hwork15,hwork16,hwork17,hwork18,hwork19,hwork20;
	
	int pwork1,pwork2,pwork3,pwork4,pwork5,pwork6,pwork7,pwork8,pwork9,pwork10,pwork11
	,pwork12,pwork13,pwork14,pwork15,pwork16,pwork17,pwork18,pwork19,pwork20;
	
	int fwork1,fwork2,fwork3,fwork4,fwork5,fwork6,fwork7,fwork8,fwork9,fwork10,fwork11
	,fwork12,fwork13,fwork14,fwork15,fwork16,fwork17,fwork18,fwork19,fwork20;
	
	int r1,r2,r3,r4,r5,r6,p1,p2,p3,p4,p5,p6,q1,q2,q3,q4,q5,q6;                                       //ÉAÉCÉeÉÄópïœêî
	
	int dr,w,ritem;                                                                                  //ÉhÉçÉbÉv
int main(void)
{
	
	
	srand((unsigned int)time(NULL)); // åªç›éûçèÇÃèÓïÒÇ≈èâä˙âª
	if(flag_a==0)
	
	printf("%s",type[19].weapon);
	
	printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.ÉXÉ^Å|Ég           *
   *                           É^ÉCÉgÉã                           *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.ÉçÅ|Éh             *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *          1.ÉXÉ^Å|Ég                      ÇQ.ÉçÅ|Éh           *                          *
   *                                                              *    ÇR.èIóπ               *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                           ÇR.èIóπ                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");
	scanf("%d",&q);
	
	if (q==1){
		
	printf("
	
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ê¢äEÇÃÇ¢ÇΩÇÈÇ∆Ç±ÇÎÇ…Ç‹Ç‡ÇÃÇΩÇøÇ™åªÇÍÇΩ            *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");
		Sleep(1500);
		printf("
		
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ê¢äEÇÃÇ¢ÇΩÇÈÇ∆Ç±ÇÎÇ…Ç‹Ç‡ÇÃÇΩÇøÇ™åªÇÍÇΩ            *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      ÇªÇ±ÇÃÇ†Ç»ÇΩÅIÅI                        *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");
		Sleep(1500);
		printf("
		
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ê¢äEÇÃÇ¢ÇΩÇÈÇ∆Ç±ÇÎÇ…Ç‹Ç‡ÇÃÇΩÇøÇ™åªÇÍÇΩ            *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      ÇªÇ±ÇÃÇ†Ç»ÇΩÅIÅI                        *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             Ç‹Ç‡ÇÃÇΩÇøÇÇΩÇ®ÇµÇƒóàÇƒÇ≠ÇæÇ≥Ç¢ÅIÅI             *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");

		Sleep(2000);
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ê¢äEÇÃÇ¢ÇΩÇÈÇ∆Ç±ÇÎÇ…Ç‹Ç‡ÇÃÇΩÇøÇ™åªÇÍÇΩ            *    ÇP.     éüÇ÷          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      ÇªÇ±ÇÃÇ†Ç»ÇΩÅIÅI                        *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             Ç‹Ç‡ÇÃÇΩÇøÇÇΩÇ®ÇµÇƒóàÇƒÇ≠ÇæÇ≥Ç¢ÅIÅI             *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");

	while(op!=1){
	scanf("%d",&op);
	
	}
	}
	else if (q==2){              //ì«çûÇ›
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	S_STATUS  cha[1] = { 0 };
	S_SWORD   type[20] ={ 0 };
	S_ITEM  items[5]={ 0 };
	
	//	ÉZÅ[ÉuÉfÅ[É^ÇÉoÉCÉiÉäÇÃì«Ç›çûÇ›Ç≈ÉIÅ[ÉvÉì
	fp1=fopen("SaveData.bin", "rb");
	fp2=fopen("weaponData.bin", "rb");
	fp3=fopen("itemData.bin", "rb");
	//	ÉLÉÉÉâÉNÉ^Å[ÇÃÉXÉeÅ[É^ÉXÇÉtÉ@ÉCÉãÇ©ÇÁïúå≥(ÉLÉÉÉâÉNÉ^Å[:3êl)
	fread(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[0]), fp1);   
	fread(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[0]), fp2);
	fread(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[0]), fp3);
	//ç\ë¢ëÃïœêîÇ…ïúå≥ÇµÇΩÉfÅ[É^ÇâÊñ Ç…ï\é¶
	
	{
		printf("%s, HP:%d, LEVEL:%d, óÕ:%d,åoå±íl:%d\nÇ®ã‡:%d\nåoå±ílópïœêî:%d\n",
			cha->name, cha->hp, cha->le,
			cha->pow, cha->exp,cha->money,cha->nei);
	}
	work_le=cha->le;
	work_hp=cha->hp;
	work_pow=cha->pow;
	work_exp=cha->exp;
	work_neexp=cha->neexp;
	work_nei=cha->nei;
	work_money=cha->money;	
	
	hwork1=type[0].wehp;
	hwork2=type[1].wehp;
	hwork3=type[2].wehp;
	hwork4=type[3].wehp;
	hwork5=type[4].wehp;
	hwork6=type[5].wehp;
	hwork7=type[6].wehp;
	hwork8=type[7].wehp;
	hwork9=type[8].wehp;
	hwork10=type[9].wehp;
	hwork11=type[10].wehp;
	hwork12=type[11].wehp;
	hwork13=type[12].wehp;
	hwork14=type[13].wehp;
	hwork15=type[14].wehp;
	hwork16=type[15].wehp;
	hwork17=type[16].wehp;
	hwork18=type[17].wehp;
	hwork19=type[18].wehp;
	hwork20=type[19].wehp;

	pwork1=type[0].wepow;
	pwork2=type[1].wepow;
	pwork3=type[2].wepow;
	pwork4=type[3].wepow;
	pwork5=type[4].wepow;
	pwork6=type[5].wepow;
	pwork7=type[6].wepow;
	pwork8=type[7].wepow;
	pwork9=type[8].wepow;
	pwork10=type[9].wepow;
	pwork11=type[10].wepow;
	pwork12=type[11].wepow;
	pwork13=type[12].wepow;
	pwork14=type[13].wepow;
	pwork15=type[14].wepow;
	pwork16=type[15].wepow;
	pwork17=type[16].wepow;
	pwork18=type[17].wepow;
	pwork19=type[18].wepow;
	pwork20=type[19].wepow;
	
	fwork1=type[0].weflag;
	fwork2=type[1].weflag;
	fwork3=type[2].weflag;
	fwork4=type[3].weflag;
	fwork5=type[4].weflag;
	fwork6=type[5].weflag;
	fwork7=type[6].weflag;
	fwork8=type[7].weflag;
	fwork9=type[8].weflag;
	fwork10=type[9].weflag;
	fwork11=type[10].weflag;
	fwork12=type[11].weflag;
	fwork13=type[12].weflag;
	fwork14=type[13].weflag;
	fwork15=type[14].weflag;
	fwork16=type[15].weflag;
	fwork17=type[16].weflag;
	fwork18=type[17].weflag;
	fwork19=type[18].weflag;
	fwork20=type[19].weflag;
	
	
	

	
	r1=items[0].recovery;
	r2=items[1].recovery;
	r3=items[2].recovery;
	r4=items[3].recovery;
	r5=items[4].recovery;
	r6=items[5].recovery;
	
	p1=items[0].itempower;
	p2=items[1].itempower;
	p3=items[2].itempower;
	p4=items[3].itempower;
	p5=items[4].itempower;
	p6=items[5].itempower;
	
	q1=items[0].Quantity;
	q2=items[1].Quantity;
	q3=items[2].Quantity;
	q4=items[3].Quantity;
	q5=items[4].Quantity;
	q6=items[5].Quantity;
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	}

	
	
	
	if(q==2){
	cha->le=work_le;
	cha->hp=work_hp;
	cha->pow=work_pow;
	cha->exp=work_exp;
	cha->neexp=work_neexp;
	cha->nei=work_nei;
	cha->money=work_money;
	
	type[0].wehp=hwork1;
	type[1].wehp=hwork2;
	type[2].wehp=hwork3;
	type[3].wehp=hwork4;
	type[4].wehp=hwork5;
	type[5].wehp=hwork6;
	type[6].wehp=hwork7;
	type[7].wehp=hwork8;
	type[8].wehp=hwork9;
	type[9].wehp=hwork10;
	type[10].wehp=hwork11;
	type[11].wehp=hwork12;
	type[12].wehp=hwork13;
	type[13].wehp=hwork14;
	type[14].wehp=hwork15;
	type[15].wehp=hwork16;
	type[16].wehp=hwork17;
	type[17].wehp=hwork18;
	type[18].wehp=hwork19;
	type[19].wehp=hwork20;

	type[0].wepow=pwork1;
	type[1].wepow=pwork2;
	type[2].wepow=pwork3;
	type[3].wepow=pwork4;
	type[4].wepow=pwork5;
	type[5].wepow=pwork6;
	type[6].wepow=pwork7;
	type[7].wepow=pwork8;
	type[8].wepow=pwork9;
	type[9].wepow=pwork10;
	type[10].wepow=pwork11;
	type[11].wepow=pwork12;
	type[12].wepow=pwork13;
	type[13].wepow=pwork14;
	type[14].wepow=pwork15;
	type[15].wepow=pwork16;
	type[16].wepow=pwork17;
	type[17].wepow=pwork18;
	type[18].wepow=pwork19;
	type[19].wepow=pwork20;
	
	type[0].weflag=fwork1;
	type[1].weflag=fwork2;
	type[2].weflag=fwork3;
	type[3].weflag=fwork4;
	type[4].weflag=fwork5;
	type[5].weflag=fwork6;
	type[6].weflag=fwork7;
	type[7].weflag=fwork8;
	type[8].weflag=fwork9;
	type[9].weflag=fwork10;
	type[10].weflag=fwork11;
	type[11].weflag=fwork12;
	type[12].weflag=fwork13;
	type[13].weflag=fwork14;
	type[14].weflag=fwork15;
	type[15].weflag=fwork16;
	type[16].weflag=fwork17;
	type[17].weflag=fwork18;
	type[18].weflag=fwork19;
	type[19].weflag=fwork20;
	
	
	items[0].recovery=r1;
	items[1].recovery=r2;
	items[2].recovery=r3;
	items[3].recovery=r4;
	items[4].recovery=r5;
	items[5].recovery=r6;
	
	items[0].itempower=p1;
	items[1].itempower=p2;
	items[2].itempower=p3;
	items[3].itempower=p4;
	items[4].itempower=p5;
	items[5].itempower=p6;
	
	items[0].Quantity=q1;
	items[1].Quantity=q2;
	items[2].Quantity=q3;
	items[3].Quantity=q4;
	items[4].Quantity=q5;
	items[5].Quantity=q6;
	
	
	for(i=0;i<20;i++){
	if(type[i].weflag!=0){
	strcpy(type[i].weapon,typed[i].weapon);
	}
	}
	
	for(i=0;i<6;i++){
	if(items[i].recovery>0 || items[i].itempower>0)
	strcpy(items[i].itemname,itemi[i].itemname);
	}
	}
	else if(q==3)
	exit(EXIT_FAILURE);
	
	state();
}
int state()
{
	while(flag_a==0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                       É_ÉìÉWÉáÉì             *                          *
   *                                             Å`Å`Å`Å`         *                          *
   *                                        (Å‹Å‹)Å`Å`Å`          *    ÇP.  É_ÉìÉWÉáÉì       *
   *                                        ii!i!i                *                          *
   *                                        …~~~~Å_               * ìGÇì|Çµã≠Ç≠Ç»ÇËÇ‹ÇµÇÂÇ§ *
   *                                      Å^_^ _ ~_Å_             *                          *
   *                                ,,,,Å^,,,,,,,,,,,Å_,,,,,      *                          *
   *        ÉVÉáÉbÉv               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,   *    ÇQ.   ÉVÉáÉbÉv        *
   *        ÅQÅQÅQÅQ                                              *                          *
   *      Å^   Çr   Å_                                            * ÉAÉCÉeÉÄÇ‚ïêäÌÇ™îÉÇ¶Ç‹Ç∑ *
   *      Ñ¶ÑüÑüÑüÑüÑüÑüÑüÑüÑüÑ¶                                             *                          *
   *      Ñ†Ñ°ÑüÑüÑ¢  Å† Ñ†                                             *                          *
   *      Ñ†Ñ†ÅBÑ†     Ñ†                                             *    ÇR.   ÉXÉeÅ|É^ÉX      *
   *      Ñ®Ñ®ÑüÑüÑ®ÑüÑüÑüÑüÑüÑ®                                             *                          *
   *                                                              *  ëïîıÇïœÇ¶ÇΩÇËèoóàÇ‹Ç∑  *
   *                                                              *                          *
   *                                  ÉXÉeÅ|É^ÉX      ÉZÅ|Éu      *                          *
   *                                   ÅQÅQÅQÅQ      ÅQÅQÅQÅQ     *    ÇS.    ÉZÅ|Éu         *
   *                                  Åb      Åb    Åb      Åb    *                          *
   *                                  Åb  Åõ> Åb    Åb  Çe  Åb    * Ç±Ç‹ÇﬂÇ…ÉZÅ|ÉuÇµÇ‹ÇµÇÂÇ§ *
   *                                  Åb <Åb  Åb    Åb      Åb    *                          *
   *                                  Åb  êl  Åb    Åb      Åb    *                          *
   *                                   ÅPÅPÅPÅP      ÅPÅPÅPÅP     *                 5.Ç‚ÇﬂÇÈ *
   *******************************************************************************************
");
	i=100;
	while(i>5){
	scanf("%d",&i);
	
		switch (i){
	case 1:
	Dungeon();
	break;
	case 2:
	shop();
	break;
	case 3:
	status();
	break;
	case 4:
	save();
	break;
	
	case 5:
	exitprint();
	break;
	default:
	printf("Ç‡Ç§àÍìxì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅB");
	break;
	}
	}

}return 0;


}

int Dungeon()                                                                                                  //É_ÉìÉWÉáÉìÇ…ì¸ÇÈ
{
		printf("
		
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                        É_ÉìÉWÉáÉìëIë                        *    ÇP.     ëêå¥          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *        ëêå¥(ìÔà’ìxÅô)                 çrñÏ(ìÔà’ìxÅôÅô)       *    ÇQ.     çrñÏ          *
   *      Çñ ,ÅS'ÅS    <ÅS   Çñ           Å⁄ÅL....ÅPÅ_            *                          *
   *   Çó   –:..  úc  –:..úc            /ÅL.:..Å_ :ÅÉ: :.ÅPÅR     *                          *
   *       ÅS :.. º  ÅS::. º           Å^År.:∆;.. , ÅPÇí'Å_       *                          *
   *      ÇñÅS,. Çí'  ÅS,§Çí'   Çó      Ém.:.:./.::§:Å^ÅLÅPÅMÅ_   *                          *
   *   Çó    |li  Çñ   li!  Çñ         Ç◊§ÅQ_,,Å^ÅPÅMÅS/.ÅRÅ⁄Å_   *    ÇR.     à‚ê’          *
   *         il|    Çñ |il   Çó         ∞Ñü----Å]'Å[-Ñü'ÅLÅ[-=ÅÅ    *                          *
   *                                                              *                          *
   *       à‚ê’(ìÔà’ìxÅôÅôÅô)             èÈ(ìÔà’ìxÅôÅôÅôÅô) _    *                          *
   *        (:Åà   Åi::Åj                 + ¢|_¢|_¢|_¢|  +_ ÅbÅ_  *                          *
   *   /éO  ÅUéOéOéO(:( _                  |Ñ¶Ñ®Ñ¶Ñ®Ñ¶|  |ÅÑÅbÅ^       *    ÇS.      èÈ           *
   *   | ||:| | |:| ):)Å_:Å_           *   |Ñ®|ÅPÅP|Ñ®Åb |  Åb+     *                          *
   *   |:||:| | |:| (:(  Å_:Å_          +  |Ñ¶|ÅQÅQ| Ñ¶|¢|ÅuÅP|     *                          *
   * Å^/ÅOÅl|:| |:|:.||||. Å_7Å_           |Ñ®|Ñ¶Ñ®Ñ¶Ñ®|Ñ¶Ñ®Å]|          *                          *
   * .ÅkìÒÅkéO| |:|:|:||:|::/Å_;Å_     +   |Ñ¶|Ñ®Ñ¶Ñ®Ñ¶|Ñ®Ñ¶Å]|          *                          *
   *                                      ;|Ñ®|Ñ¶Ñ®Ñ¶Ñ®|Ñ¶Ñ®Å]|          *                  5.Ç‚ÇﬂÇÈ*
   *******************************************************************************************
");
	ple=cha->le;
	php=cha->hp;
	ppow=cha->pow;
	gexp=0;
	gemoney=0;
	flag_las=0;
	
	i=100;
	while(i>5){
	scanf("%d",&i);
	
	switch (i){
	case 1:
	flag_b=1;
	break;
	case 2:
	flag_b=2;
	break;
	case 3:
	flag_b=3;
	break;
	case 4:
	flag_b=4;
	break;
	case 5:
	state();
	break;
	case 100:
	for(wepoi=0; wepoi<21 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp-=type[wepoi].wehp;
	cha->pow-=type[wepoi].wepow;
	flag_las=1;
	}
	
	fflag_b5();                    //5ÇÃîíÇ¢ê¢äE
	default:
	printf("Ç‡Ç§àÍìxì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢ÅB");
	Dungeon();
	break;
	}	
	}
	
	if(flag_las!=1){
	for(wepoi=0; wepoi<21 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp-=type[wepoi].wehp;
	cha->pow-=type[wepoi].wepow;
	}
	}
	
	if(flag_b==1){              //1ÇÃëêå¥
	fflag_b1();
	}
	if(flag_b==2){              //2ÇÃçrñÏ
	fflag_b2();
	}
	if(flag_b==3){              //3ÇÃà‚ê’
	fflag_b3();
	}
	if(flag_b==4)               //4ÇÃèÈ
	fflag_b4();
	
	for(wepoi=0; wepoi<21 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp+=type[wepoi].wehp;
	cha->pow+=type[wepoi].wepow;
	}
}
int fflag_b1()                                                                                            //ëêå¥Ç÷ì¸ÇÈ
{
	w=1;
		
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ÇS.                   *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",ple,php);
	
	Sleep(2000);
	
	si=1;
	while(si<11){
		
		senemy();	
		
switch(sel){
	case 1:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                              /Å‹ÅR                           *                          *
   *                              i   l                           *    ÇP.   Ç±Ç§Ç∞Ç´        *
   *                            Ém     ÅR§                        *                          *
   *                        , ÅL         ÅM ÅA                    *                          *
   *                     Å^                  ÅR.                  *                          *
   *                   /        , - §   , - §   ',                *                          *
   *                   i        | Åú      Åú |   i                *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                   |    ÅqÅ_ ∞Å]'   ∞Å]'Å^År |                *                          *
   *                    Å_    Å_ÅM∞Å]-Å|àÍ'ÅLÅ^Å^                 *                          *
   *                      ÅR§    ÅPÅPÅPÅPÅP  Å^                   *                          *
   *                         ÅMÅPÅPÅPÅPÅPÅPÅL                     *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 2:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                                                              *                          *
   *                         Å^Å‹Å_                               *                          *
   *                        / ÅQÅQ_)                              *                          *
   *                       ( (ÅLÅÕ`)Å^  |)                        *                          *
   *                        ) _]Ç¬ÅÉÅÅÅÅÇOÅÀ                      *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                       /   Å[ _>Å_  |)                        *                          *
   *                      (_ÅÑÅ[ÅÉ_)  Å_(                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 3:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                                                              *                          *
   *                                                              *                          *
   *                         lÅ‹l lÅ‹l                            *                          *
   *                         |  |_|  |                            *                          *
   *                        / ÅE ﬂÅE ÅR                           *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                        Åæ ÅPÅP  ÅæÅ_                         *                          *
   *                         | ,àÍ § |                            *                          *
   *                          ÅP  ÅP                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 4:
	while(enh>0&&php>0){	
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                 ÅQ_                          *                          *
   *                         _.-ß=rf'ÅL  ÅP Å] .   _              *                          *
   *                       ,®Ê∂:ÅiÅúÅzƒ§ÅQ: :_:_:::. (É~–:§       *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                     /ººØ''Å‹ÅR–;§ : : :. ÅPÅMÅ]-`'Å·ÅR       *                          *
   *                    õÙúcî™_     ô  ÅLÅPÅPÅPÅPÅPÅM`            *                          *
   *                ,.ÉB''ÅLººº–––É~;§Åi                          *                          *
   *             Å^,.:',.:',:'–––É~É~É~}}∑–Åp                     *                          *
   *           Å^,.:',.:'ººãD–;úc'ÉV……}ÇË                         *    ÇQ.   ÉAÉCÉeÉÄ        *
   *        Å^,.:',.:',.ººººººººÅ^úcÇôÅå                          *                          *
   *      / ,.:',.:',.:'ºººººúcÉCúc;Éb'Åå                         *                          *
   *     , ;_;.:',.:',.:'ººúcÉC'~;;úc'Åå                          *                          *
   *ÅQ / ,'Ç≈;_;ÉmººEúcì·;;;.Ñ∫ÑüÅ],-§ÅQÅQÅQ_ÅQ_ÅQ                  *                          *
   *- ,≤_,§_,Émº,®úeã“=∆`–º'ﬁÅLÅP7:/~ìÒéO  ìÒÇVÅOÅR               *    ÇR.                   *
   *:;'ººfô éO.{:{ éOéOìÒéOìÒÅqÅq ìÒìÒéOÅQ ÅA,…                   *                          *
   *  /.:/ºÿÿô     `^                `'             ÅP            *                          *
   *,:'.:/ºøŸÿ                                                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;

	case 5:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                           ÅQÅQÅQÅQ_                          *                          *
   *                          Å⁄_Å⁄Å⁄_Å^ Å_                       *                          *
   *                          ÇuÇuÇuÇuÇu.Å_  |                    *                          *
   *                            úc Å‹ É~  Å_|                     *                          *
   *                       /ÅR(ÅLÅEÉ÷ÅEÅM)…Å^|                    *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                       |ìÒìÒìÒìÒìÒ|Å^|                        *                          *
   *                       |ìÒìÒìÒìÒìÒ|Å^                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=2;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 6:
	while(enh>0&&php>0){
		printf("
   ******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                          Å`BOSSÅ`                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |Å_              Å^|                      *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                    |Å_Å_        Å^Å^|                        *                          *
   *                   :     ,>ÅMÅLÅPÅMÅL <  Åå                   *                          *
   *                     Çu                Çu                     *                          *
   *                    i{   Åú      Åú   }i                      *                          *
   *                    î™     §_,_,      î™                      *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                   /  ò¢ . ÅQ   ÅQ . ò¢ ',                    *                          *
   *              ÅQ/    il    ,'ÅQ_   '.   li _ ',ÅQ_            *                          *
   *                  ÅPÅi__.Ém    Åi__.                          *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=3;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	win();
   }
}
	break;
	
	default:
	printf("err");
	break;
}
	}
}


int senemy()
{
	if(si<10){
	
	sel=rand()%5+1;
	
	switch (sel){
		case 1:             //ÉXÉâÉCÉÄ
			enl=1;
			enh=10;
			enpow=2;
			ex=10;
			enmoney=20;
		break;
		
		case 2:             //éÎêl
			enl=3;
			enh=12;
			enpow=3;
			ex=15;
			enmoney=25;
		break;
		
		case 3:             //ÉJÅ[ÉoÉìÉNÉã
			enl=5;
			enh=15;
			enpow=5;
			ex=20;
			enmoney=30;
		break;
		
		case 4:             //íπ
			enl=6;
			enh=25;
			enpow=4;
			ex=25;
			enmoney=30;
		break;
		
		case 5:              //É~É~ÉbÉN
			enl=8;
			enh=30;
			enpow=4;
			ex=30;
			enmoney=35;
		break;
		
		default:
		printf("adawdygdchagc");
		break;
	}
	si++;
	}
	
	else if(si==10){              ////Ç´Ç„Ç¡Ç’Ç¢
			sel=6;
			enl=10;
			enh=60;
			enpow=7;
			ex=200;
			enmoney=50;
			si++;
	}return 0;
}




int fflag_b2()                                                                                            //çrñÏÇ…ì¸ÇÈ
{
	w=4;
		
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ÇS.                   *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",ple,php);
	Sleep(2000);
	
	ki=1;
	while(ki<11){
		
		kenemy();	
		
switch(kel){
	case 1:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *        __É…_            ÅiÅR∞/.Åj        ._É…__              *                          *
   *     Å^Å^/|~''Å]Å]--..,,_Åi ﬂ·∑ﬂ Åj_,,.--Å]Å]''~|ÅRÅ_Å_       *                          *
   *   Å^Å^ ./   |          |ﬁ'''' ''''ﬁ|          |  ÅR Å_Å_     *                          *
   *  /Å^   /     |          l,     ,,l.          |     ÅR  Å_Å_  *                          *
   * /'ÅQ_ /ÅQÅQ |  ÅQÅQ     /ÅM ÅL.ÅR   ÅQ__  | ÅQÅRÅQÅR|        *    ÇQ.   ÉAÉCÉeÉÄ        *
   *'ÅL    ÅM'ÅL     ÅM'.ÅL      ÅMÅR|, -Å]-§|Å^    ÅM'ÅL  ÅM'.   *                          *
   *                        …       ÅR                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 2:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *//////////////////////////////////////////////////////////////*      ç∂ÇÃêîéöÇ≈ëIë      *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////Å^ÅPÅ_Å^ÅPÅ_////////////////////////*    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *//////////////////////// Åb    Åb    Åb///////////////////////*                          *
   *//////////////////////Å^ÅPÅ^ÅPÅP~Å_Å^ÅPÅ_/////////////////////*                          *
   */////////////////////Åb  /Åú      Åb    Åb////////////////////*                          *
   *//////////////////////Å_Åb (êl_) ÅúÅ_  Å^/////////////////////*                          *
   *//////////////////////Å^Åb  LÉm    Å^ÅPÅ_/////////////////////*    ÇQ.   ÉAÉCÉeÉÄ        *
   */////////////////////Åb  Å_       Åb    Åb////////////////////*                          *
   *//////////////////////Å__Å^ÅPÅ_Å^ÅPÅ_ÅQÅ^/////////////////////*                          *
   *////////////////////////Åb    Åb    Åb////////////////////////*                          *
   */////////////////////////Å_ÅQÅ^Å_ÅQÅ^/////////////////////////*                          *
   *////////////////////////////     Åb///////////////////////////*    ÇR.                   *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=5;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 3:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                          , --Å[-- §                          *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                       /ÅMÅR_o .o_/ÅLÅR.                      *                          *
   *                      l    /ÅM∞ÅLÅR.  .l                      *                          *
   *                     |.    léOéOéOl  .|                       *                          *
   *                     .|   léOéOéOl   |                        *                          *
   *                       | .léOéOéOl .|                         *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                       .| léOéOéOl |                          *                          *
   *                        Çå.léOéOéOl.|                         *                          *
   *                         Çå.léOéOéOl.|                        *                          *
   *                          Çå.léOéOéOl.|                       *                          *
   *                           Çå. léOéOl. |                      *    ÇR.                   *
   *                             Çå.léOéOl. |                     *                          *
   *                            Çå.léOéOl. |                      *                          *
   *                           Çå.léOéOl. |                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=6;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	}
	}
	break;
	
	case 4:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *             ,- §  ,-§                             ,. §       *      ç∂ÇÃêîéöÇ≈ëIë      *
   *             V  Å_   ÅR                       Å^Ém }          *                          *
   *              V   ì¸ . Å»                  Å^ '_... /-. §     *                          *
   *               V / Å»  Å».             Å^-Å]'' Å^Å^ /         *                          *
   *                VÅR. Å»   i.          Å^  _.. Å^ 'ÅL..Å^      *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                 ÅR.ÅR Å»  j.       Å^ ÅP..Å^ 'ÅL..Å^         *                          *
   *                   §ÅR.Å» .i    Å^  ,.  'ÅL .ÅÑ' ÅL           *                          *
   *           ,§      |Å_ÅR .-Å]Ç≠,.. 'ÅÑ'ÅL                     *                          *
   *           i iÅ_Yâ] É¡â]ÅR   Å^iÅ^iÅ‹Å_                       *                          *
   *          i i  ÅTÅU¬  ÅU::_Éc.'/i iÇ≠i i'ÅLi.Ég,j  jÅ_        *    ÇQ.   ÉAÉCÉeÉÄ        *
   *          i i.      i iY:::/ÅT∆∆.i K_i i_..i.i. É\\§  Å_       *                          *
   *        i i.      i i.{:::;Åå     i i.i.i.i Ég.i.iÅ^.._..ì¸_Ém*                          *
   *        i i       i i i ;'        i i i.Çâ.i Çâ. i.iÅP        *                          *
   *       i i       Çâ Çâ i;Åå      .i i i.i i i  i.i            *                          *
   *       i i.       //. i!        i i i.i. i i  i.i             *    ÇR.                   *
   *      //     'ÅL   !.          i i ÅS§ÅS§ !.!                 *                          *
   *,. -  = 'ÅL                      ÅS:         ﬁÅS§             *                          *
   *                                     ÅR                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=7;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;

	case 5:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    /ÅL!      r ÅA                            *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                 Åor'ÇOÅM7ÉtÅ[':}                             *                          *
   *                   0::::ÇO:; :ò¶                              *                          *
   *                 ÅS;i'Å‹ÅR:-'j'                               *                          *
   *                   ÅMÅR,j jÅL{                                *                          *
   *                     /  //;;;;`ÅL_ÅR, -ÅA                     *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                   ÉCjÅå{ {;;;;ÇO;;;o;;;Ç≠ÅA                  *                          *
   *                  V     ÅRÅ[--Å]ÅÅ=Å[Ç‚ÅAÅ_                   *                          *
   *                 Ém ÅM ÅA    ÅMÅPÅL   r ÅA_ÅR,                *                          *
   *                'Å[ 'ÅL ÅMÅ[ ÅA_ Çí'^Å[àÍÅå  ÅP               *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=8;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 6:
	while(enh>0&&php>0){
			printf("
   *******************************************************************************************
   *                                   =ÅÅÉ~             ÇaÇnÇrÇr *      ç∂ÇÃêîéöÇ≈ëIë      *
   *              {{                //        =É~                 *                          *
   *¢É~ §         }}              ÅoÅo    ÅQ//    Å^/  ÅQ_        *                          *
   *{éOÉ~ÉÅÉ~∆=– ÅV                 } }ÅÖ;ß=≤_ Å^  /–//Å‹`        *                          *
   *    ÅÖÉ~É~ÉÅ–rÉL'              {–Çx{Éc//úc/ô—ÉC–//–X          *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *    {É~–ÉÅ–//êlÅQ              úc|:Éå'/Å[ÅÇ(ìÒ7//≤úc          *                          *
   *ÅP~ÅMÅR{É~ÅS–{.{úc'          {É~,o'  roÉt    fìÒ,//ÅR⁄úcÿúe   *                          *
   *       Y{É~ÅS}.}éOúc_______ÅQ Å…      êl    ÅP//Å_ Å_úcÿ      *                          *
   *       | ƒÉ~–ÅU∆∆∆ÉL'ÅL ÅP  ÅM`TTí‹ÅUÅÅ=ÅÅ'ﬁ∞-- Å…:|úc        *                          *
   *       |  ÅSÉ~–éOÉ~Y…          ƒÀ! {{ø7ÅQ|    V---Å…          *    ÇQ.   ÉAÉCÉeÉÄ        *
   *       |  ƒÉ~É~Yúc≤{---      .._ÅUìÒÉu®ÅÜ|     År---,ÉnÑüÅ]{]  *                          *
   *     ÅV|  ÅSÉ~ÉÅ–Yúc ÅQÅQ__ ,r≠ìÒÅÑ  òß…     ∆∆7|      {ÅQ    *                          *
   *  _r'úc|  ƒÉ~–ÉÅ–Yúc≤   {]Ñ£Ñ§{]    Å^     /--- î™      rÅ]{]   *                          *
   *êl…úcÉÅ|    {É~=–xúc≤êl {]-§_rÇ≠_Å^       /- Ñü/Å^ÅM ÅP{]      *                          *
   *Å…Å‹ÅL î™    `∞=É~Yúc'Én     År          /Ñü =/                *                          *
   *    .:/  ÅR     `=É~Õ úcÅU=úc'         ÉmÑü-ß'                 *                          *
   *-Å]É@Åå    Å_    Å ==ÅÅÅL'        . ÅÉ Å_Å^                   *                          *
   *'ÅL           ÅRÅA         ÅQrÑ¶'ÅLÅR. ÅÑ''                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=9;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	win();
	}
}
	break;
	
	default:
	printf("err");
	break;
}
	}
}


int kenemy()
{
	if(ki<10){
	
	kel=rand()%5+1;
	
	switch (kel){
		case 1:             //
			enl=8;
			enh=50;
			enpow=6;
			ex=100;
			enmoney=45;
		break;
		
		case 2:             //
			enl=10;
			enh=60;
			enpow=7;
			ex=100;
			enmoney=50;
		break;
		
		case 3:             //
			enl=12;
			enh=70;
			enpow=6;
			ex=120;
			enmoney=55;
		break;
		
		case 4:             //
			enl=15;
			enh=80;
			enpow=8;
			ex=150;
			enmoney=60;
		break;
		
		case 5:              //
			enl=18;
			enh=100;
			enpow=10;
			ex=200;
			enmoney=60;
		break;
		
		default:
		printf("errrrr");
		break;
	}
	ki++;
	}
	
	else if(ki==10){                             //É{ÉX
			kel=6;
			enl=25;
			enh=180;
			enpow=15;
			ex=750;
			ki++;
			enmoney=100;
	}return 0;
}





int fflag_b3()                                                                                            //à‚ê’Ç…ì¸ÇÈ
{
	w=10;
		
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ÇS.                   *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",ple,php);
	Sleep(2500);
	
	ii=1;
	while(ii<11){
		
		ienemy();	
		
switch(iel){
	case 1:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                          Å^ÅPÅPÅ_                            *                          *
   *                      _  /<Åú><Åú>ÅR                          *                          *
   *                    úcÅbf          |  /É~                     *                          *
   *                    `//_|  ÅRìÒÉt  |_//                       *                          *
   *                      ÅPÅR         |ÅP                        *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                         ÅR        |                          *                          *
   *                           Å_       ÅR_Å^/                    *                          *
   *                             Å_ÅQÅQÅQ_Å^                      *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 2:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                  ,.-Å]'''''-§                                *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                ,,iÅL         ﬁi            .,-'''^''':ÅD     *                          *
   *                ,'           :|          ,/           ':ÅD    *                          *
   *              lﬁ   .,.-§    . |         .,!   .,-§       Åj   *                          *
   *              lﬁ   .|   |     lﬁ       .lﬁ   .,'  .|    /     *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *             :|   .lﬁ   |    |        .lﬁ   lﬁ    /   /       *                          *
   *             |    |    |   i          /   §Åå  /   /          *                          *
   *             lﬁ  .!§,,,,lﬁ  i§_____,,|  Ñ†   /   /             *                          *
   *           ,:Åå                     ﬁl._.._Çí   ,iﬁ           *                          *
   *        Å^                                  .(ÅA              *    ÇQ.   ÉAÉCÉeÉÄ        *
   *      /                                      ÅR               *                          *
   *      l                                        l              *                          *
   *     .|        Åú                               |             *                          *
   *      Çå    , , ,                      Åú      l              *                          *
   *      ` ÅA            (_êl__ò¶        ÅAÅAÅA /                *    ÇRÅD                  *
   *          `Å[ ÅA__                         Å^                 *                          *
   *                /`'''Å[Å]Å]ÑüÑüÅ]Å]Å]ÑüÑ¶''                      *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	expget();
	}
	}
	break;
	
	case 3:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *              _,.--§                                          *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *          ,. -''  _  ^''Å[-§,,_                               *                          *
   *         (    (ÅùÅj           ﬁﬁ'''Å[---Å]Å]-§                *                          *
   *          Å_ §                               ÅR§              *                          *
   *             `ÅS–§ÅA                          `§ÅR            *                          *
   *               ,,§,,)=–§                         `Çô'         *    ÇQ.   ÉAÉCÉeÉÄ        *
   *              _ ÅO    ÅS)  ';           _,ÅD-;;;::=-Å]'§      *                          *
   *           =-§ÅT-Å]'''   ,,Ég--Å],..-'',.-'''      _  Åj      *                          *
   *            '~ÅOÅM`Å[-Å]'ÅJ  ...__É….._    __,.ÅD-'''Å^       *                          *
   *                           ,.==É~,ÅÅ-'ìÒÅD--Å]'''             *                          *
   *                            'ÅP                               *    ÇRÅD                  *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=11;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	}
	}
	break;
	
	case 4:
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                   ÅQÅQ_                      *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                            ÅQÅQ_Å^     ÅR                    *                          *
   *                          Å^   Å^  Å^Å‹ÅR|                    *                          *
   *                         / (ﬂ)/  Å^ /                         *                          *
   *                        /     ƒ§/°Å‹ÅRÅB                      *                          *
   *                       úe     Å_Å_ﬂ°Åà°Çè                     *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                     `Å^        Å_Å_°ﬂ°Çè                     *                          *
   *                     /         /Å‹Å_ÇtÅà)                     *                          *
   *                              Åb    ﬁÇtÅb                     *                          *
   *                              Åb      ||                      *                          *
   *                                      Çt                      *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=12;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;

	case 5:
	
	while(enh>0&&php>0){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                     ,r§                                      *                          *
   *                     l  ÅR                                    *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                     l    ﬁ§                                  *                          *
   *                    l      Å__                                *                          *
   *                    ÅR         ÅM` §                          *                          *
   *                      ﬁ§ _  ,...ÅA    ÅR, __ ,                *                          *
   *                        Çål Çå l  ÅR § ﬁ§' -- '               *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                 , - 'ÅL `'' <§,,_ ÅRi ÅR',                   *                          *
   *                i                 ÅM` -' iÅA                  *                          *
   *              Åq                          ÅR                  *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=13;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 6:
	
		while(enh>0&&php>0){
	
			printf("
   *******************************************************************************************
   *         ÅQÅ»_                                ÅA              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *       ÅR/ÅMÅMiÉt       Å`ÇaÇnÇrÇrÅ`         iÅRÅA            *                          *
   *       ÅÉ)    (ÅÑ                            || |             *                          *
   *         ÅS~Å^       .§           ,         /;| :|            *                          *
   *         .| |        |ÅR        / |        i'Çx .|            *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *          | |         |, |úcéO–|,|     ,.   |;|  |            *                          *
   *         /É~… iÅ_,--§  |,|éOéO|,|,--Å^/     |;|. |            *                          *
   *         (___)  /::   /l;, ÅMÅL,/ÅR   ÅR   .|;|.|             *                          *
   *         Å_  ÅR!ÅR, .i i;_ÅQ__,;| ÅM!.;|   || ,;|             *                          *
   *          ÅM∞-ÅO-:;;<ìÒ|| Çn ||ìÒ>l;ÉCÅA Å⁄ìÒ_ÅT              *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                  ÅPÅT;;|`- -'|; Å⁄Å_;;Åiúc| :|               *                          *
   *                   ,ÅÑ! ÅRÉjÉjÅ^||ÅÉ_ ÅP |;|….|               *                          *
   *               -=Éj...ii::Å_Å['Å^ !!:..Éj=<ÉjÉm               *                          *
   *                      ÅP>Ñ¢,;!Oi;,Ñ° §'ÅP                       *                          *
   *                    Å⁄ ÉC_Å]Ñ¶Å]ÅMÅRÅA_ÅT                      *    ÇRÅD                  *
   *                     Å^  Å_ÅR<ÅP∞, §                          *                          *
   *                 ,_  ||       Å_ ~ﬁÅ]<ÉmÅp                    *                          *
   *               ÅÉ<=||ìÒìÒìÒÉt-,--É…Åp                         *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=14;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	win();
   }
}
	break;
	
	default:
	printf("err");
	break;
}
	}
}


int ienemy()
{
	if(ii<10){
	
	iel=rand()%5+1;
	
	switch (iel){
		case 1:             //
			enl=20;
			enh=150;
			enpow=12;
			ex=300;
			enmoney=70;
		break;
		
		case 2:             //
			enl=25;
			enh=200;
			enpow=15;
			ex=350;
			enmoney=75;
		break;
		
		case 3:             //
			enl=30;
			enh=250;
			enpow=18;
			ex=400;
			enmoney=80;
		break;
		
		case 4:             //
			enl=35;
			enh=300;
			enpow=20;
			ex=450;
			enmoney=80;
		break;
		
		case 5:              //
			enl=40;
			enh=300;
			enpow=25;
			ex=500;
			enmoney=85;
		break;
		
		default:
		printf("errrrr");
		break;
	}
	ii++;
	}
	
	else if(ii==10){              //
			iel=6;
			enl=50;
			enh=700;
			enpow=35;
			ex=1500;
			enmoney=150;
			ii++;
	}return 0;
}






int fflag_b4()                                                                                            //èÈÇ…ì¸ÇÈ
{
		
		
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ÇS.                   *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",ple,php);

	Sleep(2500);
	
	ci=1;
	while(ci<11){
		
		cenemy();	
		
switch(cel){
	case 1:
	
		while(enh>0&&php>0)
	{
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                      __,,...,,___            *                          *
   *                                _.-''ﬁﬁ         ﬁﬁ'-._        *                          *
   *                               _ÇíÅM    ,,.Ø--Ø,_   ﬁﬁ'iÅA    *                          *
   *                             ,!ﬁ     ,!'         ﬁ!ÅA  ﬁi,    *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                              ÿ;     ﬁØÅA          |:. ﬁ'i ÅA *                          *
   *                               Å_.,    ﬁ'≠_       ( É“  ÉÕ    *                          *
   *                                  `t,     'iÅA     Å_Å_..…    *                          *
   *                  ÅQÅQÅQ            ﬁ1:     ﬁ|,      ÅP       *                          *
   *         _,®Å['ﬁﬁ         ÅPﬁﬁ'Å[ÅA _,Émﬁ    .i!              *    ÇQ.   ÉAÉCÉeÉÄ        *
   *     _Å^                                      ®ﬁ              *                          *
   * ﬁt_Å['ﬁ                                      ,…ﬁ             *                          *
   * ,™ò≥                                     _Å^                 *                          *
   * Ém    ÅQ®ÅA     _™-               __,Ø-=ﬁﬁ                   *                          *
   * ÅPÅP     ÅPﬁÉ\\     ÅQÉÅ---Å[ﬁ≠,ÅQ   Å_                       *    ÇR.                   *
   *                ÅPÅPÅP                 ÅPÅP                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=15;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 2:
	
		while(enh>0&&php>0)
	{
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                          _ÅQÅQ                               *                          *
   *                         <_ÅQÅQ_>                             *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                 Ñ°--Å\\Å\\|.ÅE_ÅE |Å\\Ñ¶--Ñ¢                       *                          *
   *               ,|  i |   ƒ.ÅM   ÅbÅM-|ÅQ !|Å_                 *                          *
   *           ,-Å^  |.ÅPçH    ÅPÑSÅP  /ÅP7/  ,>Å\\- §             *                          *
   *         / ÅiÅQÅ^ÅR_ ÅQ_Ñ¶ÅQ|ÅQ_çHçH_ /Å_/  .ÅQ  |             *                          *
   *        iÅR+çH/     Å…ÅQ_ |   |  Å€Å€_/  /ÅP   ÅPÅR           *    ÇQ.   ÉAÉCÉeÉÄ        *
   *        VÇ¡Çµ        /__  Å|ìÒìÒ çHÉG| lÅ‹lÅ‹.lÅ‹lÅ‹l         *                          *
   *         ÅP       Å^Å_ÅQÅQl TÅQÅQÅ^Å_  Å__|ÅQ|__/_Å^          *                          *
   *               Å^    T  Å^ ÅP      _>    ÅRÅM-Å\\ÅL            *                          *
   *               |ÅPçH ÉG|_           |ÅMÅ[ÅLÅ_                 *                          *
   *            Å^ÅMÅ[àÍ ÅLÅ^|           Å__ìÒìÒ l                *    ÇRÅD                  *
   *            |ìÒìÒìÒìÒÅ^                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=16;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	}
	}
	
	break;
	
	case 3:
	
		while(enh>0&&php>0)
	{
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                  ,  -Å]=ÅÅ=   § ÅQÅQ                         *                          *
   *              Å^           'ÅL       ÅMÅR-Å\\Å\\- §             *                          *
   *Å =∞ .._ _,Å^                          /           ò§         *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *___     ÅP         r        Å_      /                Å_       *                          *
   *  ò§                 Åú            ≤                  ÅR      *                          *
   *    Å_      _,.ÅA           {         }                   ',  *                          *
   *      ` Å[='ÅL  }         î™        Å^                  | |   *                          *
   *               Ç≠_ ÅQ__,Å^   Å_ __.Å^                    } |  *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                         |ò§    ÅA                      /ÅeÅ_ *                          *
   *                       |   Å__.',     Åq      }       /     / *                          *
   *                        |      ',        |_ ',            {   *                          *
   *                         }            . | ÅMÅ[ Õ       ',     *                          *
   *                       /       / |     ' År   / ÅR            *    ÇRÅD                  *
   *                     /       / /       //    |     }     '    *                          *
   *                     Ç≠jÉwÅQ,…  Ém_   /≤-§ ÅQ…    …_     {    *                          *
   *                       ÅP    `'Å['--Å]' Å‹ÅL     Ñ§'∆=--Å]'    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=17;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 4:
	
		while(enh>0&&php>0)
	{
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                     /Å‹ÅR                    *                          *
   *      ÅU                    ÅQ     ÅiÅ_  ÅR                   *                          *
   *     ÅiÅ_                  Å^  Å_Å_Ém;ﬁ)ºÅRÅRÅR               *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *      Å_Åj     /Å‹ÅR    Å^        Å_Å_ ;¬ﬁﬁ;Åj ÅRÅR           *                          *
   *              /     Åj/Å_        Å^ ~|ºﬁ;/   ;i ÅR            *                          *
   *            Ém   //ºﬁ.Å_   Å_ Å^       |ºﬁl:…  ;ÅRÅR          *                          *
   *           ºﬁ    / |ÅiÅR   Å_/       0  |;Åi  …ÅRÉm           *                          *
   *          /|   ÅR ÅR|ºﬁ|l. Åb   0       |ÅR;)./ ./Çµ          *    ÇQ.   ÉAÉCÉeÉÄ        *
   *          Çµ|    ;:ÅRÅR|;;  |      ÅP  Å^   Å^ / Ç∂           *                          *
   *            Çµ|l;:ÅR ;:~ÅRÅR |     .Å^      Çµ.…              *                          *
   *            Çµ|   |ÅR    ' ÅPÅj ;Å^                           *                          *
   *               Å_ÅT ÅP    `''ÅPÅj                             *                          *
   *          ÅU      Çµ)ÅPÅPÅPÅP                                 *    ÇRÅD                  *
   *         ÅiÅ_                                                 *                          *
   *          Å_Åj                                                *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=18;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;

	case 5:
	
	while(enh>0&&php>0)
	{
		
		printf("
   *******************************************************************************************
   *ÅuÅL~'';;∞::..§,,___                                          *      ç∂ÇÃêîéöÇ≈ëIë      *
   *  ÅR.    '''''''::;;;;;:OÅM'':::::..§__                     ,_*                          *
   *     ÅR.         ''''''''::;;;;;;;;;;;ÅM''::::..§__       |ƒÅA*                          *
   *        ÅR.ÅQÅQÅQ_        '''::;;;;;;;;;;ÅM''::::..§__  Ém… l *                          *
   *          ÅS,',',',',',',',ÅMÅR.        '''''::;;;;;;;;;ÅM:::'*    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *            ÅS.ÅPÅPÅMÅRÅr                    ''''::;;;;;;ÅR.;;*                          *
   *              ÅR            éOéOéOúc        ÅQÅQ,,,`:.,,ÅQ_;;;*                          *
   *                ÅMÅR.                  Å[Å\\''''ÅL'''''''''''';*                          *
   *                 ,Ém ÅR.                - §                 _,*                          *
   *             ,,Å^      .ÅR.                ÅR.       _,,. Å]  *    ÇQ.   ÉAÉCÉeÉÄ        *
   *         ,,Å^             jÅMÅR.              `Å[''ÅL         *                          *
   *       Å^_, --Å\\Å\\Å\\''ÅL     ÅMÅR                            ;*                          *
   *       ÅP                         ÅMÅR.                       *                          *
   *                                        ÅMÅR.                 *                          *
   *                                            ÅMÅR.    .§       *    ÇRÅD                  *
   *                                                lÅR  l ÅR.    *                          *
   *                                                |  ÅR.|   ÅR. *                          *
   *                                               Ñ§--ÅS∞-§l    ; *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=18;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	
	}
	}
	break;
	
	case 6:
	
	
	while(enh>0&&php>0)
	{
		
			printf("
   *******************************************************************************************
   *                                 ,§__[ÅR__          ÇaÇnÇrÇr  *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                              Å^ .,.,.,.   Å_                 *                          *
   *                             {   {:;;:;:;}  }                 *                          *
   *                          __ ÅT,,ÅR;::;:{   /                 *                          *
   *                   _ -=∆   / :}:;:;:::;:;:}∆{                 *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *              -=∆          År  }:;:;:;:;:;}  Å_               *                          *
   *                    ÅP  ÅR/ :.j:;:;:;::;:i   v Å_             *                          *
   *                         r'  r:;:;:;;;;:;:{     i!            *                          *
   *                        /   i!:;:;:;;:;:;:;ƒ§_ î™__Å_         *                          *
   *                       /     }:;:;::;:;:;/    ∆=Å]ÅP          *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                      /       Å_:;::;/      /                 *                          *
   *                    ,                     /                   *                          *
   *                   /                    /                     *                          *
   *                  /                   /                       *                          *
   *               Å^                   Å^                        *    ÇRÅD                  *
   *            Å^                   Å^                           *                          *
   *         Å^                   Å^                              *                          *
   *      Å^                   ÅÉ                                 *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                  	        *
   * HP         %4d              * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=20;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	lastwin();
   }
}
	break;
	
	default:
	printf("err");
	break;
	}
	}
}


int cenemy()
{
	if(ci<10){
	
	cel=rand()%5+1;
	
	switch (cel){
		case 1:             //
			enl=50;
			enh=500;
			enpow=30;
			ex=800;
			enmoney=100;
		break;
		
		case 2:             //
			enl=55;
			enh=600;
			enpow=35;
			ex=900;
			enmoney=120;
		break;
		
		case 3:             //
			enl=60;
			enh=800;
			enpow=40;
			ex=1200;
			enmoney=125;
		break;
		
		case 4:             //
			enl=70;
			enh=1000;
			enpow=50;
			ex=1500;
			enmoney=130;
		break;
		
		case 5:              //
			enl=80;
			enh=1500;
			enpow=60;
			ex=2000;
			enmoney=150;
		break;
		
		default:
		printf("errrrr");
		break;
	}
	ci++;
	}
	
	else if(ci==10){              //É{ÉX
			cel=6;
			enl=100;
			enh=3000;
			enpow=80;
			ex=4500;
			enmoney=300;
			ci++;
	}return 0;
}


int fflag_b5()
{
	lastenemy();
	while(enh>0&&php>0){
		printf("
   ******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                          Å`BOSSÅ`                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |Å_              Å^|                      *    ÇPÅD  Ç±Ç§Ç∞Ç´        *
   *                    |Å_Å_        Å^Å^|                        *                          *
   *                   :     ,>ÅMÅLÅPÅMÅL <  Åå                   *                          *
   *                     Çu                Çu                     *                          *
   *                    i{   Åú      Åú   }i                      *                          *
   *                    î™     §_,_,      î™                      *    ÇQ.   ÉAÉCÉeÉÄ        *
   *                   /  ò¢ . ÅQ   ÅQ . ò¢ ',                    *                          *
   *               ÅQ/   il    ,'ÅQ_   '.   li _',ÅQ_             *                          *
   *                  ÅPÅi__.Ém    Åi__.                          *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ÇS.    ì¶Ç∞ÇÈ         *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP        %6d             * HP          %4d              *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",enl,ple,enh,php);
	w=21;
	combat();
	encombat();
	
	if(php<=0){
	lose();
	}
	else if(enh<=0){
	drop();
	expget();
	win();
	php=cha->hp+type[wepoi].wehp;
	ppow=cha->pow+type[wepoi].wepow;
	fflag_b5();
	}
	}
	
}
	
int lastenemy()
{
			enl=cha->le*1.065;
			enh=cha->hp*4.25;
			enpow=cha->pow*0.11;
			if(cha->le<120)
			ex=20000;
			else if(cha->le<150)
			ex=50000;
			else if(cha->le<200)
			ex=100000;
			else
			ex=200000;
			enmoney=3000;
	
}
int status()
{
	i=100;
	while(i>4){
		printf("
   *******************************************************************************************
   *                         * %6s     *                       *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                         **************                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.  ÉAÉCÉeÉÄämîF     *
   *      Level    %3d                     Exp     %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.  ëïîıÇïœÇ¶ÇÈ     *
   *      HP     %5d                     Money   %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *      Power   %4d                                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
",cha->name,cha->le,cha->exp,cha->hp,cha->money,cha->pow);

	scanf("%d",&i);
	}
	switch (i){
	case 1:
	item_display();
	break;
	case 2:
	change();
	break;
	case 4:
	break;
}
}


int item_display()
{
	i=100;
	while(i!=0){
		printf("
   *******************************************************************************************
   *NO*          ÉAÉCÉeÉÄ     *   âÒïúó    *   çUåÇóÕ   *  å¬êî  *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *    %3d  *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                                                                        *                *
   *                                                                        *    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",items[0].itemname,items[0].recovery,items[0].itempower,items[0].Quantity
 ,items[1].itemname,items[1].recovery,items[1].itempower,items[1].Quantity
 ,items[2].itemname,items[2].recovery,items[2].itempower,items[2].Quantity
 ,items[3].itemname,items[3].recovery,items[3].itempower,items[3].Quantity
 ,items[4].itemname,items[4].recovery,items[4].itempower,items[4].Quantity
 ,items[5].itemname,items[5].recovery,items[5].itempower,items[5].Quantity
);
printf("%d",items[5].Quantity);
	scanf("%d",&i);
		
	}
}
int change()
{
	i=100;
	while(i!=0){
			printf("
   *******************************************************************************************
   *NO*           ïêäÌ            *   HP   * POWER *  ÇP: èäéù   *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                           *        *       *  ÇO:ñ¢èäéù  *                           *
   *******************************************************************************************
   * 1*    %16s       *  %4d  * %4d  *      %d      *    ÇPÅD                   *
   *******************************************************************************************
   * 2*    %16s       *  %4d  * %4d  *      %d      *    ÇQÅD                   *
   *******************************************************************************************
   * 3*    %16s       *  %4d  * %4d  *      %d      *    ÇRÅD                   *
   *******************************************************************************************
   * 4*    %16s       *  %4d  * %4d  *      %d      *    ÇS.                    *
   *******************************************************************************************
   * 5*    %16s       *  %4d  * %4d  *      %d      *    ÇTÅD                   *
   *******************************************************************************************
   * 6*    %16s       *  %4d  * %4d  *      %d      *    ÇUÅD                   *
   *******************************************************************************************
   * 7*    %16s       *  %4d  * %4d  *      %d      *    ÇVÅD                   *
   *******************************************************************************************
   * 8*    %16s       *  %4d  * %4d  *      %d      *    ÇWÅD                   *
   *******************************************************************************************
   * 9*    %16s       *  %4d  * %4d  *      %d      *    ÇX.                    *
   *******************************************************************************************
   *10*    %16s       *  %4d  * %4d  *      %d      *  ÇPÇOÅD                   *
   *******************************************************************************************
   *                                                                        *   ÇUÇUÅDéüÇ÷   *
   *                                                                        *    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",type[0].weapon,type[0].wehp,type[0].wepow,type[0].weflag,type[1].weapon,type[1].wehp,type[1].wepow,type[1].weflag
 ,type[2].weapon,type[2].wehp,type[2].wepow,type[2].weflag,type[3].weapon,type[3].wehp,type[3].wepow,type[3].weflag
 ,type[4].weapon,type[4].wehp,type[4].wepow,type[4].weflag,type[5].weapon,type[5].wehp,type[5].wepow,type[5].weflag
 ,type[6].weapon,type[6].wehp,type[6].wepow,type[6].weflag,type[7].weapon,type[7].wehp,type[7].wepow,type[7].weflag
 ,type[8].weapon,type[8].wehp,type[8].wepow,type[8].weflag,type[9].weapon,type[9].wehp,type[9].wepow,type[9].weflag
);

scanf("%d",&i);
	
	switch(i){
	
	case 1:                                       //ïêäÌÇP
	if(type[0].weflag==1){
	equip();
	search();
	type[0].weflag=2;
	
	i=100;
	}
	
	else if(type[0].weflag==2){
	type[0].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	i=100;
	}
	else 
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 2:                                       //ïêäÌ2
	if(type[1].weflag==1){
	equip();
	search();
	type[1].weflag=2;
	
	}
	
	else if(type[1].weflag==2){
	type[1].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 3:                                       //ïêäÌ3
	if(type[2].weflag==1){
	equip();
	search();
	type[2].weflag=2;
	
	}
	
	else if(type[2].weflag==2){
	type[2].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 4:                                       //ïêäÌ4
	if(type[3].weflag==1){
	equip();
	search();
	type[3].weflag=2;
	
	}
	
	else if(type[3].weflag==2){
	type[3].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 5:                                       //ïêäÌ5
	if(type[4].weflag==1){
	equip();
	search();
	type[4].weflag=2;

	}
	
	else if(type[4].weflag==2){
	type[4].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 6:                                       //ïêäÌ6
	if(type[5].weflag==1){
	equip();
	search();
	type[5].weflag=2;
	
	}
	
	else if(type[5].weflag==2){
	type[5].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 7:                                       //ïêäÌ7
	if(type[6].weflag==1){
	equip();
	search();
	type[6].weflag=2;
	
	}
	
	else if(type[6].weflag==2){
	type[6].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 8:                                       //ïêäÌ8
	if(type[7].weflag==1){
	equip();
	search();
	type[7].weflag=2;
	
	}
	
	else if(type[7].weflag==2){
	type[7].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 9:                                       //ïêäÌ9
	if(type[8].weflag==1){
	equip();
	search();
	type[8].weflag=2;
	
	}
	
	else if(type[8].weflag==2){
	type[8].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 10:                                      //ïêäÌ10
	if(type[9].weflag==1){
	equip();
	search();
	type[9].weflag=2;
	
	}
	
	else if(type[9].weflag==2){
	type[9].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	}
	if(i==0)
	break;

	if(i==66)
	change2();
	
	}	
}

int change2()
{
	i=100;
	while(i!=0){
		printf("
   *******************************************************************************************
   *NO*           ïêäÌ            *   HP   * POWER *  ÇP: èäéù   *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                           *        *       *  ÇO:ñ¢èäéù  *                           *
   *******************************************************************************************
   *11*    %16s       *  %4d  * %4d  *      %d      *    ÇPÅD                   *
   *******************************************************************************************
   *12*    %16s       *  %4d  * %4d  *      %d      *    ÇQÅD                   *
   *******************************************************************************************
   *13*    %16s       *  %4d  * %4d  *      %d      *    ÇRÅD                   *
   *******************************************************************************************
   *14*    %16s       *  %4d  * %4d  *      %d      *    ÇS.                    *
   *******************************************************************************************
   *15*    %16s       *  %4d  * %4d  *      %d      *    ÇTÅD                   *
   *******************************************************************************************
   *16*    %16s       *  %4d  * %4d  *      %d      *    ÇUÅD                   *
   *******************************************************************************************
   *17*    %16s       *  %4d  * %4d  *      %d      *    ÇVÅD                   *
   *******************************************************************************************
   *18*    %16s       *  %4d  * %4d  *      %d      *    ÇWÅD                   *
   *******************************************************************************************
   *19*    %16s       *  %4d  * %4d  *      %d      *    ÇX.                    *
   *******************************************************************************************
   *20*    %16s       *  %4d  * %4d  *      %d      *  ÇPÇOÅD                   *
   *******************************************************************************************
   *21*    %16s       *  %4d  * %4d  *      %d      *  ÇPÇPÅD  *   ÇUÇUÅDëOÇ÷   *
   **************************************************************************    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",type[10].weapon,type[10].wehp,type[10].wepow,type[10].weflag,type[11].weapon,type[11].wehp,type[11].wepow,type[11].weflag
 ,type[12].weapon,type[12].wehp,type[12].wepow,type[12].weflag,type[13].weapon,type[13].wehp,type[13].wepow,type[13].weflag
 ,type[14].weapon,type[14].wehp,type[14].wepow,type[14].weflag,type[15].weapon,type[15].wehp,type[15].wepow,type[15].weflag
 ,type[16].weapon,type[16].wehp,type[16].wepow,type[16].weflag,type[17].weapon,type[17].wehp,type[17].wepow,type[17].weflag
 ,type[18].weapon,type[18].wehp,type[18].wepow,type[18].weflag,type[19].weapon,type[19].wehp,type[19].wepow,type[19].weflag
 ,type[20].weapon,type[20].wehp,type[20].wepow,type[20].weflag
);

scanf("%d",&i);
	switch(i){
	
	case 11:                                       //ïêäÌ11
	if(type[10].weflag==1){
	equip();
	search();
	type[10].weflag=2;
	
	}
	
	else if(type[10].weflag==2){
	type[10].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 12:                                       //ïêäÌ12
	if(type[11].weflag==1){
	equip();
	search();
	type[11].weflag=2;
	
	}
	
	else if(type[11].weflag==2){
	type[11].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 13:                                       //ïêäÌ13
	if(type[12].weflag==1){
	equip();
	search();
	type[12].weflag=2;
	
	}
	
	else if(type[12].weflag==2){
	type[12].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 14:                                       //ïêäÌ14
	if(type[13].weflag==1){
	equip();
	search();
	type[13].weflag=2;
	
	}
	
	else if(type[13].weflag==2){
	type[13].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 15:                                       //ïêäÌ15
	if(type[14].weflag==1){
	equip();
	search();
	type[14].weflag=2;
	
	}
	
	else if(type[14].weflag==2){
	type[14].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 16:                                       //ïêäÌ16
	if(type[15].weflag==1){
	equip();
	search();
	type[15].weflag=2;
	
	}
	
	else if(type[15].weflag==2){
	type[15].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 17:                                       //ïêäÌ17
	if(type[16].weflag==1){
	equip();
	search();
	type[16].weflag=2;
	
	}
	
	else if(type[16].weflag==2){
	type[16].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 18:                                       //ïêäÌ18
	if(type[17].weflag==1){
	equip();
	search();
	type[17].weflag=2;
	
	}
	
	else if(type[17].weflag==2){
	type[17].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 19:                                       //ïêäÌ19
	if(type[18].weflag==1){
	equip();
	search();
	type[18].weflag=2;
	
	}
	
	else if(type[18].weflag==2){
	type[18].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 20:                                      //ïêäÌ20
	if(type[19].weflag==1){
	equip();
	search();
	type[19].weflag=2;
	
	}
	
	else if(type[19].weflag==2){
	type[19].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;

	case 21:                                      //ïêäÌ21
	if(type[20].weflag==1){
	equip();
	search();
	type[20].weflag=2;
	
	}
	
	else if(type[20].weflag==2){
	type[20].weflag=1;
	printf("ëïîıÇäOÇµÇ‹ÇµÇΩÅB");
	reequip();
	}
	else
	printf("ñ¢èäéùÇ≈Ç∑ÅB");
	break;
	}
	
	
	if(i==0)
	break;

	if(i==66)
	change();
	
	}
}


int search()
{
	i=0;
	while(i!=21){
	if(type[i].weflag==2){
	type[i].weflag=1;
	cha->hp-=type[i].wehp;
	cha->pow-=type[i].wepow;
	}
	i++;
}
}

int reequip()
{
	i-=1;
	cha->hp-=type[i].wehp;
	cha->pow-=type[i].wepow;
}
	

int equip()
{
	i-=1;
	cha->hp+=type[i].wehp;
	cha->pow+=type[i].wepow;
}


int save()                                                                              //ÉZÅ[Éu
{
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	//	ÉZÅ[ÉuÉfÅ[É^ÇÉoÉCÉiÉäÇÃèëÇ´çûÇ›Ç≈ÉIÅ[ÉvÉì
	fp1=fopen("SaveData.bin", "wb");
	fp2=fopen("weaponData.bin", "wb");
	fp3=fopen("itemData.bin", "wb");
	//	ÉLÉÉÉâÉNÉ^Å[èÛë‘ÇÉtÉ@ÉCÉãÇ…ãLâØ(ÉLÉÉÉâÉNÉ^Å[:3êl)
	fwrite(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[1]), fp1);
	fwrite(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[1]), fp2);
	fwrite(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[1]), fp3);
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}



int combat()                                                                       //êÌì¨
{
	scanf("%d",&com);
	
	if(com==1){
	
	rpow=rand()%5+1;
	switch(rpow){
	case 1:
	atk=ppow*0.25;
	break;
	
	case 2:
	atk=ppow*0.3;
	break;
	
	case 3:
	atk=ppow*0.35;
	break;
	
	case 4:
	atk=ppow*0.4;
	break;
	
	case 5:
	atk=ppow*0.75;
	break;
	}
	
	enh-=atk;
	}
	else if(com==2)
	itemselect();
	
	else if(com==4){
	lose();
	
	for(wepoi=0; wepoi<20 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp+=type[wepoi].wehp;
	cha->pow+=type[wepoi].wepow;
	printf("eo");
	}
	
	state();
	}
}

int encombat()                                                                       //ìGÇÃçUåÇ
{
	enrpow=rand()%5+1;
	switch(enrpow){
	case 1:
	enatk=enpow*1.5;
	break;
	
	case 2:
	enatk=enpow*1.6;
	break;
	
	case 3:
	enatk=enpow*1.7;
	break;
	
	case 4:
	enatk=enpow*1.8;
	break;
	
	case 5:
	enatk=enpow*2.5;
	break;
	}
	php-=enatk;
}


int itemselect()
{
	i=100;
	while(i>6){
		printf("
   *******************************************************************************************
   *NO*          ÉAÉCÉeÉÄ     *   âÒïúó    *   çUåÇóÕ   *  å¬êî  *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *    %d   *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                                                                        *                *
   *                                                                        *    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",items[0].itemname,items[0].recovery,items[0].itempower,items[0].Quantity
 ,items[1].itemname,items[1].recovery,items[1].itempower,items[1].Quantity
 ,items[2].itemname,items[2].recovery,items[2].itempower,items[2].Quantity
 ,items[3].itemname,items[3].recovery,items[3].itempower,items[3].Quantity
 ,items[4].itemname,items[4].recovery,items[4].itempower,items[4].Quantity
 ,items[5].itemname,items[5].recovery,items[5].itempower,items[5].Quantity
);
	scanf("%d",&i);
	
	if(i<7){
		i-=1;
		if(items[i].Quantity!=0){
		php+=items[i].recovery;
		enh-=items[i].itempower;
		items[i].Quantity-=1;
		}
		else if(items[i].Quantity==0)
		printf("Ç†ÇËÇ‹ÇπÇÒÅB");
	}
	}
}


int win()                                                                                      //ÇaÇnÇrÇrÇì|ÇµÇΩÇ∆Ç´
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [ÇfÇ`ÇlÇdÇbÇkÇdÇ`Çq]                     *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *     älìæåoå±íl   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *     älìæã‡äz     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ÇS.     ñﬂÇÈ          *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP                            *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",gexp,gemoney);
	i=100;
	scanf("%d",&i);
	}
}
	
int lastwin()                                                                                      //ÇkÇ`ÇrÇsÇaÇnÇrÇrÇì|ÇµÇΩÇ∆Ç´
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [ÇfÇ`ÇlÇdÇbÇkÇdÇ`Çq]                     *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *     älìæåoå±íl   %7d                                     *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *     älìæã‡äz     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         ////////////////////////////////////////////////     *                          *
   *         //É_ÉìÉWÉáÉìëIëâÊñ Ç≈ÇPÇOÇOÇì¸óÕÇ∑ÇÈÇ∆ÅAÅAÅH//     *    ÇR.                   *
   *         ////////////////////////////////////////////////     *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ÇS.     ñﬂÇÈ          *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP                            *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",gexp,gemoney);
	i=100;
	scanf("%d",&i);
	}
}
	
int lose()                                                                                               //ïâÇØÇΩÇ∆Ç´
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                      ÇfÇ`ÇlÇdÇnÇuÇdÇq                        *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *     älìæåoå±íl   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.                   *
   *     älìæã‡äz     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ÇS.     ñﬂÇÈ          *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP                            *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",gexp,gemoney);
	i=100;
	scanf("%d",&i);
	}
}


int expget()                                                                                               //åoå±íl & Ç®ã‡ älìæèàóù
{
	gexp+=ex;
	gemoney+=enmoney;
	cha->exp+=ex;
	cha->money+=enmoney;
	if(cha->exp>cha->neexp){
	if(cha->le<30){
		printf("1");
	level_1();
	
	}
	
	
	
	else if(cha->le<60){
		printf("2");
	level_2();
	}
	else if(cha->le<500){
	printf("3");
	level_3();
	}
	}
}


int level_1()                                                                                             //ÉåÉxÉãÉAÉbÉvÇÃâ∫èÄîı
{
		pl=cha->le;
		ph=cha->hp;
		pp=cha->pow;
		
		while(ex>=0){
		level_up();
		cha->nei*=1.05;
		cha->neexp+=cha->nei;
		ex-=cha->nei;
		}
		
		level_print();
}

int level_2()                                                                                             //ÉåÉxÉãÉAÉbÉvÇÃâ∫èÄîı
{
		pl=cha->le;
		ph=cha->hp;
		pp=cha->pow;
		while(ex>=0){
		level_up();
		cha->nei*=1.06;
		cha->neexp+=cha->nei;
		ex-=cha->nei;
		}
		
		level_print();
}

int level_3()                                                                                             //ÉåÉxÉãÉAÉbÉvÇÃâ∫èÄîı
{
		pl=cha->le;
		ph=cha->hp;
		pp=cha->pow;
		while(ex>=0){
		level_up();
		cha->nei*=1.04;
		cha->neexp+=cha->nei;
		ex-=cha->nei;
		}
		
		level_print();
}


int level_up()                                                                                             //ÉåÉxÉãÉAÉbÉv
{
	lei=rand()%10+1;
	
	if(lei<=5){
		cha->le++;
		ple=cha->le;
		
		cha->hp*=1.0475;
		if(cha->hp>=200)
		cha->hp*=0.9875;
		if(cha->hp>=550)
		cha->hp*=0.985;
		php=cha->hp;
		if(type[wepoi].weflag==2)
		php=cha->hp+type[wepoi].wehp;
		
		cha->pow*=1.065;
		if(cha->pow>=100)
		cha->pow*=0.985;
		if(cha->pow>=170)
		cha->pow*=0.985;
		if(cha->pow>=350)
		cha->pow*=0.99;
		ppow=cha->pow;
		if(type[wepoi].weflag==2)
		ppow=cha->pow+type[wepoi].wepow;
	}
	else if(lei>5 && lei<=8){
		cha->le++;
		ple=cha->le;
		
		cha->hp*=1.05;
		if(cha->hp>=200)
		cha->hp*=0.99;
		if(cha->hp>=550)
		cha->hp*=0.985;
		php=cha->hp;
		if(type[wepoi].weflag==2)
		php=cha->hp+type[wepoi].wehp;
		
		cha->pow*=1.07;
		if(cha->pow>=100)
		cha->pow*=0.985;
		if(cha->pow>=170)
		cha->pow*=0.985;
		if(cha->pow>=350)
		cha->pow*=0.99;
		ppow=cha->pow;
		if(type[wepoi].weflag==2)
		ppow=cha->pow+type[wepoi].wepow;
	}
	else{ 
		cha->le++;
		ple=cha->le;
		
		cha->hp*=1.055;
		if(cha->hp>=200)
		cha->hp*=0.99;
		if(cha->hp>=550)
		cha->hp*=0.985;
		php=cha->hp;
		if(type[wepoi].weflag==2)
		php=cha->hp+type[wepoi].wehp;
		
		cha->pow*=1.075;
		if(cha->pow>=100)
		cha->pow*=0.985;
		if(cha->pow>=170)
		cha->pow*=0.985;
		if(cha->pow>=350)
		cha->pow*=0.99;
		ppow=cha->pow;
		if(type[wepoi].weflag==2)
		ppow=cha->pow+type[wepoi].wepow;
	}
}

int level_print()                                                                                           //ÉåÉxÉãÉAÉbÉvâÊñ 
{
	i=100;
	while(i!=3){
		printf("
   *******************************************************************************************
   *                       [ÇkÇdÇuÇdÇkÇtÇo]                       *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         level            %3d ==> %3d                         *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            hp           %5d ==> %5d                      *                          *
   *                                                              *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *         power           %5d ==> %5d                      *                          *
   *                                                              *                          *
   *                                                              *    ÇR.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ÇS.                   *
   *                              *                               *                          *
   *                              *                               *                          *
   * HP                           * HP                            *                          *
   *                              *                               *                          *
   *             ENEMY            *              you              *                          *
   *******************************************************************************************
",pl,cha->le,ph,cha->hp,pp,cha->pow);
	i=100;
	scanf("%d",&i);
	}
	
}




int drop()                                                                                              //ÉhÉçÉbÉv
{
	
	switch (w){
	case 1:
	
	dr=rand()%100;
	if(type[0].weflag==0)
	if(dr<=15){
	
		strcpy(type[0].weapon,typed[0].weapon);
		type[0].wehp=typed[0].wehp;
		type[0].wepow=typed[0].wepow;
		type[0].weflag=1;
	
	drop_print();
	}
	break;
	
	case 2:
	
	dr=rand()%100;
	if(type[1].weflag==0)
	if(dr<=5){
	
		strcpy(type[1].weapon,typed[1].weapon);
		type[1].wehp=typed[1].wehp;
		type[1].wepow=typed[1].wepow;
		type[1].weflag=1;
	
	drop_print();
	}
	break;

	case 3:
	
	dr=rand()%100;
	if(type[2].weflag==0)
	if(dr<=5){
	
	strcpy(type[2].weapon,typed[2].weapon);
	type[2].wehp=typed[2].wehp;
	type[2].wepow=typed[2].wepow;
	type[2].weflag=1;
	
	drop_print();
	}
	break;

	case 4:
	
	dr=rand()%100;
	if(type[3].weflag==0)
	if(dr<=3){
	
		strcpy(type[3].weapon,typed[3].weapon);
		type[3].wehp=typed[3].wehp;
		type[3].wepow=typed[3].wepow;
		type[3].weflag=1;
	
	drop_print();
	}
	break;

	case 5:
	
	dr=rand()%100;
	if(type[4].weflag==0)
	if(dr<=5){
		
		strcpy(type[4].weapon,typed[4].weapon);
		type[4].wehp=typed[4].wehp;
		type[4].wepow=typed[4].wepow;
		type[4].weflag=1;
		
	drop_print();
	}
	break;
	
	case 6:
	
	dr=rand()%100;
	if(type[5].weflag==0)
	if(dr<=5){
	
		strcpy(type[5].weapon,typed[5].weapon);
		type[5].wehp=typed[5].wehp;
		type[5].wepow=typed[5].wepow;
		type[5].weflag=1;
		
	drop_print();
	}
	break;
	
	case 7:
	
	dr=rand()%100;
	if(type[6].weflag==0)
	if(dr<=5){
	
		strcpy(type[6].weapon,typed[6].weapon);
		type[6].wehp=typed[6].wehp;
		type[6].wepow=typed[6].wepow;
		type[6].weflag=1;
		
	drop_print();
	}
	break;
	
	case 8:
	
	dr=rand()%100;
	if(type[7].weflag==0)
	if(dr<=4){
	
		strcpy(type[7].weapon,typed[7].weapon);
		type[7].wehp=typed[7].wehp;
		type[7].wepow=typed[7].wepow;
		type[7].weflag=1;
		
	drop_print();
	}
	break;
	
	case 9:
	
	dr=rand()%100;
	if(type[8].weflag==0)
	if(dr<=3){
	
		strcpy(type[8].weapon,typed[8].weapon);
		type[8].wehp=typed[8].wehp;
		type[8].wepow=typed[8].wepow;
		type[8].weflag=1;
	
	drop_print();
	}
	break;
	
	case 10:
	
	dr=rand()%100;
	if(type[9].weflag==0)
	if(dr<=4){
	
		strcpy(type[9].weapon,typed[9].weapon);
		type[9].wehp=typed[9].wehp;
		type[9].wepow=typed[9].wepow;
		type[9].weflag=1;
	
	drop_print();
	}
	break;
	
	case 11:
	
	dr=rand()%100;
	if(type[10].weflag==0)
	if(dr<=4){
	
		strcpy(type[10].weapon,typed[10].weapon);
		type[10].wehp=typed[10].wehp;
		type[10].wepow=typed[10].wepow;
		type[10].weflag=1;
	
	drop_print();
	}
	break;

	case 12:
	
	dr=rand()%100;
	if(type[11].weflag==0)
	if(dr<=4){
	
		strcpy(type[11].weapon,typed[11].weapon);
		type[11].wehp=typed[11].wehp;
		type[11].wepow=typed[11].wepow;
		type[11].weflag=1;
	
	drop_print();
	}
	break;

	case 13:
	
	dr=rand()%100;
	if(type[12].weflag==0)
	if(dr<=4){
	
		strcpy(type[12].weapon,typed[12].weapon);
		type[12].wehp=typed[12].wehp;
		type[12].wepow=typed[12].wepow;
		type[12].weflag=1;
	
	drop_print();
	}
	break;

	case 14:
	
	dr=rand()%100;
	if(type[13].weflag==0)
	if(dr<=3){
	
		strcpy(type[13].weapon,typed[13].weapon);
		type[13].wehp=typed[13].wehp;
		type[13].wepow=typed[13].wepow;
		type[13].weflag=1;
	
	drop_print();
	}
	break;

	case 15:
	
	dr=rand()%100;
	if(type[14].weflag==0)
	if(dr<=2){
	
		strcpy(type[14].weapon,typed[14].weapon);
		type[14].wehp=typed[14].wehp;
		type[14].wepow=typed[14].wepow;
		type[14].weflag=1;
	
	drop_print();
	}
	break;

	case 16:
	
	dr=rand()%100;
	if(type[15].weflag==0)
	if(dr<=2){
	
		strcpy(type[15].weapon,typed[15].weapon);
		type[15].wehp=typed[15].wehp;
		type[15].wepow=typed[15].wepow;
		type[15].weflag=1;
	
	drop_print();
	}
	break;

	case 17:
	
	dr=rand()%100;
	if(type[16].weflag==0)
	if(dr<=2){
	
		strcpy(type[16].weapon,typed[16].weapon);
		type[16].wehp=typed[16].wehp;
		type[16].wepow=typed[16].wepow;
		type[16].weflag=1;
	
	drop_print();
	}
	break;

	case 18:
	
	dr=rand()%100;
	if(type[17].weflag==0)
	if(dr<=1){
	
		strcpy(type[17].weapon,typed[17].weapon);
		type[17].wehp=typed[17].wehp;
		type[17].wepow=typed[17].wepow;
		type[17].weflag=1;
	
	drop_print();
	}
	break;

	case 20:
	
	dr=rand()%1000;
	if(type[19].weflag==0)
	if(dr<=12){
	
		strcpy(type[19].weapon,typed[19].weapon);
		type[19].wehp=typed[19].wehp;
		type[19].wepow=typed[19].wepow;
		type[19].weflag=1;
	
	drop_print();
	}
	break;
	
	case 21:
	
	dr=rand()%10000;
	if(enl<120){
		if(dr<=10){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl<150){
		if(dr<=20){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl<200){
		if(dr<=30){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl<250){
		if(dr<=50){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl<300){
		if(dr<=75){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl<400){
		if(dr<=100){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	else if(enl>400){
		if(dr<=120){
			if(type[20].weflag!=0){
			type[20].wehp+=1000;
			type[20].wepow+=1000;
			php+=1000;
			ppow+=1000;
			
			drop_print();
			}
			else{
			strcpy(type[20].weapon,typed[20].weapon);
			type[20].wehp=typed[20].wehp;
			type[20].wepow=typed[20].wepow;
			type[20].weflag=1;
			drop_print();
			}
		}
	}
	default:
	break;

}
	ritem=rand()%100;                                                                                    //ÉAÉCÉeÉÄÉhÉçÉbÉv
	if(w>13){
		if(ritem<3){
		strcpy(items[5].itemname,itemi[5].itemname);
		items[5].recovery=itemi[5].recovery;
		items[5].itempower=itemi[5].itempower;
		items[5].Quantity+=1;
		ritem=5;
		item_drop_print();
		}
	else if(ritem>97){
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=1;
		ritem=4;
		item_drop_print();
		}
	}
	else if(w>7){
		if(ritem<5){
		strcpy(items[3].itemname,itemi[3].itemname);
		items[3].recovery=itemi[3].recovery;
		items[3].itempower=itemi[3].itempower;
		items[3].Quantity+=1;
		ritem=3;
		item_drop_print();
		}
	else if(ritem>97){
		strcpy(items[2].itemname,itemi[2].itemname);
		items[2].recovery=itemi[2].recovery;
		items[2].itempower=itemi[2].itempower;
		items[2].Quantity+=1;
		ritem=2;
		item_drop_print();
		}
	}
	else if(w<=7){
		if(ritem<3){
		strcpy(items[1].itemname,itemi[1].itemname);
		items[1].recovery=itemi[1].recovery;
		items[1].itempower=itemi[1].itempower;
		items[1].Quantity+=1;
		ritem=1;
		item_drop_print();
		}
	else if(ritem>92){
		strcpy(items[0].itemname,itemi[0].itemname);
		items[0].recovery=itemi[0].recovery;
		items[0].itempower=itemi[0].itempower;
		items[0].Quantity+=1;
		ritem=0;
		item_drop_print();
		}
	}
}

int item_drop_print()
{
	i=100;
	while(i!=2){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *               %10sÇälìæÇµÇ‹ÇµÇΩÅIÅI                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
",items[ritem].itemname);
	scanf("%d",&i);
}

}
int drop_print()
{
	w-=1;
	i=100;
	while(i!=2){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.                   *
   *               %16sÇälìæÇµÇ‹ÇµÇΩÅIÅI             *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
",type[w].weapon);
	scanf("%d",&i);
}
}



int shop()
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                         .          Å» Å»                     *   ÇPÅD  îÉÇ¢Ç…óàÇΩ       *
   *   Å^                         _   .(ﬂÑDﬂ,,)               Å^  *                          *
   * Å^ÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQ_ÅQÇ∆__ÅQÇ¬_ÅQÅQÅQÅQ_ÅQ_Å^ Å^  *                          *
   * |ÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQÅõ.Åø. Åø Åõ ÅQÅQÅQÅQ .|Å^Å^  *                          *
   * |  îNíÜñ≥ãx24éûä‘              Åø |.Å_|| ÅøÅQÅQÅQÅQÅQ_|Å^Å^Ñ† *                          *
   * |ÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅæ.Åæ.  J.Åæ  ÇrÇsÇnÇo |Å^  Ñ† *   ÇQÅD  îÑÇËÇ…óàÇΩ       *
   * ÅP|ÅP|ÅPÅPÅPÅPÅPÅPÅPÅPÅP|ÅP|ÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅP|ÅP|     Ñ† *                          *
   *   |  ||  Å^  Å^         |  |.     .|≤◊Øº¨≤œæ|     |  |     Ñ† *                          *
   *   |  ||Å^               |  ||ÅPÅP|ÅPÅP|ÅPÅP|ÅPÅP| |  |     Ñ† *                          *
   *   |  ||  Å^ .  Åøë‰Åø.  |  ||Å^  |Å^Å^|    |    | |  |     Ñ† *                          *
   *   |  ||Å^ . ÅiÅLÅÕÅM  Åj|  ||ÅQÅQ|Å^  |    |ÅQÅQ| |  |     Ñ† *   ÇRÅD   ÉKÉ`ÉÉ          *
   *   |  ||      Ñ°Ñ¶ÑüÑüÑüÑ¢.Åj  |  ||ÅQÅQ|ÅPÅP|ÅPÅP|ÅQÅQ| |  |     Ñ† *                          *
   *   |  ||Å^.|ÅPÅPÅPÅPÅPÅP |  ||Å^Å^|ÅPÅP|ÅPÅP|ÅQ__| |ÅQ|    Å^ *                          *
   *   |  ||  .| Ñ°ÑüÑüÑ¢Ñ°ÑüÑüÑ¢| ||Å^  |    |Å^Å^| . /ÉÕÉÕ/|       Å^   *                          *
   *   |  ||...|.Ñ†..Ñ†Åb.Ñ†|..||   |    |Å^Å^|. |ÅPÅP| |     Å^     *                          *
   *   |  ||                .|  || §Å^|Å^_§|. |.∫ﬁ–|.|   Å^       *   ÇSÅD   Ç‡Ç«ÇÈ          *
   *    ÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅPÅP ÅPÅP l----l,≤            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");
	scanf("%d",&i);
	
	switch (i){
		case 1:
		buy();
		break;
		case 2:
		sell();
		break;
		case 3:
		gacha();
		case 4:
		state();
		break;
	}
	}
}


int buy()
{
	i=100;
	while(i!=0){
		printf("
   *******************************************************************************************
   *NO*          ÉAÉCÉeÉÄ     *   âÒïúó    *   çUåÇóÕ   *  å¬êî  *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   ÇPÅD   ÇPÇQÇOâ~         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   ÇQÅD   ÇPÇTÇOâ~         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   ÇRÅD   ÇTÇOÇOâ~         *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   ÇSÅD   ÇUÇOÇOâ~         *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   ÇTÅD  ÇPÇQÇOÇOâ~        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   ÇUÅD  ÇPÇTÇOÇOâ~        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      ÇlÇnÇmÇdÇx :    %7d â~                        *                *
   *                                                                        *    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",items[0].itemname,items[0].recovery,items[0].itempower,items[0].Quantity
 ,items[1].itemname,items[1].recovery,items[1].itempower,items[1].Quantity
 ,items[2].itemname,items[2].recovery,items[2].itempower,items[2].Quantity
 ,items[3].itemname,items[3].recovery,items[3].itempower,items[3].Quantity
 ,items[4].itemname,items[4].recovery,items[4].itempower,items[4].Quantity
 ,items[5].itemname,items[5].recovery,items[5].itempower,items[5].Quantity
 ,cha->money);
	scanf("%d",&i);
	
	if(i>=1 || i<=6){
	i-=1;
		if(items[i].recovery>0 || items[i].itempower>0){                                    //êîílÇégÇ¡ÇƒéÊÇ¡ÇΩÇ±Ç∆Ç™Ç†ÇÈÇ©ämîF
		printf("çwì¸ÇµÇ‹ÇµÇΩÅB");
			if(i==0 && cha->money>=120){
			cha->money-=120;
			items[i].Quantity += 1;
			}
			else if(i==1 && cha->money>=150){
			cha->money-=150;
			items[i].Quantity += 1;
			}
			else if(i==2 && cha->money>=500){
			cha->money-=500;
			items[i].Quantity += 1;
			}
			else if(i==3 && cha->money>=600){
			cha->money-=600;
			items[i].Quantity += 1;
			}
			else if(i==4 && cha->money>=1200){
			cha->money-=1200;
			items[i].Quantity += 1;
			}
			else if(i==5 && cha->money>=1500){
			cha->money-=1500;
			items[i].Quantity += 1;
			}
			else
			printf("Ç®ã‡Ç™ë´ÇËÇ‹ÇπÇÒÅB");
		}
		else
		printf("çwì¸Ç≈Ç´Ç‹ÇπÇÒÅB");
		
	}
	i+=1;
	}
}


int sell()
{
	i=100;
	while(i!=0){
		printf("
   *******************************************************************************************
   *NO*          ÉAÉCÉeÉÄ     *   âÒïúó    *   çUåÇóÕ   *  å¬êî  *      ç∂ÇÃêîéöÇ≈ëIë       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   ÇPÅD     ÇTÇOâ~         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   ÇQÅD     ÇUÇOâ~         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   ÇRÅD    ÇPÇTÇOâ~        *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   ÇSÅD    ÇPÇUÇOâ~        *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   ÇTÅD    ÇQÇRÇOâ~        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   ÇUÅD    ÇQÇTÇOâ~        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      ÇlÇnÇmÇdÇx :    %7d â~                        *                *
   *                                                                        *    ÇOÅDñﬂÇÈ    *
   *******************************************************************************************
",items[0].itemname,items[0].recovery,items[0].itempower,items[0].Quantity
 ,items[1].itemname,items[1].recovery,items[1].itempower,items[1].Quantity
 ,items[2].itemname,items[2].recovery,items[2].itempower,items[2].Quantity
 ,items[3].itemname,items[3].recovery,items[3].itempower,items[3].Quantity
 ,items[4].itemname,items[4].recovery,items[4].itempower,items[4].Quantity
 ,items[5].itemname,items[5].recovery,items[5].itempower,items[5].Quantity
 ,cha->money);
	scanf("%d",&i);
	
	i-=1;
		if(items[i].Quantity>0){                                    //êîílÇégÇ¡ÇƒéÊÇ¡ÇΩÇ±Ç∆Ç™Ç†ÇÈÇ©ämîF
		printf("îÑãpÇµÇ‹ÇµÇΩÅB");
		items[i].Quantity -= 1;
		if(i==0)
		cha->money+=50;
		if(i==1)
		cha->money+=60;
		if(i==2)
		cha->money+=150;
		if(i==3)
		cha->money+=160;
		if(i==4)
		cha->money+=230;
		if(i==5)
		cha->money+=250;
		}
		else
		printf("Ç†ÇËÇ‹ÇπÇÒÅB");
		
		i+=1;
	}
}



int gacha()
{
	i=100;
	while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                            %7d â~                        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.     âÒÇ∑          *
   *                                                              *                          *
   *                Åb--------------------------Åb                *                          *
   *                Åb                          Åb                *                          *
   *                Åb                          Åb                *                          *
   *                Åb            __            Åb                *    ÇQ.   íÒãüäÑçá        *
   *                Åb-----------(__)-----------Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *    ÇR.                   *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb            Åb            Åb                *                          *
   *                Åb--------------------------Åb                *    ÇS.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                      ÇPâÒÇPÇOÇOÇOâ~ÇæÇÊÅI                    *                          *
   *                                                              *                          *
   * ÉKÉ`ÉÉâÊñ                                                    *                          *
   *******************************************************************************************
",cha->money);
	scanf("%d",&i);
	
	if(i==1){
		if(cha->money>=1000){
		rgacha();
		cha->money-=1000;
		}
		else
		printf("Ç®ã‡Ç™ë´ÇËÇ‹ÇπÇÒ");
	}
	else if(i==2){
		i=100;
		while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Hiportion          50Åì                      *    ÇP.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion          38Åì                      *    ÇQ.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion 10å¬   11.2Åì                      *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 ÅHÅHÅHÅiïêäÌÅj    0.8Åì                      *    ÇS.     ñﬂÇÈ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *******************************************************************************************
");
	scanf("%d",&i);
	}
	i=100;
	}
	}
}
int rgacha()
{
	rga=rand()%1000;
	
	if(rga<=500){
	printf("HiportionÇälìæÇµÇ‹ÇµÇΩ");
		strcpy(items[2].itemname,itemi[2].itemname);
		items[2].recovery=itemi[2].recovery;
		items[2].itempower=itemi[2].itempower;
		items[2].Quantity+=1;
		ritem=2;
		item_drop_print();
	}
	else if(rga<=880){
	printf("SuportionÇälìæÇµÇ‹ÇµÇΩ");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=1;
		ritem=4;
		item_drop_print();
	
	}
	else if(rga<=991){
	printf("SuportionÇ5å¬älìæÇµÇ‹ÇµÇΩ");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=5;
		ritem=4;
		item_drop_print();
	Sleep(500);
	}
	else if(rga>991){
	printf("ëÂìñÇΩÇËÅIÅIGramÇälìæÇµÇ‹ÇµÇΩ");
		if(type[18].weflag!=0){
			type[18].wehp+=200;
			type[18].wepow+=150;
			if(type[18].weflag==2){
				cha->hp+=200;
				cha->pow+=150;
			}
		}
			else{
			strcpy(type[18].weapon,typed[18].weapon);
			type[18].wehp=typed[18].wehp;
			type[18].wepow=typed[18].wepow;
			type[18].weflag=1;
			}
	w=19;
	drop_print();
	Sleep(2500);
	}
}
int exitprint()
{
	i=100;
	while(i>2){
	printf("
   *******************************************************************************************
   *                                                              *      ç∂ÇÃêîéöÇ≈ëIë      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇP.ÉZÅ[ÉuÇπÇ∏Ç…èIóπ   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇQ. ÉZÅ[ÉuÇµÇƒèIóπ    *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇR.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ÇS.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                    fa                          *                          *
   *                                                              *                          *
   *******************************************************************************************
");
	scanf("%d",&i);
	
	if(i==1)
	exit(EXIT_FAILURE);
	else if(i==2)
	save();
	exit(EXIT_FAILURE);
}
}