#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
					//////////////////////////////////////////////////////////////
					//実行の際には、実行して出る画面の左上を押し、既定値を押して//
					//レイアウトのウィンドウの幅を１００、高さを３０にしてあげて//
					//ください。これをしないと正しく表示されないことがあります。//
					//////////////////////////////////////////////////////////////

 typedef struct  {
	char			itemname[10];	//アイテム名
	unsigned int	recovery;		//回復量
	unsigned int	itempower;		//アイテムの攻撃力
	unsigned int	Quantity;		//個数
} S_ITEM;

 typedef struct  {
	char			itemname[10];	//アイテム名
	unsigned int	recovery;		//回復量
	unsigned int	itempower;		//アイテムの攻撃力
	unsigned int	Quantity;		//個数
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
	char			weapon[16];	//武器の名前
	unsigned int	wehp;		//武器の体力
	unsigned int	wepow;		//武器のパワー
	unsigned int	weflag;		//その武器があるかどうか
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
	char			name[16];	//	名前
	unsigned int	hp;			//	HP
	unsigned int	le;			//	レベル
	unsigned int	pow;		//  力
	unsigned int	exp;		//	経験値
	unsigned int	money;		//	お金
	unsigned int	neexp;      //	次のレベルまでの経験値
	unsigned int	nei;        //	次のレベルまでの経験値のための変数
} S_STATUS;


 typedef struct  {
	char			weapon[16];	//武器の名前
	unsigned int	wehp;		//武器の体力
	unsigned int	wepow;		//武器のパワー
	unsigned int	weflag;		//その武器があるかどうか
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
		//名前	HP	レベル	力	経験値	お金	経験値用変数２つ                                                        ←初期値
		{"YOU",80,1,25,0,0,70,70},	//	勇者
	};
	
	int i,q,ex,we,wp,op,com,rga,rpow,atk,wepoi,flag_a=0,flag_b,flag_c,mfla_g,flag_o,flag_s,flag_a,flag_exit,flag_las;
	
	int php,ple,pl,ph,pp,ppow;
	
	int work_hp,  work_le,  work_pow,  work_exp,  work_neexp,  work_nei,  work_money;
	
	int si,sel,ki,kel,ii,iel,ci,cel,lei;
	
	int enel,eni,enl,enh,enpow,enatk,enrpow,enmoney,gexp,gemoney;                                    //敵のステータス
	
	int hwork1,hwork2,hwork3,hwork4,hwork5,hwork6,hwork7,hwork8,hwork9,hwork10,hwork11               //武器用変数
	,hwork12,hwork13,hwork14,hwork15,hwork16,hwork17,hwork18,hwork19,hwork20;
	
	int pwork1,pwork2,pwork3,pwork4,pwork5,pwork6,pwork7,pwork8,pwork9,pwork10,pwork11
	,pwork12,pwork13,pwork14,pwork15,pwork16,pwork17,pwork18,pwork19,pwork20;
	
	int fwork1,fwork2,fwork3,fwork4,fwork5,fwork6,fwork7,fwork8,fwork9,fwork10,fwork11
	,fwork12,fwork13,fwork14,fwork15,fwork16,fwork17,fwork18,fwork19,fwork20;
	
	int r1,r2,r3,r4,r5,r6,p1,p2,p3,p4,p5,p6,q1,q2,q3,q4,q5,q6;                                       //アイテム用変数
	
	int dr,w,ritem;                                                                                  //ドロップ
int main(void)
{
	
	
	srand((unsigned int)time(NULL)); // 現在時刻の情報で初期化
	if(flag_a==0)
	
	printf("%s",type[19].weapon);
	
	printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.スタ−ト           *
   *                           タイトル                           *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.ロ−ド             *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *          1.スタ−ト                      ２.ロ−ド           *                          *
   *                                                              *    ３.終了               *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                           ３.終了                            *                          *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            世界のいたるところにまものたちが現れた            *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            世界のいたるところにまものたちが現れた            *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      そこのあなた！！                        *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            世界のいたるところにまものたちが現れた            *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      そこのあなた！！                        *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             まものたちをたおして来てください！！             *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            世界のいたるところにまものたちが現れた            *    １.     次へ          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      そこのあなた！！                        *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             まものたちをたおして来てください！！             *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
	else if (q==2){              //読込み
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	S_STATUS  cha[1] = { 0 };
	S_SWORD   type[20] ={ 0 };
	S_ITEM  items[5]={ 0 };
	
	//	セーブデータをバイナリの読み込みでオープン
	fp1=fopen("SaveData.bin", "rb");
	fp2=fopen("weaponData.bin", "rb");
	fp3=fopen("itemData.bin", "rb");
	//	キャラクターのステータスをファイルから復元(キャラクター:3人)
	fread(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[0]), fp1);   
	fread(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[0]), fp2);
	fread(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[0]), fp3);
	//構造体変数に復元したデータを画面に表示
	
	{
		printf("%s, HP:%d, LEVEL:%d, 力:%d,経験値:%d\nお金:%d\n経験値用変数:%d\n",
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                       ダンジョン             *                          *
   *                                             〜〜〜〜         *                          *
   *                                        (⌒⌒)〜〜〜          *    １.  ダンジョン       *
   *                                        ii!i!i                *                          *
   *                                        ﾉ~~~~＼               * 敵を倒し強くなりましょう *
   *                                      ／_^ _ ~_＼             *                          *
   *                                ,,,,／,,,,,,,,,,,＼,,,,,      *                          *
   *        ショップ               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,   *    ２.   ショップ        *
   *        ＿＿＿＿                                              *                          *
   *      ／   Ｓ   ＼                                            * アイテムや武器が買えます *
   *      ┬─────────┬                                             *                          *
   *      │┌──┐  □ │                                             *                          *
   *      ││。│     │                                             *    ３.   ステ−タス      *
   *      ┴┴──┴─────┴                                             *                          *
   *                                                              *  装備を変えたり出来ます  *
   *                                                              *                          *
   *                                  ステ−タス      セ−ブ      *                          *
   *                                   ＿＿＿＿      ＿＿＿＿     *    ４.    セ−ブ         *
   *                                  ｜      ｜    ｜      ｜    *                          *
   *                                  ｜  ○> ｜    ｜  Ｆ  ｜    * こまめにセ−ブしましょう *
   *                                  ｜ <｜  ｜    ｜      ｜    *                          *
   *                                  ｜  人  ｜    ｜      ｜    *                          *
   *                                   ￣￣￣￣      ￣￣￣￣     *                 5.やめる *
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
	printf("もう一度入力してください。");
	break;
	}
	}

}return 0;


}

