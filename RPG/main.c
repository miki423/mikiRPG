#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
					//////////////////////////////////////////////////////////////
					//���s�̍ۂɂ́A���s���ďo���ʂ̍���������A����l��������//
					//���C�A�E�g�̃E�B���h�E�̕����P�O�O�A�������R�O�ɂ��Ă�����//
					//���������B��������Ȃ��Ɛ������\������Ȃ����Ƃ�����܂��B//
					//////////////////////////////////////////////////////////////

 typedef struct  {
	char			itemname[10];	//�A�C�e����
	unsigned int	recovery;		//�񕜗�
	unsigned int	itempower;		//�A�C�e���̍U����
	unsigned int	Quantity;		//��
} S_ITEM;

 typedef struct  {
	char			itemname[10];	//�A�C�e����
	unsigned int	recovery;		//�񕜗�
	unsigned int	itempower;		//�A�C�e���̍U����
	unsigned int	Quantity;		//��
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
	char			weapon[16];	//����̖��O
	unsigned int	wehp;		//����̗̑�
	unsigned int	wepow;		//����̃p���[
	unsigned int	weflag;		//���̕��킪���邩�ǂ���
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
	char			name[16];	//	���O
	unsigned int	hp;			//	HP
	unsigned int	le;			//	���x��
	unsigned int	pow;		//  ��
	unsigned int	exp;		//	�o���l
	unsigned int	money;		//	����
	unsigned int	neexp;      //	���̃��x���܂ł̌o���l
	unsigned int	nei;        //	���̃��x���܂ł̌o���l�̂��߂̕ϐ�
} S_STATUS;


 typedef struct  {
	char			weapon[16];	//����̖��O
	unsigned int	wehp;		//����̗̑�
	unsigned int	wepow;		//����̃p���[
	unsigned int	weflag;		//���̕��킪���邩�ǂ���
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
		//���O	HP	���x��	��	�o���l	����	�o���l�p�ϐ��Q��                                                        �������l
		{"YOU",80,1,25,0,0,70,70},	//	�E��
	};
	
	int i,q,ex,we,wp,op,com,rga,rpow,atk,wepoi,flag_a=0,flag_b,flag_c,mfla_g,flag_o,flag_s,flag_a,flag_exit,flag_las;
	
	int php,ple,pl,ph,pp,ppow;
	
	int work_hp,  work_le,  work_pow,  work_exp,  work_neexp,  work_nei,  work_money;
	
	int si,sel,ki,kel,ii,iel,ci,cel,lei;
	
	int enel,eni,enl,enh,enpow,enatk,enrpow,enmoney,gexp,gemoney;                                    //�G�̃X�e�[�^�X
	
	int hwork1,hwork2,hwork3,hwork4,hwork5,hwork6,hwork7,hwork8,hwork9,hwork10,hwork11               //����p�ϐ�
	,hwork12,hwork13,hwork14,hwork15,hwork16,hwork17,hwork18,hwork19,hwork20;
	
	int pwork1,pwork2,pwork3,pwork4,pwork5,pwork6,pwork7,pwork8,pwork9,pwork10,pwork11
	,pwork12,pwork13,pwork14,pwork15,pwork16,pwork17,pwork18,pwork19,pwork20;
	
	int fwork1,fwork2,fwork3,fwork4,fwork5,fwork6,fwork7,fwork8,fwork9,fwork10,fwork11
	,fwork12,fwork13,fwork14,fwork15,fwork16,fwork17,fwork18,fwork19,fwork20;
	
	int r1,r2,r3,r4,r5,r6,p1,p2,p3,p4,p5,p6,q1,q2,q3,q4,q5,q6;                                       //�A�C�e���p�ϐ�
	
	int dr,w,ritem;                                                                                  //�h���b�v
int main(void)
{
	
	
	srand((unsigned int)time(NULL)); // ���ݎ����̏��ŏ�����
	if(flag_a==0)
	
	printf("%s",type[19].weapon);
	
	printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.�X�^�|�g           *
   *                           �^�C�g��                           *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.���|�h             *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *          1.�X�^�|�g                      �Q.���|�h           *                          *
   *                                                              *    �R.�I��               *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                           �R.�I��                            *                          *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ���E�̂�����Ƃ���ɂ܂��̂��������ꂽ            *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ���E�̂�����Ƃ���ɂ܂��̂��������ꂽ            *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      �����̂��Ȃ��I�I                        *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ���E�̂�����Ƃ���ɂ܂��̂��������ꂽ            *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      �����̂��Ȃ��I�I                        *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             �܂��̂������������ė��Ă��������I�I             *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            ���E�̂�����Ƃ���ɂ܂��̂��������ꂽ            *    �P.     ����          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                      �����̂��Ȃ��I�I                        *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *             �܂��̂������������ė��Ă��������I�I             *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
	else if (q==2){              //�Ǎ���
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	S_STATUS  cha[1] = { 0 };
	S_SWORD   type[20] ={ 0 };
	S_ITEM  items[5]={ 0 };
	
	//	�Z�[�u�f�[�^���o�C�i���̓ǂݍ��݂ŃI�[�v��
	fp1=fopen("SaveData.bin", "rb");
	fp2=fopen("weaponData.bin", "rb");
	fp3=fopen("itemData.bin", "rb");
	//	�L�����N�^�[�̃X�e�[�^�X���t�@�C�����畜��(�L�����N�^�[:3�l)
	fread(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[0]), fp1);   
	fread(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[0]), fp2);
	fread(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[0]), fp3);
	//�\���̕ϐ��ɕ��������f�[�^����ʂɕ\��
	
	{
		printf("%s, HP:%d, LEVEL:%d, ��:%d,�o���l:%d\n����:%d\n�o���l�p�ϐ�:%d\n",
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                       �_���W����             *                          *
   *                                             �`�`�`�`         *                          *
   *                                        (�܁�)�`�`�`          *    �P.  �_���W����       *
   *                                        ii!i!i                *                          *
   *                                        �~~~~�_               * �G��|�������Ȃ�܂��傤 *
   *                                      �^_^ _ ~_�_             *                          *
   *                                ,,,,�^,,,,,,,,,,,�_,,,,,      *                          *
   *        �V���b�v               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,   *    �Q.   �V���b�v        *
   *        �Q�Q�Q�Q                                              *                          *
   *      �^   �r   �_                                            * �A�C�e���═�킪�����܂� *
   *      ����������������������                                             *                          *
   *      ����������  �� ��                                             *                          *
   *      �����B��     ��                                             *    �R.   �X�e�|�^�X      *
   *      ����������������������                                             *                          *
   *                                                              *  ������ς�����o���܂�  *
   *                                                              *                          *
   *                                  �X�e�|�^�X      �Z�|�u      *                          *
   *                                   �Q�Q�Q�Q      �Q�Q�Q�Q     *    �S.    �Z�|�u         *
   *                                  �b      �b    �b      �b    *                          *
   *                                  �b  ��> �b    �b  �e  �b    * ���܂߂ɃZ�|�u���܂��傤 *
   *                                  �b <�b  �b    �b      �b    *                          *
   *                                  �b  �l  �b    �b      �b    *                          *
   *                                   �P�P�P�P      �P�P�P�P     *                 5.��߂� *
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
	printf("������x���͂��Ă��������B");
	break;
	}
	}

}return 0;


}

int Dungeon()                                                                                                  //�_���W�����ɓ���
{
		printf("
		
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                        �_���W�����I��                        *    �P.     ����          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *        ����(��Փx��)                 �r��(��Փx����)       *    �Q.     �r��          *
   *      �� ,�S'�S    <�S   ��           �ځL....�P�_            *                          *
   *   ��   �:..  �c  �:..�c            /�L.:..�_ :��: :.�P�R     *                          *
   *       �S :.. �  �S::. �           �^�r.:�;.. , �P��'�_�      *                          *
   *      ���S,. ��'  �S,���'   ��      �m.:.:./.::�:�^�L�P�M�_   *                          *
   *   ��    |li  ��   li!  ��         �פ�Q_,,�^�P�M�S/.�R�ځ_   *    �R.     ���          *
   *         il|    �� |il   ��         ���----�]'�[-��'�L�[-=��    *                          *
   *                                                              *                          *
   *       ���(��Փx������)             ��(��Փx��������) _    *                          *
   *        (:��   �i::�j                 + �|_�|_�|_�|  +_ �b�_  *                          *
   *   /�O  �U�O�O�O(:( _                  |����������|  |���b�^       *    �S.      ��           *
   *   | ||:| | |:| ):)�_:�_           *   |��|�P�P|���b |  �b+     *                          *
   *   |:||:| | |:| (:(  �_:�_          +  |��|�Q�Q| ��|�|�u�P|     *                          *
   * �^/�O�l|:| |:|:.||||. �_7�_           |��|��������|�����]|          *                          *
   * .�k��k�O| |:|:|:||:|::/�_;�_     +   |��|��������|�����]|          *                          *
   *                                      ;|��|��������|�����]|          *                  5.��߂�*
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
	
	fflag_b5();                    //5�̔������E
	default:
	printf("������x���͂��Ă��������B");
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
	
	if(flag_b==1){              //1�̑���
	fflag_b1();
	}
	if(flag_b==2){              //2�̍r��
	fflag_b2();
	}
	if(flag_b==3){              //3�̈��
	fflag_b3();
	}
	if(flag_b==4)               //4�̏�
	fflag_b4();
	
	for(wepoi=0; wepoi<21 && type[wepoi].weflag!=2; wepoi++){
	}
	if(type[wepoi].weflag==2){
	cha->hp+=type[wepoi].wehp;
	cha->pow+=type[wepoi].wepow;
	}
}
int fflag_b1()                                                                                            //�����֓���
{
	w=1;
		
		printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                              /�܁R                           *                          *
   *                              i   l                           *    �P.   ��������        *
   *                            �m     �R�                        *                          *
   *                        , �L         �M �A                    *                          *
   *                     �^                  �R.                  *                          *
   *                   /        , - �   , - �   ',                *                          *
   *                   i        | ��      �� |   i                *    �Q.   �A�C�e��        *
   *                   |    �q�_ ��]'   ��]'�^�r |                *                          *
   *                    �_    �_�M��]-�|��'�L�^�^                 *                          *
   *                      �R�    �P�P�P�P�P  �^                   *                          *
   *                         �M�P�P�P�P�P�P�L                     *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P�D  ��������        *
   *                                                              *                          *
   *                         �^�܁_                               *                          *
   *                        / �Q�Q_)                              *                          *
   *                       ( (�L��`)�^  |)                        *                          *
   *                        ) _]�������O��                      *    �Q.   �A�C�e��        *
   *                       /   �[ _>�_  |)                        *                          *
   *                      (_���[��_)  �_(                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P�D  ��������        *
   *                                                              *                          *
   *                                                              *                          *
   *                         l��l l��l                            *                          *
   *                         |  |_|  |                            *                          *
   *                        / �E ߁E �R                           *    �Q.   �A�C�e��        *
   *                        �� �P�P  ���_                         *                          *
   *                         | ,�� � |                            *                          *
   *                          �P  �P                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                 �Q_                          *                          *
   *                         _.-�=rf'�L  �P �] .   _              *                          *
   *                       ,��:�i���zĤ�Q: :_:_:::. (�~�:�       *    �P�D  ��������        *
   *                     /���''�܁R�;� : : :. �P�M�]-`'��R       *                          *
   *                    ���c��_     �� �L�P�P�P�P�P�M`            *                          *
   *                ,.�B''�L�����Ѓ~;��i                          *                          *
   *             �^,.:',.:',:'��Ѓ~�~�~}}�Ёp                     *                          *
   *           �^,.:',.:'���D�;�c'�V��}��                         *    �Q.   �A�C�e��        *
   *        �^,.:',.:',.���������^�c����                          *                          *
   *      / ,.:',.:',.:'������c�C�c;�b'��                         *                          *
   *     ,�;_;.:',.:',.:'���c�C'~;;�c'��                          *                          *
   *�Q / ,'��;_;�m��E�c��;;;.�����],-��Q�Q�Q_�Q_�Q                  *                          *
   *- ,�_,�_,�m�,��e��=�`м'ށL�P7:/~��O  ��V�O�R               *    �R.                   *
   *:;'��f�ʎO.{:{ �O�O��O��q�q ���O�QʁA,�                   *                          *
   *  /.:/��ؙ�    `^                `'             �P            *                          *
   *,:'.:/����                                                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P�D  ��������        *
   *                           �Q�Q�Q�Q_                          *                          *
   *                          ��_�ځ�_�^ �_                       *                          *
   *                          �u�u�u�u�u.�_  |                    *                          *
   *                            �c �� �~  �_|                     *                          *
   *                       /�R(�L�E�ցE�M)Ɂ^|                    *    �Q.   �A�C�e��        *
   *                       |������|�^|                        *                          *
   *                       |������|�^                         *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                          �`BOSS�`                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |�_              �^|                      *    �P�D  ��������        *
   *                    |�_�_        �^�^|                        *                          *
   *                   :     ,>�M�L�P�M�L <  ��                   *                          *
   *                     �u                �u                     *                          *
   *                    i{   ��      ��   }i                      *                          *
   *                    ��     �_,_,      ��                      *    �Q.   �A�C�e��        *
   *                   /  �� . �Q   �Q . �� ',                    *                          *
   *              �Q/    il    ,'�Q_   '.   li _ ',�Q_            *                          *
   *                  �P�i__.�m    �i__.                          *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
		case 1:             //�X���C��
			enl=1;
			enh=10;
			enpow=2;
			ex=10;
			enmoney=20;
		break;
		
		case 2:             //��l
			enl=3;
			enh=12;
			enpow=3;
			ex=15;
			enmoney=25;
		break;
		
		case 3:             //�J�[�o���N��
			enl=5;
			enh=15;
			enpow=5;
			ex=20;
			enmoney=30;
		break;
		
		case 4:             //��
			enl=6;
			enh=25;
			enpow=4;
			ex=25;
			enmoney=30;
		break;
		
		case 5:              //�~�~�b�N
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
	
	else if(si==10){              ////������Ղ�
			sel=6;
			enl=10;
			enh=60;
			enpow=7;
			ex=200;
			enmoney=50;
			si++;
	}return 0;
}




int fflag_b2()                                                                                            //�r��ɓ���
{
	w=4;
		
		printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P�D  ��������        *
   *        __��_            �i�R�/.�j        ._��__              *                          *
   *     �^�^/|~''�]�]--..,,_�i ��� �j_,,.--�]�]''~|�R�_�_       *                          *
   *   �^�^ ./   |          |�'''' ''''�|          |  �R �_�_     *                          *
   *  /�^   /     |          l,     ,,l.          |     �R  �_�_  *                          *
   * /'�Q_ /�Q�Q |  �Q�Q     /�M �L.�R   �Q__  | �Q�R�Q�R|        *    �Q.   �A�C�e��        *
   *'�L    �M'�L     �M'.�L      �M�R|, -�]-�|�^    �M'�L  �M'.   *                          *
   *                        �       �R                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *//////////////////////////////////////////////////////////////*      ���̐����őI��      *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////�^�P�_�^�P�_////////////////////////*    �P�D  ��������        *
   *//////////////////////// �b    �b    �b///////////////////////*                          *
   *//////////////////////�^�P�^�P�P~�_�^�P�_/////////////////////*                          *
   */////////////////////�b  /��      �b    �b////////////////////*                          *
   *//////////////////////�_�b (�l_) ���_  �^/////////////////////*                          *
   *//////////////////////�^�b  L�m    �^�P�_/////////////////////*    �Q.   �A�C�e��        *
   */////////////////////�b  �_       �b    �b////////////////////*                          *
   *//////////////////////�__�^�P�_�^�P�_�Q�^/////////////////////*                          *
   *////////////////////////�b    �b    �b////////////////////////*                          *
   */////////////////////////�_�Q�^�_�Q�^/////////////////////////*                          *
   *////////////////////////////     �b///////////////////////////*    �R.                   *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   *//////////////////////////////////////////////////////////////*                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                          , --�[-- �                          *    �P�D  ��������        *
   *                       /�M�R_o .o_/�L�R.                      *                          *
   *                      l    /�M��L�R.  .l                      *                          *
   *                     |.    l�O�O�Ol  .|                       *                          *
   *                     .|   l�O�O�Ol   |                        *                          *
   *                       | .l�O�O�Ol .|                         *    �Q.   �A�C�e��        *
   *                       .| l�O�O�Ol |                          *                          *
   *                        ��.l�O�O�Ol.|                         *                          *
   *                         ��.l�O�O�Ol.|                        *                          *
   *                          ��.l�O�O�Ol.|                       *                          *
   *                           ��. l�O�Ol. |                      *    �R.                   *
   *                             ��.l�O�Ol. |                     *                          *
   *                            ��.l�O�Ol. |                      *                          *
   *                           ��.l�O�Ol. |                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *             ,- �  ,-�                             ,. �       *      ���̐����őI��      *
   *             V  �_   �R                       �^�m }          *                          *
   *              V   �� . ��                  �^ '_... /-. �     *                          *
   *               V / ��  ��.             �^-�]'' �^�^ /         *                          *
   *                V�R. ��   i.          �^  _.. �^ '�L..�^      *    �P�D  ��������        *
   *                 �R.�R ��  j.       �^ �P..�^ '�L..�^         *                          *
   *                   ��R.�� .i    �^  ,.  '�L .��' �L           *                          *
   *           ,�      |�_�R�.-�]��,.. '��'�L                     *                          *
   *           i i�_Y�] ���]�R  ʁ^i�^i�܁_                       *                          *
   *          i i  �T�U�  �U::_�c.'/i i��i i'�Li.�g,j  j�_        *    �Q.   �A�C�e��        *
   *          i i.      i iY:::/�T��.i K_i i_..i.i. �\\�  �_       *                          *
   *        i i.      i i.{:::;��     i i.i.i.i �g.i.i�^.._..��_�m*                          *
   *        i i       i i i ;'        i i i.��.i ��. i.i�P        *                          *
   *       i i       �� �� i;��      .i i i.i i i  i.i            *                          *
   *       i i.       //. i!        i i i.i. i i  i.i             *    �R.                   *
   *      //     '�L   !.          i i �S��S� !.!                 *                          *
   *,. -  = '�L                      �S:         ށS�             *                          *
   *                                     �R                       *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    /�L!      r �A                            *    �P�D  ��������        *
   *                 �or'�O�M7�t�[':}                             *                          *
   *                   0::::�O:; :��                              *                          *
   *                 �S;i'�܁R:-'j'                               *                          *
   *                   �M�R,j j�L{                                *                          *
   *                     /  //;;;;`�L_�R, -�A                     *    �Q.   �A�C�e��        *
   *                   �Cj��{ {;;;;�O;;;o;;;���A                  *                          *
   *                  V     �R�[--�]��=�[��A�_                   *                          *
   *                 �m �M �A    �M�P�L   r �A_�R,                *                          *
   *                '�[ '�L �M�[ �A_ ��'^�[�ꁌ  �P               *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                   =���~             �a�n�r�r *      ���̐����őI��      *
   *              {{                //        =�~                 *                          *
   *��~ �         }}              �o�o    �Q//    �^/  �Q_        *                          *
   *{�O�~���~�=� �V                 } }��;�=�_ �^  /�//��`        *                          *
   *    ���~�~���r�L'              {Ђx{�c//�c/�уC�//�X          *    �P�D  ��������        *
   *    {�~Ѓ��//�l�Q             ʜc|:��'/�[��(��7//��c�         *                          *
   *�P~�M�R{�~�S�{.{�c'          {�~,o'  ro�t    f��,//�Rڜc؜e   *                          *
   *       Y{�~�S}.}�O�c_______�Q ��      �l    �P//�_ �_�c�      *                          *
   *       | ă~ЁU��ƃL'�L �P  �M`TT�܁U��=��'ް-- ��:|�c        *                          *
   *       |  �S�~ЎO�~Y�          ��! {{�7�Q|    V---��          *    �Q.   �A�C�e��        *
   *       |  ă~�~Y�c�{---      .._�U��u���|     �r---,�n���]{]  *                          *
   *     �V|  �S�~���Y�cʁQ�Q__ ,r���  ���    ���7|      {�Q    *                          *
   *  _r'�c|  ă~Ѓ��Y�c�   {]����{]    �^     /--- ��      r�]{]   *                          *
   *�lɜc��|    {�~=�x�c��l�{]-�_r��_�^       /- ��/�^�M �P{]      *                          *
   *�Ɂ܁L ��    `�=�~Y�c'�n     �r          /�� =/                *                          *
   *    .:/  �R     `=�~� �c�U=�c'         �m��-�'                 *                          *
   *-�]�@��    �_    ��==���L'        . �� �_�^                   *                          *
   *'�L           �R�A         �Qr��'�L�R. ��''                    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
	
	else if(ki==10){                             //�{�X
			kel=6;
			enl=25;
			enh=180;
			enpow=15;
			ex=750;
			ki++;
			enmoney=100;
	}return 0;
}





int fflag_b3()                                                                                            //��Ղɓ���
{
	w=10;
		
		printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P�D  ��������        *
   *                          �^�P�P�_                            *                          *
   *                      _  /<��><��>�R                          *                          *
   *                    �c�bf          |  /�~                     *                          *
   *                    `//_|  �R��t  |_//                       *                          *
   *                      �P�R         |�P                        *    �Q.   �A�C�e��        *
   *                         �R        |                          *                          *
   *                           �_       �R_�^/                    *                          *
   *                             �_�Q�Q�Q_�^                      *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                  ,.-�]'''''-�                                *      ���̐����őI��      *
   *                ,,i�L         �i            .,-'''^''':�D     *                          *
   *                ,'           :|          ,/           ':�D    *                          *
   *              l�   .,.-�    . |         .,!   .,-�       �j   *                          *
   *              l�   .|   |     l�       .l�   .,'  .|    /     *    �P�D  ��������        *
   *             :|   .l�   |    |        .l�   l�    /   /       *                          *
   *             |    |    |   i          /   ���  /   /          *                          *
   *             l�  .!�,,,,l�  i�_____,,|  ��   /   /             *                          *
   *           ,:��                     �l._.._��   ,i�           *                          *
   *        �^                                  .(�A              *    �Q.   �A�C�e��        *
   *      /                                      �R               *                          *
   *      l                                        l              *                          *
   *     .|        ��                               |             *                          *
   *      ��    , , ,                      ��      l              *                          *
   *      ` �A            (_�l__��        �A�A�A /                *    �R�D                  *
   *          `�[ �A__                         �^                 *                          *
   *                /`'''�[�]�]�����]�]�]����''                      *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *              _,.--�                                          *    �P�D  ��������        *
   *          ,. -''  _  ^''�[-�,,_                               *                          *
   *         (    (���j           ��'''�[---�]�]-�                *                          *
   *          �_ �                               �R�              *                          *
   *             `�SФ�A                          `��R            *                          *
   *               ,,�,,)=Ф                         `��'         *    �Q.   �A�C�e��        *
   *              _ �O    �S)  ';           _,�D-;;;::=-�]'�      *                          *
   *           =-��T-�]'''   ,,�g--�],..-'',.-'''      _  �j      *                          *
   *            '~�O�M`�[-�]'�J  ...__��.._    __,.�D-'''�^       *                          *
   *                           ,.==�~,��-'��D--�]'''             *                          *
   *                            '�P                               *    �R�D                  *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                   �Q�Q_                      *    �P�D  ��������        *
   *                            �Q�Q_�^     �R                    *                          *
   *                          �^   �^  �^�܁R|                    *                          *
   *                         / (�)/  �^ /                         *                          *
   *                        /     Ĥ/��܁R�B                      *                          *
   *                       �e     �_�_ߡ�����                     *    �Q.   �A�C�e��        *
   *                     `�^        �_�_�ߡ��                     *                          *
   *                     /         /�܁_�t��)                     *                          *
   *                              �b    ނt�b                     *                          *
   *                              �b      ||                      *                          *
   *                                      �t                      *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                     ,r�                                      *                          *
   *                     l  �R                                    *    �P�D  ��������        *
   *                     l    ޤ                                  *                          *
   *                    l      �__                                *                          *
   *                    �R         �M` �                          *                          *
   *                      ޤ _  ,...�A    �R, __ ,                *                          *
   *                        ��l �� l  �R � ޤ' -- '               *    �Q.   �A�C�e��        *
   *                 , - '�L `'' <�,,_ �Ri �R',                   *                          *
   *                i                 �M` -' i�A                  *                          *
   *              �q                          �R                  *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *         �Q��_                                �A              *      ���̐����őI��      *
   *       �R/�M�Mi�t       �`�a�n�r�r�`         i�R�A            *                          *
   *       ��)    (��                            || |             *                          *
   *         �S~�^       .�           ,         /;| :|            *                          *
   *         .| |        |�R        / |        i'�x .|            *    �P�D  ��������        *
   *          | |         |, |�c�O�|,|     ,.   |;|  |            *                          *
   *         /�~� i�_,--�  |,|�O�O|,|,--�^/     |;|. |            *                          *
   *         (___)  /::   /l;, �M�L,/�R   �R   .|;|.|             *                          *
   *         �_  �R!�R, .i i;_�Q__,;| �M!.;|   || ,;|             *                          *
   *          �M�-�O-:;;<��|| �n ||��>l;�C�A �ړ�_�T              *    �Q.   �A�C�e��        *
   *                  �P�T;;|`- -'|; �ځ_;;�i�c| :|               *                          *
   *                   ,��! �R�j�j�^||��_ �P |;|�.|               *                          *
   *               -=�j...ii::�_�['�^ !!:..�j=<�j�m               *                          *
   *                      �P>��,;!Oi;,�� �'�P                       *                          *
   *                    �� �C_�]���]�M�R�A_�T                      *    �R�D                  *
   *                     �^  �_�R<�P�, �                          *                          *
   *                 ,_  ||       �_ ~ށ]<�m�p                    *                          *
   *               ��<=||����t-,--�Ɂp                         *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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






int fflag_b4()                                                                                            //��ɓ���
{
		
		
		printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level      %3d                *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                      __,,...,,___            *                          *
   *                                _.-''��         ��'-._        *                          *
   *                               _���M    ,,.�--�,_   ��'i�A    *                          *
   *                             ,!�     ,!'         �!�A  �i,    *    �P�D  ��������        *
   *                              �;     ޯ�A          |:. �'i �A *                          *
   *                               �_.,    �'�_       ( ��  ��    *                          *
   *                                  `t,     'i�A     �_�_..�    *                          *
   *                  �Q�Q�Q            �1:     �|,      �P       *                          *
   *         _,��['��         �P��'�[�A _,�m�    .i!              *    �Q.   �A�C�e��        *
   *     _�^                                      ��              *                          *
   * �t_�['�                                      ,��             *                          *
   * ,���                                     _�^                 *                          *
   * �m    �Q��A     _�-               __,�-=��                   *                          *
   * �P�P     �Pރ\\     �Q��---�[ޭ,�Q   �_                       *    �R.                   *
   *                �P�P�P                 �P�P                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                          _�Q�Q                               *                          *
   *                         <_�Q�Q_>                             *    �P�D  ��������        *
   *                 ��--�\\�\\|.�E_�E |�\\��--��                       *                          *
   *               ,|  i |   �.�M   �b�M-|�Q !|�_                 *                          *
   *           ,-�^  |.�P�H    �P�S�P  /�P7/  ,>�\\- �             *                          *
   *         / �i�Q�^�R_ �Q_���Q|�Q_�H�H_ /�_/  .�Q  |             *                          *
   *        i�R+�H/     �ɁQ_ |   |  �ہ�_/  /�P   �P�R           *    �Q.   �A�C�e��        *
   *        V����        /__  �|��� �H�G| l��l��.l��l��l         *                          *
   *         �P       �^�_�Q�Ql T�Q�Q�^�_  �__|�Q|__/_�^          *                          *
   *               �^    T  �^ �P      _>    �R�M-�\\�L            *                          *
   *               |�P�H �G|_           |�M�[�L�_                 *                          *
   *            �^�M�[�� �L�^|           �__��� l                *    �R�D                  *
   *            |�����^                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                  ,  -�]=��=   � �Q�Q                         *                          *
   *              �^           '�L       �M�R-�\\�\\- �             *                          *
   *��=� .._ _,�^                          /           ��         *    �P�D  ��������        *
   *___     �P         r        �_      /                �_       *                          *
   *  ��                 ��            �                  �R      *                          *
   *    �_      _,.�A           {         }                   ',  *                          *
   *      ` �[='�L  }         ��        �^                  | |   *                          *
   *               ��_ �Q__,�^   �_ __.�^                    } |  *    �Q.   �A�C�e��        *
   *                         |��    �A                      /�e�_ *                          *
   *                       |   �__.',     �q      }       /     / *                          *
   *                        |      ',        |_ ',            {   *                          *
   *                         }      �     . | �M�[ �       ',     *                          *
   *                       /       / |     ' �r   / �R            *    �R�D                  *
   *                     /       / /       //    |     }     '    *                          *
   *                     ��j�w�Q,�  �m_   /�-� �Q�    �_     {    *                          *
   *                       �P    `'�['--�]' �܁L     ��'�=--�]'    *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                     /�܁R                    *                          *
   *      �U                    �Q     �i�_  �R                   *                          *
   *     �i�_                  �^  �_�_�m;�)��R�R�R               *    �P�D  ��������        *
   *      �_�j     /�܁R    �^        �_�_ ;���;�j �R�R           *                          *
   *              /     �j/�_        �^ ~|��;/   ;i �R            *                          *
   *            �m   //��.�_   �_ �^       |��l:�  ;�R�R          *                          *
   *           ��    / |�i�R   �_/       0  |;�i  ɁR�m           *                          *
   *          /|   �R �R|��|l. �b   0       |�R;)./ ./��          *    �Q.   �A�C�e��        *
   *          ��|    ;:�R�R|;;  |      �P  �^   �^ / ��           *                          *
   *            ��|l;:�R ;:~�R�R |     .�^      ��.�              *                          *
   *            ��|   |�R    ' �P�j ;�^                           *                          *
   *               �_�T �P    `''�P�j                             *                          *
   *          �U      ��)�P�P�P�P                                 *    �R�D                  *
   *         �i�_                                                 *                          *
   *          �_�j                                                *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *�u�L~'';;�::..�,,___                                          *      ���̐����őI��      *
   *  �R.    '''''''::;;;;;:O�M'':::::..�__                     ,_*                          *
   *     �R.         ''''''''::;;;;;;;;;;;�M''::::..�__       |āA*                          *
   *        �R.�Q�Q�Q_        '''::;;;;;;;;;;�M''::::..�__  �m� l *                          *
   *          �S,',',',',',',',�M�R.        '''''::;;;;;;;;;�M:::'*    �P�D  ��������        *
   *            �S.�P�P�M�R�r                    ''''::;;;;;;�R.;;*                          *
   *              �R            �O�O�O�c        �Q�Q,,,`:.,,�Q_;;;*                          *
   *                �M�R.                  �[�\\''''�L'''''''''''';*                          *
   *                 ,�m �R.                - �                 _,*                          *
   *             ,,�^      .�R.                �R.       _,,. �]  *    �Q.   �A�C�e��        *
   *         ,,�^             j�M�R.              `�[''�L         *                          *
   *       �^_, --�\\�\\�\\''�L     �M�R                            ;*                          *
   *       �P                         �M�R.                       *                          *
   *                                        �M�R.                 *                          *
   *                                            �M�R.    .�       *    �R�D                  *
   *                                                l�R  l �R.    *                          *
   *                                                |  �R.|   �R. *                          *
   *                                               ��--�S�-�l    ; *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                                 ,�__[�R__          �a�n�r�r  *      ���̐����őI��      *
   *                              �^ .,.,.,.   �_                 *                          *
   *                             {   {:;;:;:;}  }                 *                          *
   *                          __ �T,,�R;::;:{   /                 *                          *
   *                   _ -=�   / :}:;:;:::;:;:}�{                 *    �P�D  ��������        *
   *              -=�          �r  }:;:;:;:;:;}  �_               *                          *
   *                    �P  �R/ :.j:;:;:;::;:i   v �_             *                          *
   *                         r'  r:;:;:;;;;:;:{     i!            *                          *
   *                        /   i!:;:;:;;:;:;:;Ĥ_ ��__�_         *                          *
   *                       /     }:;:;::;:;:;/    �=�]�P          *    �Q.   �A�C�e��        *
   *                      /       �_:;::;/      /                 *                          *
   *                    ,                     /                   *                          *
   *                   /                    /                     *                          *
   *                  /                   /                       *                          *
   *               �^                   �^                        *    �R�D                  *
   *            �^                   �^                           *                          *
   *         �^                   �^                              *                          *
   *      �^                   ��                                 *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
	
	else if(ci==10){              //�{�X
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
   *                                                              *      ���̐����őI��      *
   *                          �`BOSS�`                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                    |�_              �^|                      *    �P�D  ��������        *
   *                    |�_�_        �^�^|                        *                          *
   *                   :     ,>�M�L�P�M�L <  ��                   *                          *
   *                     �u                �u                     *                          *
   *                    i{   ��      ��   }i                      *                          *
   *                    ��     �_,_,      ��                      *    �Q.   �A�C�e��        *
   *                   /  �� . �Q   �Q . �� ',                    *                          *
   *               �Q/   il    ,'�Q_   '.   li _',�Q_             *                          *
   *                  �P�i__.�m    �i__.                          *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level      %3d               * level      %3d                *    �S.    ������         *
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
   *                         * %6s     *                       *      ���̐����őI��      *
   *                         **************                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.  �A�C�e���m�F     *
   *      Level    %3d                     Exp     %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.  ������ς���     *
   *      HP     %5d                     Money   %7d        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *      Power   %4d                                            *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.     �߂�          *
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
   *NO*          �A�C�e��     *   �񕜗�   *   �U����   *  ��  *      ���̐����őI��       *
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
   *                                                                        *    �O�D�߂�    *
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
   *NO*           ����            *   HP   * POWER *  �P: ����   *      ���̐����őI��       *
   *  *                           *        *       *  �O:������  *                           *
   *******************************************************************************************
   * 1*    %16s       *  %4d  * %4d  *      %d      *    �P�D                   *
   *******************************************************************************************
   * 2*    %16s       *  %4d  * %4d  *      %d      *    �Q�D                   *
   *******************************************************************************************
   * 3*    %16s       *  %4d  * %4d  *      %d      *    �R�D                   *
   *******************************************************************************************
   * 4*    %16s       *  %4d  * %4d  *      %d      *    �S.                    *
   *******************************************************************************************
   * 5*    %16s       *  %4d  * %4d  *      %d      *    �T�D                   *
   *******************************************************************************************
   * 6*    %16s       *  %4d  * %4d  *      %d      *    �U�D                   *
   *******************************************************************************************
   * 7*    %16s       *  %4d  * %4d  *      %d      *    �V�D                   *
   *******************************************************************************************
   * 8*    %16s       *  %4d  * %4d  *      %d      *    �W�D                   *
   *******************************************************************************************
   * 9*    %16s       *  %4d  * %4d  *      %d      *    �X.                    *
   *******************************************************************************************
   *10*    %16s       *  %4d  * %4d  *      %d      *  �P�O�D                   *
   *******************************************************************************************
   *                                                                        *   �U�U�D����   *
   *                                                                        *    �O�D�߂�    *
   *******************************************************************************************
",type[0].weapon,type[0].wehp,type[0].wepow,type[0].weflag,type[1].weapon,type[1].wehp,type[1].wepow,type[1].weflag
 ,type[2].weapon,type[2].wehp,type[2].wepow,type[2].weflag,type[3].weapon,type[3].wehp,type[3].wepow,type[3].weflag
 ,type[4].weapon,type[4].wehp,type[4].wepow,type[4].weflag,type[5].weapon,type[5].wehp,type[5].wepow,type[5].weflag
 ,type[6].weapon,type[6].wehp,type[6].wepow,type[6].weflag,type[7].weapon,type[7].wehp,type[7].wepow,type[7].weflag
 ,type[8].weapon,type[8].wehp,type[8].wepow,type[8].weflag,type[9].weapon,type[9].wehp,type[9].wepow,type[9].weflag
);

scanf("%d",&i);
	
	switch(i){
	
	case 1:                                       //����P
	if(type[0].weflag==1){
	equip();
	search();
	type[0].weflag=2;
	
	i=100;
	}
	
	else if(type[0].weflag==2){
	type[0].weflag=1;
	printf("�������O���܂����B");
	reequip();
	i=100;
	}
	else 
	printf("�������ł��B");
	break;

	case 2:                                       //����2
	if(type[1].weflag==1){
	equip();
	search();
	type[1].weflag=2;
	
	}
	
	else if(type[1].weflag==2){
	type[1].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 3:                                       //����3
	if(type[2].weflag==1){
	equip();
	search();
	type[2].weflag=2;
	
	}
	
	else if(type[2].weflag==2){
	type[2].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 4:                                       //����4
	if(type[3].weflag==1){
	equip();
	search();
	type[3].weflag=2;
	
	}
	
	else if(type[3].weflag==2){
	type[3].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 5:                                       //����5
	if(type[4].weflag==1){
	equip();
	search();
	type[4].weflag=2;

	}
	
	else if(type[4].weflag==2){
	type[4].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 6:                                       //����6
	if(type[5].weflag==1){
	equip();
	search();
	type[5].weflag=2;
	
	}
	
	else if(type[5].weflag==2){
	type[5].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 7:                                       //����7
	if(type[6].weflag==1){
	equip();
	search();
	type[6].weflag=2;
	
	}
	
	else if(type[6].weflag==2){
	type[6].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 8:                                       //����8
	if(type[7].weflag==1){
	equip();
	search();
	type[7].weflag=2;
	
	}
	
	else if(type[7].weflag==2){
	type[7].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 9:                                       //����9
	if(type[8].weflag==1){
	equip();
	search();
	type[8].weflag=2;
	
	}
	
	else if(type[8].weflag==2){
	type[8].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 10:                                      //����10
	if(type[9].weflag==1){
	equip();
	search();
	type[9].weflag=2;
	
	}
	
	else if(type[9].weflag==2){
	type[9].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
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
   *NO*           ����            *   HP   * POWER *  �P: ����   *      ���̐����őI��       *
   *  *                           *        *       *  �O:������  *                           *
   *******************************************************************************************
   *11*    %16s       *  %4d  * %4d  *      %d      *    �P�D                   *
   *******************************************************************************************
   *12*    %16s       *  %4d  * %4d  *      %d      *    �Q�D                   *
   *******************************************************************************************
   *13*    %16s       *  %4d  * %4d  *      %d      *    �R�D                   *
   *******************************************************************************************
   *14*    %16s       *  %4d  * %4d  *      %d      *    �S.                    *
   *******************************************************************************************
   *15*    %16s       *  %4d  * %4d  *      %d      *    �T�D                   *
   *******************************************************************************************
   *16*    %16s       *  %4d  * %4d  *      %d      *    �U�D                   *
   *******************************************************************************************
   *17*    %16s       *  %4d  * %4d  *      %d      *    �V�D                   *
   *******************************************************************************************
   *18*    %16s       *  %4d  * %4d  *      %d      *    �W�D                   *
   *******************************************************************************************
   *19*    %16s       *  %4d  * %4d  *      %d      *    �X.                    *
   *******************************************************************************************
   *20*    %16s       *  %4d  * %4d  *      %d      *  �P�O�D                   *
   *******************************************************************************************
   *21*    %16s       *  %4d  * %4d  *      %d      *  �P�P�D  *   �U�U�D�O��   *
   **************************************************************************    �O�D�߂�    *
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
	
	case 11:                                       //����11
	if(type[10].weflag==1){
	equip();
	search();
	type[10].weflag=2;
	
	}
	
	else if(type[10].weflag==2){
	type[10].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 12:                                       //����12
	if(type[11].weflag==1){
	equip();
	search();
	type[11].weflag=2;
	
	}
	
	else if(type[11].weflag==2){
	type[11].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 13:                                       //����13
	if(type[12].weflag==1){
	equip();
	search();
	type[12].weflag=2;
	
	}
	
	else if(type[12].weflag==2){
	type[12].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 14:                                       //����14
	if(type[13].weflag==1){
	equip();
	search();
	type[13].weflag=2;
	
	}
	
	else if(type[13].weflag==2){
	type[13].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 15:                                       //����15
	if(type[14].weflag==1){
	equip();
	search();
	type[14].weflag=2;
	
	}
	
	else if(type[14].weflag==2){
	type[14].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 16:                                       //����16
	if(type[15].weflag==1){
	equip();
	search();
	type[15].weflag=2;
	
	}
	
	else if(type[15].weflag==2){
	type[15].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 17:                                       //����17
	if(type[16].weflag==1){
	equip();
	search();
	type[16].weflag=2;
	
	}
	
	else if(type[16].weflag==2){
	type[16].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 18:                                       //����18
	if(type[17].weflag==1){
	equip();
	search();
	type[17].weflag=2;
	
	}
	
	else if(type[17].weflag==2){
	type[17].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 19:                                       //����19
	if(type[18].weflag==1){
	equip();
	search();
	type[18].weflag=2;
	
	}
	
	else if(type[18].weflag==2){
	type[18].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 20:                                      //����20
	if(type[19].weflag==1){
	equip();
	search();
	type[19].weflag=2;
	
	}
	
	else if(type[19].weflag==2){
	type[19].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
	break;

	case 21:                                      //����21
	if(type[20].weflag==1){
	equip();
	search();
	type[20].weflag=2;
	
	}
	
	else if(type[20].weflag==2){
	type[20].weflag=1;
	printf("�������O���܂����B");
	reequip();
	}
	else
	printf("�������ł��B");
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


int save()                                                                              //�Z�[�u
{
	
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	FILE * fp3 = NULL;
	//	�Z�[�u�f�[�^���o�C�i���̏������݂ŃI�[�v��
	fp1=fopen("SaveData.bin", "wb");
	fp2=fopen("weaponData.bin", "wb");
	fp3=fopen("itemData.bin", "wb");
	//	�L�����N�^�[��Ԃ��t�@�C���ɋL��(�L�����N�^�[:3�l)
	fwrite(cha, sizeof(S_STATUS), sizeof(cha) / sizeof(cha[1]), fp1);
	fwrite(type, sizeof(S_SWORD), sizeof(type) / sizeof(type[1]), fp2);
	fwrite(items, sizeof(S_ITEM), sizeof(items) / sizeof(items[1]), fp3);
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}



int combat()                                                                       //�퓬
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

int encombat()                                                                       //�G�̍U��
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
   *NO*          �A�C�e��     *   �񕜗�   *   �U����   *  ��  *      ���̐����őI��       *
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
   *                                                                        *    �O�D�߂�    *
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
		printf("����܂���B");
	}
	}
}


int win()                                                                                      //�a�n�r�r��|�����Ƃ�
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [�f�`�l�d�b�k�d�`�q]                     *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *     �l���o���l   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *     �l�����z     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    �S.     �߂�          *
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
	
int lastwin()                                                                                      //�k�`�r�s�a�n�r�r��|�����Ƃ�
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                     [�f�`�l�d�b�k�d�`�q]                     *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *     �l���o���l   %7d                                     *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *     �l�����z     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         ////////////////////////////////////////////////     *                          *
   *         //�_���W�����I����ʂłP�O�O����͂���ƁA�A�H//     *    �R.                   *
   *         ////////////////////////////////////////////////     *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    �S.     �߂�          *
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
	
int lose()                                                                                               //�������Ƃ�
{
	i=100;
	while(i!=4){
		printf("
   *******************************************************************************************
   *                      �f�`�l�d�n�u�d�q                        *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *     �l���o���l   %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.                   *
   *     �l�����z     %5d                                       *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    �S.     �߂�          *
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


int expget()                                                                                               //�o���l & ���� �l������
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


int level_1()                                                                                             //���x���A�b�v�̉�����
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

int level_2()                                                                                             //���x���A�b�v�̉�����
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

int level_3()                                                                                             //���x���A�b�v�̉�����
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


int level_up()                                                                                             //���x���A�b�v
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

int level_print()                                                                                           //���x���A�b�v���
{
	i=100;
	while(i!=3){
		printf("
   *******************************************************************************************
   *                       [�k�d�u�d�k�t�o]                       *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *         level            %3d ==> %3d                         *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *            hp           %5d ==> %5d                      *                          *
   *                                                              *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *         power           %5d ==> %5d                      *                          *
   *                                                              *                          *
   *                                                              *    �R.     �߂�          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   ****************************************************************                          *
   * level                        * level                         *    �S.                   *
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




int drop()                                                                                              //�h���b�v
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
	ritem=rand()%100;                                                                                    //�A�C�e���h���b�v
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *               %10s���l�����܂����I�I                   *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.     �߂�          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.                   *
   *               %16s���l�����܂����I�I             *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q.     �߂�          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                         .          �� ��                     *   �P�D  �����ɗ���       *
   *   �^                         _   .(߄D�,,)               �^  *                          *
   * �^�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q_�Q��__�Q��_�Q�Q�Q�Q_�Q_�^ �^  *                          *
   * |�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q�Q��.��. �� �� �Q�Q�Q�Q .|�^�^  *                          *
   * |  �N�����x24����              �� |.�_|| ���Q�Q�Q�Q�Q_|�^�^�� *                          *
   * |�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P��.��.  J.��  �r�s�n�o |�^  �� *   �Q�D  ����ɗ���       *
   * �P|�P|�P�P�P�P�P�P�P�P�P|�P|�P�P�P�P�P�P�P�P�P�P�P|�P|     �� *                          *
   *   |  ||  �^  �^         |  |.     .|�ׯ���Ͼ|     |  |     �� *                          *
   *   |  ||�^               |  ||�P�P|�P�P|�P�P|�P�P| |  |     �� *                          *
   *   |  ||  �^ .  ���䁿.  |  ||�^  |�^�^|    |    | |  |     �� *                          *
   *   |  ||�^ . �i�L�́M  �j|  ||�Q�Q|�^  |    |�Q�Q| |  |     �� *   �R�D   �K�`��          *
   *   |  ||      ������������.�j  |  ||�Q�Q|�P�P|�P�P|�Q�Q| |  |     �� *                          *
   *   |  ||�^.|�P�P�P�P�P�P |  ||�^�^|�P�P|�P�P|�Q__| |�Q|    �^ *                          *
   *   |  ||  .| ����������������| ||�^  |    |�^�^| . /�̓�/|       �^   *                          *
   *   |  ||...|.��..���b.��|..||   |    |�^�^|. |�P�P| |     �^     *                          *
   *   |  ||                .|  || ��^|�^_�|. |.���|.|   �^       *   �S�D   ���ǂ�          *
   *    �P�P�P�P�P�P�P�P�P�P�P�P�P�P�P�P �P�P l----l,�            *                          *
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
   *NO*          �A�C�e��     *   �񕜗�   *   �U����   *  ��  *      ���̐����őI��       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   �P�D   �P�Q�O�~         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   �Q�D   �P�T�O�~         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   �R�D   �T�O�O�~         *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   �S�D   �U�O�O�~         *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   �T�D  �P�Q�O�O�~        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   �U�D  �P�T�O�O�~        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      �l�n�m�d�x :    %7d �~                        *                *
   *                                                                        *    �O�D�߂�    *
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
		if(items[i].recovery>0 || items[i].itempower>0){                                    //���l���g���Ď�������Ƃ����邩�m�F
		printf("�w�����܂����B");
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
			printf("����������܂���B");
		}
		else
		printf("�w���ł��܂���B");
		
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
   *NO*          �A�C�e��     *   �񕜗�   *   �U����   *  ��  *      ���̐����őI��       *
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   * 1*    %10s         *    %4d    *    %4d    *   %3d  *   �P�D     �T�O�~         *
   *******************************************************************************************
   * 2*    %10s         *    %4d    *    %4d    *   %3d  *   �Q�D     �U�O�~         *
   *******************************************************************************************
   * 3*    %10s         *    %4d    *    %4d    *   %3d  *   �R�D    �P�T�O�~        *
   *******************************************************************************************
   * 4*    %10s         *    %4d    *    %4d    *   %3d  *   �S�D    �P�U�O�~        *
   *******************************************************************************************
   * 5*    %10s         *    %4d    *    %4d    *   %3d  *   �T�D    �Q�R�O�~        *
   *******************************************************************************************
   * 6*    %10s         *    %4d    *    %4d    *   %3d  *   �U�D    �Q�T�O�~        *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *  *                       *            *            *        *                           *
   *******************************************************************************************
   *                      �l�n�m�d�x :    %7d �~                        *                *
   *                                                                        *    �O�D�߂�    *
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
		if(items[i].Quantity>0){                                    //���l���g���Ď�������Ƃ����邩�m�F
		printf("���p���܂����B");
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
		printf("����܂���B");
		
		i+=1;
	}
}



int gacha()
{
	i=100;
	while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                            %7d �~                        *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.     ��          *
   *                                                              *                          *
   *                �b--------------------------�b                *                          *
   *                �b                          �b                *                          *
   *                �b                          �b                *                          *
   *                �b            __            �b                *    �Q.   �񋟊���        *
   *                �b-----------(__)-----------�b                *                          *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *    �R.                   *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *                          *
   *                �b            �b            �b                *                          *
   *                �b--------------------------�b                *    �S.     �߂�          *
   *                                                              *                          *
   *                                                              *                          *
   *                      �P��P�O�O�O�~����I                    *                          *
   *                                                              *                          *
   * �K�`�����                                                   *                          *
   *******************************************************************************************
",cha->money);
	scanf("%d",&i);
	
	if(i==1){
		if(cha->money>=1000){
		rgacha();
		cha->money-=1000;
		}
		else
		printf("����������܂���");
	}
	else if(i==2){
		i=100;
		while(i!=4){
	printf("
   *******************************************************************************************
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Hiportion          50��                      *    �P.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion          38��                      *    �Q.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 Suportion 10��   11.2��                      *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                 �H�H�H�i����j    0.8��                      *    �S.     �߂�          *
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
	printf("Hiportion���l�����܂���");
		strcpy(items[2].itemname,itemi[2].itemname);
		items[2].recovery=itemi[2].recovery;
		items[2].itempower=itemi[2].itempower;
		items[2].Quantity+=1;
		ritem=2;
		item_drop_print();
	}
	else if(rga<=880){
	printf("Suportion���l�����܂���");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=1;
		ritem=4;
		item_drop_print();
	
	}
	else if(rga<=991){
	printf("Suportion��5�l�����܂���");
		strcpy(items[4].itemname,itemi[4].itemname);
		items[4].recovery=itemi[4].recovery;
		items[4].itempower=itemi[4].itempower;
		items[4].Quantity+=5;
		ritem=4;
		item_drop_print();
	Sleep(500);
	}
	else if(rga>991){
	printf("�哖����I�IGram���l�����܂���");
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
   *                                                              *      ���̐����őI��      *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �P.�Z�[�u�����ɏI��   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �Q. �Z�[�u���ďI��    *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �R.                   *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *                          *
   *                                                              *    �S.                   *
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