int Dungeon()                                                                                                  //ダンジョンに入る
{
		printf("
		
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                        ダンジョン選択                        *    １.     草原          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *        草原(難易度☆)                 荒野(難易度☆☆)       *    ２.     荒野          *
   *      ｖ ,ヾ'ヾ    <ヾ   ｖ           ∠´....￣＼            *                          *
   *   ｗ   ﾐ:..  彡  ﾐ:..彡            /´.:..＼ :＜: :.￣ヽ     *                          *
   *       ヾ :.. ｼ  ヾ::. ｼ           ／〉.:ﾆ;.. , ￣ｒ'＼ﾊ      *                          *
   *      ｖヾ,. ｒ'  ヾ,､ｒ'   ｗ      ノ.:.:./.::､:／´￣｀＼   *                          *
   *   ｗ    |li  ｖ   li!  ｖ         べ､＿_,,／￣｀ヾ/.ヽ∠＼   *    ３.     遺跡          *
   *         il|    ｖ |il   ｗ         ｰ─----‐'ー-─'´ー-=＝    *                          *
   *                                                              *                          *
   *       遺跡(難易度☆☆☆)             城(難易度☆☆☆☆) _    *                          *
   *        (:∴   （::）                 + ｢|_｢|_｢|_｢|  +_ ｜＼  *                          *
   *   /三  ゞ三三三(:( _                  |┬┴┬┴┬|  |＞｜／       *    ４.      城           *
   *   | ||:| | |:| ):)＼:＼           *   |┴|￣￣|┴｜ |  ｜+     *                          *
   *   |:||:| | |:| (:(  ＼:＼          +  |┬|＿＿| ┬|｢|「￣|     *                          *
   * ／/＾〕|:| |:|:.||||. ＼7＼           |┴|┬┴┬┴|┬┴‐|          *                          *
   * .〔二〔三| |:|:|:||:|::/＼;＼     +   |┬|┴┬┴┬|┴┬‐|          *                          *
   *                                      ;|┴|┬┴┬┴|┬┴‐|          *                  5.やめる*
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
	
	fflag_b5();                    //5の白い世界
	default:
	printf("もう一度入力してください。");
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
	
	if(flag_b==1){              //1の草原
	fflag_b1();
	}
	if(flag_b==2){              //2の荒野
	fflag_b2();
	}
	if(flag_b==3){              //3の遺跡
	fflag_b3();
	}
	if(flag_b==4)               //4の城
	fflag_b4();
	
	for(wepoi=0; wepoi<21 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp+=type[wepoi].wehp;
	cha->pow+=type[wepoi].wepow;
	}
}
int fflag_b1()                                                                                            //草原へ入る
{
	w=1;
		
		printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                              /⌒ヽ                           *                          *
   *                              i   l                           *    １.   こうげき        *
   *                            ノ     ヽ､                        *                          *
   *                        , ´         ｀ 、                    *                          *
   *                     ／                  ヽ.                  *                          *
   *                   /        , - ､   , - ､   ',                *                          *
   *                   i        | ●      ● |   i                *    ２.   アイテム        *
   *                   |    〈＼ ｰ‐'   ｰ‐'／〉 |                *                          *
   *                    ＼    ＼｀ｰ‐-−一'´／／                 *                          *
   *                      ヽ､    ￣￣￣￣￣  ／                   *                          *
   *                         ｀￣￣￣￣￣￣´                     *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １．  こうげき        *
   *                                                              *                          *
   *                         ／⌒＼                               *                          *
   *                        / ＿＿_)                              *                          *
   *                       ( (´∀`)／  |)                        *                          *
   *                        ) _]つ＜＝＝０⇒                      *    ２.   アイテム        *
   *                       /   ー _>＼  |)                        *                          *
   *                      (_＞ー＜_)  ＼(                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １．  こうげき        *
   *                                                              *                          *
   *                                                              *                          *
   *                         l⌒l l⌒l                            *                          *
   *                         |  |_|  |                            *                          *
   *                        / ・ ﾟ・ ヽ                           *    ２.   アイテム        *
   *                        ∪ ￣￣  ∪＼                         *                          *
   *                         | ,一 ､ |                            *                          *
   *                          ￣  ￣                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                 ＿_                          *                          *
   *                         _.-ｧ=rf'´  ￣ ‐ .   _              *                          *
   *                       ,ｨ豸:（●】ﾄ､＿: :_:_:::. (ミﾐ:､       *    １．  こうげき        *
   *                     /ｼｼｯ''⌒ヽﾐ;､ : : :. ￣｀‐-`'≪ヽ       *                          *
   *                    幺彡八_     厂 ´￣￣￣￣￣｀`            *                          *
   *                ,.ィ''´ｼｼｼﾐﾐﾐミ;､（                          *                          *
   *             ／,.:',.:',:'ﾐﾐﾐミミミ}}ｷﾐ｝                     *                          *
   *           ／,.:',.:'ｼｼ汽ﾐ;彡'シﾉﾉ}り                         *    ２.   アイテム        *
   *        ／,.:',.:',.ｼｼｼｼｼｼｼｼ／彡ｙ′                          *                          *
   *      / ,.:',.:',.:'ｼｼｼｼｼ彡イ彡;ッ'′                         *                          *
   *     ,ﾊ;_;.:',.:',.:'ｼｼ彡イ'~;;彡'′                          *                          *
   *＿ / ,'で;_;ノｼｼE彡乍;;;.┝─‐,-､＿＿＿_＿_＿                  *                          *
   *- ,ｲ_,､_,ノｼ,ｨ彳斤=ﾆ`ﾐｼ'ﾞ´￣7:/~二三  二７＾ヽ               *    ３.                   *
   *:;'ｼｼf厂三.{:{ 三三二三二〈〈 二二三＿ﾊ、,ﾉ                   *                          *
   *  /.:/ｼﾘﾘ厂    `^                `'             ￣            *                          *
   *,:'.:/ｼｿﾙﾘ                                                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １．  こうげき        *
   *                           ＿＿＿＿_                          *                          *
   *                          ∠_∠∠_／ ＼                       *                          *
   *                          ＶＶＶＶＶ.＼  |                    *                          *
   *                            彡 ⌒ ミ  ＼|                     *                          *
   *                       /ヽ(´・ω・｀)ﾉ／|                    *    ２.   アイテム        *
   *                       |二二二二二|／|                        *                          *
   *                       |二二二二二|／                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                          〜BOSS〜                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |＼              ／|                      *    １．  こうげき        *
   *                    |＼＼        ／／|                        *                          *
   *                   :     ,>｀´￣｀´ <  ′                   *                          *
   *                     Ｖ                Ｖ                     *                          *
   *                    i{   ●      ●   }i                      *                          *
   *                    八     ､_,_,      八                      *    ２.   アイテム        *
   *                   /  个 . ＿   ＿ . 个 ',                    *                          *
   *              ＿/    il    ,'＿_   '.   li _ ',＿_            *                          *
   *                  ￣（__.ノ    （__.                          *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
		case 1:             //スライム
			enl=1;
			enh=10;
			enpow=2;
			ex=10;
			enmoney=20;
		break;
		
		case 2:             //狩人
			enl=3;
			enh=12;
			enpow=3;
			ex=15;
			enmoney=25;
		break;
		
		case 3:             //カーバンクル
			enl=5;
			enh=15;
			enpow=5;
			ex=20;
			enmoney=30;
		break;
		
		case 4:             //鳥
			enl=6;
			enh=25;
			enpow=4;
			ex=25;
			enmoney=30;
		break;
		
		case 5:              //ミミック
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
	
	else if(si==10){              ////きゅっぷい
			sel=6;
			enl=10;
			enh=60;
			enpow=7;
			ex=200;
			enmoney=50;
			si++;
	}return 0;
}




int fflag_b2()                                                                                            //荒野に入る
{
	w=4;
		
		printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １．  こうげき        *
   *        __λ_            （ヽｰ/.）        ._λ__              *                          *
   *     ／／/|~''‐‐--..,,_（ ﾟ盥ﾟ ）_,,.--‐‐''~|ヽ＼＼       *                          *
   *   ／／ ./   |          |ﾞ'''' ''''ﾞ|          |  ヽ ＼＼     *                          *
   *  /／   /     |          l,     ,,l.          |     ヽ  ＼＼  *                          *
   * /'＿_ /＿＿ |  ＿＿     /｀ ´.ヽ   ＿__  | ＿ヽ＿ヽ|        *    ２.   アイテム        *
   *'´    ｀'´     ｀'.´      ｀ヽ|, -‐-､|／    ｀'´  ｀'.   *                          *
   *                        ﾉ       ヽ                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *//////////////////////////////////////////////////////////////*      左の数字で選択      *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////／￣＼／￣＼////////////////////////*    １．  こうげき        *
   *//////////////////////// ｜    ｜    ｜///////////////////////*                          *
   *//////////////////////／￣／￣￣~＼／￣＼/////////////////////*                          *
   */////////////////////｜  /●      ｜    ｜////////////////////*                          *
   *//////////////////////＼｜ (人_) ●＼  ／/////////////////////*                          *
   *//////////////////////／｜  Lノ    ／￣＼/////////////////////*    ２.   アイテム        *
   */////////////////////｜  ＼       ｜    ｜////////////////////*                          *
   *//////////////////////＼_／￣＼／￣＼＿／/////////////////////*                          *
   *////////////////////////｜    ｜    ｜////////////////////////*                          *
   */////////////////////////＼＿／＼＿／/////////////////////////*                          *
   *////////////////////////////     ｜///////////////////////////*    ３.                   *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                          , --ー-- ､                          *    １．  こうげき        *
   *                       /｀ヽ_o .o_/´ヽ.                      *                          *
   *                      l    /｀ｰ´ヽ.  .l                      *                          *
   *                     |.    l三三三l  .|                       *                          *
   *                     .|   l三三三l   |                        *                          *
   *                       | .l三三三l .|                         *    ２.   アイテム        *
   *                       .| l三三三l |                          *                          *
   *                        ｌ.l三三三l.|                         *                          *
   *                         ｌ.l三三三l.|                        *                          *
   *                          ｌ.l三三三l.|                       *                          *
   *                           ｌ. l三三l. |                      *    ３.                   *
   *                             ｌ.l三三l. |                     *                          *
   *                            ｌ.l三三l. |                      *                          *
   *                           ｌ.l三三l. |                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *             ,- ､  ,-､                             ,. ､       *      左の数字で選択      *
   *             V  ＼   ヽ                       ／ノ }          *                          *
   *              V   入 . ∧                  ／ '_... /-. ､     *                          *
   *               V / ∧  ∧.             ／-‐'' ／／ /         *                          *
   *                Vヽ. ∧   i.          ／  _.. ／ '´..／      *    １．  こうげき        *
   *                 ヽ.ヽ ∧  j.       ／ ￣..／ '´..／         *                          *
   *                   ､ヽ.∧ .i    ／  ,.  '´ .＞' ´           *                          *
   *           ,､      |＼ヽﾊ.-‐く,.. '＞'´                     *                          *
   *           i i＼Y云 γ云ヽ  ﾊ／i／i⌒＼                       *                          *
   *          i i  ゝゞﾂ  ゞ::_ツ.'/i iくi i'´i.ト,j  j＼        *    ２.   アイテム        *
   *          i i.      i iY:::/ゝﾆﾆ.i K_i i_..i.i. ソ\､  ＼       *                          *
   *        i i.      i i.{:::;′     i i.i.i.i ト.i.i／.._..入_ノ*                          *
   *        i i       i i i ;'        i i i.ｉ.i ｉ. i.i￣        *                          *
   *       i i       ｉ ｉ i;′      .i i i.i i i  i.i            *                          *
   *       i i.       //. i!        i i i.i. i i  i.i             *    ３.                   *
   *      //     '´   !.          i i ヾ､ヾ､ !.!                 *                          *
   *,. -  = '´                      ヾ:         ﾞヾ､             *                          *
   *                                     ヽ                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    /´!      r 、                            *    １．  こうげき        *
   *                 ｛r'０｀7フー':}                             *                          *
   *                   0::::０:; :丿                              *                          *
   *                 ヾ;i'⌒ヽ:-'j'                               *                          *
   *                   ｀ヽ,j j´{                                *                          *
   *                     /  //;;;;`´_ヽ, -、                     *    ２.   アイテム        *
   *                   イj′{ {;;;;０;;;o;;;く、                  *                          *
   *                  V     ヽー--‐＝=ーや、＼                   *                          *
   *                 ノ ｀ 、    ｀￣´   r 、_ヽ,                *                          *
   *                'ー '´ ｀ー 、_ ｒ'^ー一′  ￣               *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                   =＝ミ             ＢＯＳＳ *      左の数字で選択      *
   *              {{                //        =ミ                 *                          *
   *｢ミ ､         }}              ｛｛    ＿//    ／/  ＿_        *                          *
   *{三ミメミﾆ=ﾐ 〃                 } }≦;ｧ=ｲ_ ／  /ﾐ//⌒`        *                          *
   *    ≦ミミメﾐrキ'              {ﾐＹ{ツ//彡/厶イﾐ//ﾐX          *    １．  こうげき        *
   *    {ミﾐメﾐ//人＿             ﾊ彡|:レ'/ー≠(二7//ｲ彡ﾊ         *                          *
   *￣~｀ヽ{ミヾﾐ{.{彡'          {ミ,o'  roフ    f二,//ヽﾚ彡ﾘ彳   *                          *
   *       Y{ミヾ}.}三彡_______＿ ∨      人    ￣//＼ ＼彡ﾘ      *                          *
   *       | ﾄミﾐゞﾆﾆﾆキ'´ ￣  ｀`TT爪ゞ＝=＝'ﾞｰ-- ∨:|彡        *                          *
   *       |  ヾミﾐ三ミYﾉ          ﾄﾋ! {{ｿ7＿|    V---∨          *    ２.   アイテム        *
   *       |  ﾄミミY彡ｲ{---      .._ゞ二ブｨ≧|     〉---,ハ─‐{]  *                          *
   *     〃|  ヾミメﾐY彡ﾊ＿＿__ ,rｭ二＞  乂ﾉ    ﾊﾆﾆ7|      {＿    *                          *
   *  _r'彡|  ﾄミﾐメﾐY彡ｲ   {]┘└{]    ／     /--- 八      r‐{]   *                          *
   *人ﾉ彡メ|    {ミ=ﾐx彡ｲ人ﾊ{]-､_rく_／       /- ─/／｀ ￣{]      *                          *
   *∨⌒´ 八    `ｰ=ミY彡'ハ     〉          /─ =/                *                          *
   *    .:/  ヽ     `=ミﾍ 彡ゞ=彡'         ノ─-ｧ'                 *                          *
   *-‐ァ′    ＼    ¬==＝´'        . ＜ ＼／                   *                          *
   *'´           ヽ、         ＿r┬'´ヽ. ＞''                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
	
	else if(ki==10){                             //ボス
			kel=6;
			enl=25;
			enh=180;
			enpow=15;
			ex=750;
			ki++;
			enmoney=100;
	}return 0;
}





int fflag_b3()                                                                                            //遺跡に入る
{
	w=10;
		
		printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １．  こうげき        *
   *                          ／￣￣＼                            *                          *
   *                      _  /<●><●>ヽ                          *                          *
   *                    彡｜f          |  /ミ                     *                          *
   *                    `//_|  ヽ二フ  |_//                       *                          *
   *                      ￣ヽ         |￣                        *    ２.   アイテム        *
   *                         ヽ        |                          *                          *
   *                           ＼       ヽ_／/                    *                          *
   *                             ＼＿＿＿_／                      *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                  ,.-‐'''''-､                                *      左の数字で選択      *
   *                ,,i´         ﾞi            .,-'''^''':．     *                          *
   *                ,'           :|          ,/           ':．    *                          *
   *              lﾞ   .,.-､    . |         .,!   .,-､       ）   *                          *
   *              lﾞ   .|   |     lﾞ       .lﾞ   .,'  .|    /     *    １．  こうげき        *
   *             :|   .lﾞ   |    |        .lﾞ   lﾞ    /   /       *                          *
   *             |    |    |   i          /   ､′  /   /          *                          *
   *             lﾞ  .!､,,,,lﾞ  i､_____,,|  │   /   /             *                          *
   *           ,:′                     ﾞl._.._ｒ   ,iﾞ           *                          *
   *        ／                                  .(、              *    ２.   アイテム        *
   *      /                                      ヽ               *                          *
   *      l                                        l              *                          *
   *     .|        ●                               |             *                          *
   *      ｌ    , , ,                      ●      l              *                          *
   *      ` 、            (_人__丿        、、、 /                *    ３．                  *
   *          `ー 、__                         ／                 *                          *
   *                /`'''ー‐‐──‐‐‐─┬''                      *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *              _,.--､                                          *    １．  こうげき        *
   *          ,. -''  _  ^''ー-､,,_                               *                          *
   *         (    (◎）           ﾞﾞ'''ー---‐‐-､                *                          *
   *          ＼ ､                               ヽ､              *                          *
   *             `ヾﾐ､、                          `､ヽ            *                          *
   *               ,,､,,)=ﾐ､                         `ｙ'         *    ２.   アイテム        *
   *              _ ＾    ヾ)  ';           _,．-;;;::=-‐'､      *                          *
   *           =-､ゝ-‐'''   ,,ト--‐,..-'',.-'''      _  ）      *                          *
   *            '~＾｀`ー-‐'゛  ...__λ.._    __,.．-'''／       *                          *
   *                           ,.==ミ,＝-'二．--‐'''             *                          *
   *                            '￣                               *    ３．                  *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                   ＿＿_                      *    １．  こうげき        *
   *                            ＿＿_／     ヽ                    *                          *
   *                          ／   ／  ／⌒ヽ|                    *                          *
   *                         / (ﾟ)/  ／ /                         *                          *
   *                        /     ﾄ､/｡⌒ヽ。                      *                          *
   *                       彳     ＼＼ﾟ｡∴｡ｏ                     *    ２.   アイテム        *
   *                     `／        ＼＼｡ﾟ｡ｏ                     *                          *
   *                     /         /⌒＼Ｕ∴)                     *                          *
   *                              ｜    ﾞＵ｜                     *                          *
   *                              ｜      ||                      *                          *
   *                                      Ｕ                      *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                     ,r､                                      *                          *
   *                     l  ヽ                                    *    １．  こうげき        *
   *                     l    ﾞ､                                  *                          *
   *                    l      ＼_                                *                          *
   *                    ヽ         ｀` ､                          *                          *
   *                      ﾞ､ _  ,...、    ヽ, __ ,                *                          *
   *                        ｌl ｌ l  ヽ ､ ﾞ､' -- '               *    ２.   アイテム        *
   *                 , - '´ `'' <､,,_ ヽi ヽ',                   *                          *
   *                i                 ｀` -' i、                  *                          *
   *              〈                          ヽ                  *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *         ＿∧_                                、              *      左の数字で選択      *
   *       ヽ/｀｀iフ       〜ＢＯＳＳ〜         iヽ、            *                          *
   *       ＜)    (＞                            || |             *                          *
   *         ヾ~／       .､           ,         /;| :|            *                          *
   *         .| |        |ヽ        / |        i'Ｙ .|            *    １．  こうげき        *
   *          | |         |, |彡三ﾐ|,|     ,.   |;|  |            *                          *
   *         /ミﾉ i＼,--､  |,|三三|,|,--／/     |;|. |            *                          *
   *         (___)  /::   /l;, ｀´,/ヽ   ヽ   .|;|.|             *                          *
   *         ＼  ヽ!ヽ, .i i;_＿__,;| ｀!.;|   || ,;|             *                          *
   *          ｀ｰ-＾-:;;<二|| Ｏ ||二>l;イ、 ∠二_ゝ              *    ２.   アイテム        *
   *                  ￣ゝ;;|`- -'|; ∠＼;;（彡| :|               *                          *
   *                   ,＞! ヽニニ／||＜_ ￣ |;|ﾉ.|               *                          *
   *               -=ニ...ii::＼ー'／ !!:..ニ=<ニノ               *                          *
   *                      ￣>┐,;!Oi;,┌ ､'￣                       *                          *
   *                    ∠ イ_‐┬‐｀ヽ、_ゝ                      *    ３．                  *
   *                     ／  ＼ヽ<￣ｰ, ､                          *                          *
   *                 ,_  ||       ＼ ~ﾞ‐<ノ｝                    *                          *
   *               ＜<=||二二二フ-,--λ｝                         *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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






int fflag_b4()                                                                                            //城に入る
{
		
		
		printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                      __,,...,,___            *                          *
   *                                _.-''ﾞﾞ         ﾞﾞ'-._        *                          *
   *                               _ｒ｀    ,,.ｯ--ｯ,_   ﾞﾞ'i、    *                          *
   *                             ,!ﾞ     ,!'         ﾞ!、  ﾞi,    *    １．  こうげき        *
   *                              ﾘ;     ﾞｯ、          |:. ﾞ'i 、 *                          *
   *                               ＼.,    ﾞ'ｭ_       ( υ  ο    *                          *
   *                                  `t,     'i、     ＼＼..ﾉ    *                          *
   *                  ＿＿＿            ﾞ1:     ﾞ|,      ￣       *                          *
   *         _,ｨー'ﾞﾞ         ￣ﾞﾞ'ー、 _,ノﾞ    .i!              *    ２.   アイテム        *
   *     _／                                      ｨﾞ              *                          *
   * ﾞt_ー'ﾞ                                      ,ﾉﾞ             *                          *
   * ,ｪ亠                                     _／                 *                          *
   * ノ    ＿ｨ、     _ｪ-               __,ｯ-=ﾞﾞ                   *                          *
   * ￣￣     ￣ﾞソ\     ＿メ---ーﾞｭ,＿   ＼                       *    ３.                   *
   *                ￣￣￣                 ￣￣                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                          _＿＿                               *                          *
   *                         <_＿＿_>                             *    １．  こうげき        *
   *                 ┌--―\―\|.・_・ |―\┬--┐                       *                          *
   *               ,|  i |   ﾄ.｀   ｜｀-|＿ !|＼                 *                          *
   *           ,-／  |.￣工    ￣Т￣  /￣7/  ,>―\- ､             *                          *
   *         / （＿／ヽ_ ＿_┬＿|＿_工工_ /＼/  .＿  |             *                          *
   *        iヽ+工/     ∨＿_ |   |  ⊥⊥_/  /￣   ￣ヽ           *    ２.   アイテム        *
   *        Vっし        /__  −二二 工エ| l⌒l⌒.l⌒l⌒l         *                          *
   *         ￣       ／＼＿＿l T＿＿／＼  ＼_|＿|__/_／          *                          *
   *               ／    T  ／ ￣      _>    ヽ｀-―\´            *                          *
   *               |￣工 エ|_           |｀ー´＼                 *                          *
   *            ／｀ー一 ´／|           ＼_二二 l                *    ３．                  *
   *            |二二二二／                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                  ,  -‐=＝=   ､ ＿＿                         *                          *
   *              ／           '´       ｀ヽ-―\―\- ､             *                          *
   *¬=ｰ .._ _,／                          /           丶         *    １．  こうげき        *
   *___     ￣         r        ＼      /                ＼       *                          *
   *  丶                 ●            ｲ                  ヽ      *                          *
   *    ＼      _,.、           {         }                   ',  *                          *
   *      ` ー='´  }         八        ／                  | |   *                          *
   *               く_ ＿__,／   ＼ __.／                    } |  *    ２.   アイテム        *
   *                         |丶    、                      /‘＼ *                          *
   *                       |   ＼_.',     〈      }       /     / *                          *
   *                        |      ',        |_ ',            {   *                          *
   *                         }      ﾊ     . | ｀ー ﾍ       ',     *                          *
   *                       /       / |     ' 〉   / ヽ            *    ３．                  *
   *                     /       / /       //    |     }     '    *                          *
   *                     くjヘ＿,ﾉ  ノ_   /ｲ-､ ＿ﾉ    ﾉ_     {    *                          *
   *                       ￣    `'ー'--‐' ⌒´     └'ﾆ=--‐'    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                     /⌒ヽ                    *                          *
   *      ゞ                    ＿     （＼  ヽ                   *                          *
   *     （＼                  ／  ＼＼ノ;ﾞ)ｼヽヽヽ               *    １．  こうげき        *
   *      ＼）     /⌒ヽ    ／        ＼＼ ;ﾂﾞﾞ;） ヽヽ           *                          *
   *              /     ）/＼        ／ ~|ｼﾞ;/   ;i ヽ            *                          *
   *            ノ   //ｼﾞ.＼   ＼ ／       |ｼﾞl:ﾉ  ;ヽヽ          *                          *
   *           ｼﾞ    / |（ヽ   ＼/       0  |;（  ﾉヽノ           *                          *
   *          /|   ヽ ヽ|ｼﾞ|l. ｜   0       |ヽ;)./ ./し          *    ２.   アイテム        *
   *          し|    ;:ヽヽ|;;  |      ￣  ／   ／ / じ           *                          *
   *            し|l;:ヽ ;:~ヽヽ |     .／      し.ﾉ              *                          *
   *            し|   |ヽ    ' ￣） ;／                           *                          *
   *               ＼ゝ ￣    `''￣）                             *                          *
   *          ゞ      し)￣￣￣￣                                 *    ３．                  *
   *         （＼                                                 *                          *
   *          ＼）                                                *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *「´~'';;ｰ::..､,,___                                          *      左の数字で選択      *
   *  ヽ.    '''''''::;;;;;:O｀'':::::..､__                     ,_*                          *
   *     ヽ.         ''''''''::;;;;;;;;;;;｀''::::..､__       |ﾄ、*                          *
   *        ヽ.＿＿＿_        '''::;;;;;;;;;;｀''::::..､__  ノﾉ l *                          *
   *          ヾ,',',',',',',',｀ヽ.        '''''::;;;;;;;;;｀:::'*    １．  こうげき        *
   *            ヾ.￣￣｀ヽ〉                    ''''::;;;;;;ヽ.;;*                          *
   *              ヽ            三三三彡        ＿＿,,,`:.,,＿_;;;*                          *
   *                ｀ヽ.                  ー―\''''´'''''''''''';*                          *
   *                 ,ノ ヽ.                - ､                 _,*                          *
   *             ,,／      .ヽ.                ヽ.       _,,. ‐  *    ２.   アイテム        *
   *         ,,／             j｀ヽ.              `ー''´         *                          *
   *       ／_, --―\―\―\''´     ｀ヽ                            ;*                          *
   *       ￣                         ｀ヽ.                       *                          *
   *                                        ｀ヽ.                 *                          *
   *                                            ｀ヽ.    .､       *    ３．                  *
   *                                                lヽ  l ヽ.    *                          *
   *                                                |  ヽ.|   ヽ. *                          *
   *                                               └--ヾｰ-､l    ; *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                                 ,､__[ヽ__          ＢＯＳＳ  *      左の数字で選択      *
   *                              ／ .,.,.,.   ＼                 *                          *
   *                             {   {:;;:;:;}  }                 *                          *
   *                          __ ゝ,,ヽ;::;:{   /                 *                          *
   *                   _ -=ﾆ   / :}:;:;:::;:;:}ﾆ{                 *    １．  こうげき        *
   *              -=ﾆ          〉  }:;:;:;:;:;}  ＼               *                          *
   *                    ￣  ヽ/ :.j:;:;:;::;:i   v ＼             *                          *
   *                         r'  r:;:;:;;;;:;:{     i!            *                          *
   *                        /   i!:;:;:;;:;:;:;ﾄ､_ 八__＼         *                          *
   *                       /     }:;:;::;:;:;/    ﾆ=‐￣          *    ２.   アイテム        *
   *                      /       ＼:;::;/      /                 *                          *
   *                    ,                     /                   *                          *
   *                   /                    /                     *                          *
   *                  /                   /                       *                          *
   *               ／                   ／                        *    ３．                  *
   *            ／                   ／                           *                          *
   *         ／                   ／                              *                          *
   *      ／                   ＜                                 *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
	
	else if(ci==10){              //ボス
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
   *                                                              *      左の数字で選択      *
   *                          〜BOSS〜                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |＼              ／|                      *    １．  こうげき        *
   *                    |＼＼        ／／|                        *                          *
   *                   :     ,>｀´￣｀´ <  ′                   *                          *
   *                     Ｖ                Ｖ                     *                          *
   *                    i{   ●      ●   }i                      *                          *
   *                    八     ､_,_,      八                      *    ２.   アイテム        *
   *                   /  个 . ＿   ＿ . 个 ',                    *                          *
   *               ＿/   il    ,'＿_   '.   li _',＿_             *                          *
   *                  ￣（__.ノ    （__.                          *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    ４.    逃げる         *
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
   *                         * %6s     *                       *      左の数字で選択      *
   *                         **************                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.  アイテム確認     *
   *      Level    %3d                     Exp     %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.  装備を変える     *
   *      HP     %5d                     Money   %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *      Power   %4d                                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.     戻る          *
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
   *NO*          アイテム     *   回復量   *   攻撃力   *  個数  *      左の数字で選択       *
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
   *                                                                        *    ０．戻る    *
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
   *NO*           武器            *   HP   * POWER *  １: 所持   *      左の数字で選択       *
   *  *                           *        *       *  ０:未所持  *                           *
   *******************************************************************************************
   * 1*    %16s       *  %4d  * %4d  *      %d      *    １．                   *
   *******************************************************************************************
   * 2*    %16s       *  %4d  * %4d  *      %d      *    ２．                   *
   *******************************************************************************************
   * 3*    %16s       *  %4d  * %4d  *      %d      *    ３．                   *
   *******************************************************************************************
   * 4*    %16s       *  %4d  * %4d  *      %d      *    ４.                    *
   *******************************************************************************************
   * 5*    %16s       *  %4d  * %4d  *      %d      *    ５．                   *
   *******************************************************************************************
   * 6*    %16s       *  %4d  * %4d  *      %d      *    ６．                   *
   *******************************************************************************************
   * 7*    %16s       *  %4d  * %4d  *      %d      *    ７．                   *
   *******************************************************************************************
   * 8*    %16s       *  %4d  * %4d  *      %d      *    ８．                   *
   *******************************************************************************************
   * 9*    %16s       *  %4d  * %4d  *      %d      *    ９.                    *
   *******************************************************************************************
   *10*    %16s       *  %4d  * %4d  *      %d      *  １０．                   *
   *******************************************************************************************
   *                                                                        *   ６６．次へ   *
   *                                                                        *    ０．戻る    *
   *******************************************************************************************
",type[0].weapon,type[0].wehp,type[0].wepow,type[0].weflag,type[1].weapon,type[1].wehp,type[1].wepow,type[1].weflag
 ,type[2].weapon,type[2].wehp,type[2].wepow,type[2].weflag,type[3].weapon,type[3].wehp,type[3].wepow,type[3].weflag
 ,type[4].weapon,type[4].wehp,type[4].wepow,type[4].weflag,type[5].weapon,type[5].wehp,type[5].wepow,type[5].weflag
 ,type[6].weapon,type[6].wehp,type[6].wepow,type[6].weflag,type[7].weapon,type[7].wehp,type[7].wepow,type[7].weflag
 ,type[8].weapon,type[8].wehp,type[8].wepow,type[8].weflag,type[9].weapon,type[9].wehp,type[9].wepow,type[9].weflag
);

scanf("%d",&i);
	
	switch(i){
	
	case 1:                                       //武器１
	if(type[0].weflag==1){
	equip();
	search();
	type[0].weflag=2;
	
	i=100;
	}
	
	else if(type[0].weflag==2){
	type[0].weflag=1;
	printf("装備を外しました。");
	reequip();
	i=100;
	}
	else 
	printf("未所持です。");
	break;

	case 2:                                       //武器2
	if(type[1].weflag==1){
	equip();
	search();
	type[1].weflag=2;
	
	}
	
	else if(type[1].weflag==2){
	type[1].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 3:                                       //武器3
	if(type[2].weflag==1){
	equip();
	search();
	type[2].weflag=2;
	
	}
	
	else if(type[2].weflag==2){
	type[2].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 4:                                       //武器4
	if(type[3].weflag==1){
	equip();
	search();
	type[3].weflag=2;
	
	}
	
	else if(type[3].weflag==2){
	type[3].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 5:                                       //武器5
	if(type[4].weflag==1){
	equip();
	search();
	type[4].weflag=2;

	}
	
	else if(type[4].weflag==2){
	type[4].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 6:                                       //武器6
	if(type[5].weflag==1){
	equip();
	search();
	type[5].weflag=2;
	
	}
	
	else if(type[5].weflag==2){
	type[5].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 7:                                       //武器7
	if(type[6].weflag==1){
	equip();
	search();
	type[6].weflag=2;
	
	}
	
	else if(type[6].weflag==2){
	type[6].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 8:                                       //武器8
	if(type[7].weflag==1){
	equip();
	search();
	type[7].weflag=2;
	
	}
	
	else if(type[7].weflag==2){
	type[7].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 9:                                       //武器9
	if(type[8].weflag==1){
	equip();
	search();
	type[8].weflag=2;
	
	}
	
	else if(type[8].weflag==2){
	type[8].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 10:                                      //武器10
	if(type[9].weflag==1){
	equip();
	search();
	type[9].weflag=2;
	
	}
	
	else if(type[9].weflag==2){
	type[9].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
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
   *NO*           武器            *   HP   * POWER *  １: 所持   *      左の数字で選択       *
   *  *                           *        *       *  ０:未所持  *                           *
   *******************************************************************************************
   *11*    %16s       *  %4d  * %4d  *      %d      *    １．                   *
   *******************************************************************************************
   *12*    %16s       *  %4d  * %4d  *      %d      *    ２．                   *
   *******************************************************************************************
   *13*    %16s       *  %4d  * %4d  *      %d      *    ３．                   *
   *******************************************************************************************
   *14*    %16s       *  %4d  * %4d  *      %d      *    ４.                    *
   *******************************************************************************************
   *15*    %16s       *  %4d  * %4d  *      %d      *    ５．                   *
   *******************************************************************************************
   *16*    %16s       *  %4d  * %4d  *      %d      *    ６．                   *
   *******************************************************************************************
   *17*    %16s       *  %4d  * %4d  *      %d      *    ７．                   *
   *******************************************************************************************
   *18*    %16s       *  %4d  * %4d  *      %d      *    ８．                   *
   *******************************************************************************************
   *19*    %16s       *  %4d  * %4d  *      %d      *    ９.                    *
   *******************************************************************************************
   *20*    %16s       *  %4d  * %4d  *      %d      *  １０．                   *
   *******************************************************************************************
   *21*    %16s       *  %4d  * %4d  *      %d      *  １１．  *   ６６．前へ   *
   **************************************************************************    ０．戻る    *
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
	
	case 11:                                       //武器11
	if(type[10].weflag==1){
	equip();
	search();
	type[10].weflag=2;
	
	}
	
	else if(type[10].weflag==2){
	type[10].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 12:                                       //武器12
	if(type[11].weflag==1){
	equip();
	search();
	type[11].weflag=2;
	
	}
	
	else if(type[11].weflag==2){
	type[11].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 13:                                       //武器13
	if(type[12].weflag==1){
	equip();
	search();
	type[12].weflag=2;
	
	}
	
	else if(type[12].weflag==2){
	type[12].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 14:                                       //武器14
	if(type[13].weflag==1){
	equip();
	search();
	type[13].weflag=2;
	
	}
	
	else if(type[13].weflag==2){
	type[13].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 15:                                       //武器15
	if(type[14].weflag==1){
	equip();
	search();
	type[14].weflag=2;
	
	}
	
	else if(type[14].weflag==2){
	type[14].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 16:                                       //武器16
	if(type[15].weflag==1){
	equip();
	search();
	type[15].weflag=2;
	
	}
	
	else if(type[15].weflag==2){
	type[15].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 17:                                       //武器17
	if(type[16].weflag==1){
	equip();
	search();
	type[16].weflag=2;
	
	}
	
	else if(type[16].weflag==2){
	type[16].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 18:                                       //武器18
	if(type[17].weflag==1){
	equip();
	search();
	type[17].weflag=2;
	
	}
	
	else if(type[17].weflag==2){
	type[17].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 19:                                       //武器19
	if(type[18].weflag==1){
	equip();
	search();
	type[18].weflag=2;
	
	}
	
	else if(type[18].weflag==2){
	type[18].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 20:                                      //武器20
	if(type[19].weflag==1){
	equip();
	search();
	type[19].weflag=2;
	
	}
	
	else if(type[19].weflag==2){
	type[19].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
	break;

	case 21:                                      //武器21
	if(type[20].weflag==1){
	equip();
	search();
	type[20].weflag=2;
	
	}
	
	else if(type[20].weflag==2){
	type[20].weflag=1;
	printf("装備を外しました。");
	reequip();
	}
	else
	printf("未所持です。");
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


int save()                                                                              //セーブ
{
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	//	セーブデータをバイナリの書き込みでオープン
	fp1=fopen("SaveData.bin", "wb");
	fp2=fopen("weaponData.bin", "wb");
	fp3=fopen("itemData.bin", "wb");
	//	キャラクター状態をファイルに記憶(キャラクター:3人)
	fwrite(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[1]), fp1);
	fwrite(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[1]), fp2);
	fwrite(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[1]), fp3);
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}



int combat()                                                                       //戦闘
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

int encombat()                                                                       //敵の攻撃
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
   *NO*          アイテム     *   回復量   *   攻撃力   *  個数  *      左の数字で選択       *
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
   *                                                                        *    ０．戻る    *
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
		printf("ありません。");
	}
	}
}


int win()                                                                                      //ＢＯＳＳを倒したとき
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [ＧＡＭＥＣＬＥＡＲ]                     *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *     獲得経験値   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *     獲得金額     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ４.     戻る          *
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
	
int lastwin()                                                                                      //ＬＡＳＴＢＯＳＳを倒したとき
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [ＧＡＭＥＣＬＥＡＲ]                     *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *     獲得経験値   %7d                                     *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *     獲得金額     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         ////////////////////////////////////////////////     *                          *
   *         //ダンジョン選択画面で１００を入力すると、、？//     *    ３.                   *
   *         ////////////////////////////////////////////////     *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ４.     戻る          *
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
	
int lose()                                                                                               //負けたとき
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                      ＧＡＭＥＯＶＥＲ                        *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *     獲得経験値   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.                   *
   *     獲得金額     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ４.     戻る          *
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


int expget()                                                                                               //経験値 & お金 獲得処理
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


int level_1()                                                                                             //レベルアップの下準備
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

int level_2()                                                                                             //レベルアップの下準備
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

int level_3()                                                                                             //レベルアップの下準備
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


int level_up()                                                                                             //レベルアップ
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

int level_print()                                                                                           //レベルアップ画面
{
	i=100;
	while(i!=3){
		printf("
   *******************************************************************************************
   *                       [ＬＥＶＥＬＵＰ]                       *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         level            %3d ==> %3d                         *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            hp           %5d ==> %5d                      *                          *
   *                                                              *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *         power           %5d ==> %5d                      *                          *
   *                                                              *                          *
   *                                                              *    ３.     戻る          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    ４.                   *
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




int drop()                                                                                              //ドロップ
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
	ritem=rand()%100;                                                                                    //アイテムドロップ
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *               %10sを獲得しました！！                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.     戻る          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.                   *
   *               %16sを獲得しました！！             *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２.     戻る          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                         .          ∧ ∧                     *   １．  買いに来た       *
   *   ／                         _   .(ﾟДﾟ,,)               ／  *                          *
   * ／＿＿＿＿＿＿＿＿＿＿＿＿＿＿_＿と__＿つ_＿＿＿＿_＿_／ ／  *                          *
   * |＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿○.∩. ∩ ○ ＿＿＿＿ .|／／  *                          *
   * |  年中無休24時間              ∩ |.＼|| ∩＿＿＿＿＿_|／／│ *                          *
   * |￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣∪.∪.  J.∪  ＳＴＯＰ |／  │ *   ２．  売りに来た       *
   * ￣|￣|￣￣￣￣￣￣￣￣￣|￣|￣￣￣￣￣￣￣￣￣￣￣|￣|     │ *                          *
   *   |  ||  ／  ／         |  |.     .|ｲﾗｯｼｬｲﾏｾ|     |  |     │ *                          *
   *   |  ||／               |  ||￣￣|￣￣|￣￣|￣￣| |  |     │ *                          *
   *   |  ||  ／ .  ∩台∩.  |  ||／  |／／|    |    | |  |     │ *                          *
   *   |  ||／ . （´∀｀  ）|  ||＿＿|／  |    |＿＿| |  |     │ *   ３．   ガチャ          *
   *   |  ||      ┌┬───┐.）  |  ||＿＿|￣￣|￣￣|＿＿| |  |     │ *                          *
   *   |  ||／.|￣￣￣￣￣￣ |  ||／／|￣￣|￣￣|＿__| |＿|    ／ *                          *
   *   |  ||  .| ┌──┐┌──┐| ||／  |    |／／| . /οο/|       ／   *                          *
   *   |  ||...|.│..│｜.│|..||   |    |／／|. |￣￣| |     ／     *                          *
   *   |  ||                .|  || ､／|／_､|. |.ｺﾞﾐ|.|   ／       *   ４．   もどる          *
   *    ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ ￣￣ l----l,ｲ            *                          *
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
   *NO*          アイテム     *   回復量   *   攻撃力   *  個数  *      左の数字で選択       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   １．   １２０円         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   ２．   １５０円         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   ３．   ５００円         *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   ４．   ６００円         *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   ５．  １２００円        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   ６．  １５００円        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      ＭＯＮＥＹ :    %7d 円                        *                *
   *                                                                        *    ０．戻る    *
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
		if(items[i].recovery>0 || items[i].itempower>0){                                    //数値を使って取ったことがあるか確認
		printf("購入しました。");
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
			printf("お金が足りません。");
		}
		else
		printf("購入できません。");
		
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
   *NO*          アイテム     *   回復量   *   攻撃力   *  個数  *      左の数字で選択       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   １．     ５０円         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   ２．     ６０円         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   ３．    １５０円        *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   ４．    １６０円        *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   ５．    ２３０円        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   ６．    ２５０円        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      ＭＯＮＥＹ :    %7d 円                        *                *
   *                                                                        *    ０．戻る    *
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
		if(items[i].Quantity>0){                                    //数値を使って取ったことがあるか確認
		printf("売却しました。");
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
		printf("ありません。");
		
		i+=1;
	}
}



int gacha()
{
	i=100;
	while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                            %7d 円                        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.     回す          *
   *                                                              *                          *
   *                ｜--------------------------｜                *                          *
   *                ｜                          ｜                *                          *
   *                ｜                          ｜                *                          *
   *                ｜            __            ｜                *    ２.   提供割合        *
   *                ｜-----------(__)-----------｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *    ３.                   *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜            ｜            ｜                *                          *
   *                ｜--------------------------｜                *    ４.     戻る          *
   *                                                              *                          *
   *                                                              *                          *
   *                      １回１０００円だよ！                    *                          *
   *                                                              *                          *
   * ガチャ画面                                                   *                          *
   *******************************************************************************************
",cha->money);
	scanf("%d",&i);
	
	if(i==1){
		if(cha->money>=1000){
		rgacha();
		cha->money-=1000;
		}
		else
		printf("お金が足りません");
	}
	else if(i==2){
		i=100;
		while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Hiportion          50％                      *    １.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion          38％                      *    ２.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion 10個   11.2％                      *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 ？？？（武器）    0.8％                      *    ４.     戻る          *
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
	printf("Hiportionを獲得しました");
		strcpy(items[2].itemname,itemi[2].itemname);
		items[2].recovery=itemi[2].recovery;
		items[2].itempower=itemi[2].itempower;
		items[2].Quantity+=1;
		ritem=2;
		item_drop_print();
	}
	else if(rga<=880){
	printf("Suportionを獲得しました");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=1;
		ritem=4;
		item_drop_print();
	
	}
	else if(rga<=991){
	printf("Suportionを5個獲得しました");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=5;
		ritem=4;
		item_drop_print();
	Sleep(500);
	}
	else if(rga>991){
	printf("大当たり！！Gramを獲得しました");
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
   *                                                              *      左の数字で選択      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    １.セーブせずに終了   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ２. セーブして終了    *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ３.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    ４.                   *
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