// FUN_009ad5b0 @ 009ad5b0 body=[[009ad5b0, 009ad684] [009ad688, 009ad6ea] [009ad6ee, 009ad7a2] [009ad7a6, 009ad7fb] [009ad7ff, 009ad828] [009ad82c, 009ad865]]


void FUN_009ad5b0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint unaff_EDI;
  uint local_150;
  uint uStack_14c;
  uint local_140;
  uint local_13c;
  undefined1 auStack_134 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_124 [16];
  uint uStack_114;
  undefined4 uStack_104;
  uint uStack_100;
  undefined **appuStack_80 [4];
  undefined **appuStack_70 [15];
  void *pvStack_34;
  undefined4 uStack_2c;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b63c7b;
  pvStack_14 = ExceptionList;
  local_13c = 0xf;
  local_140 = 0;
  local_150 = local_150 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("internationalizedtext.cpp",0x19);
  local_c = 0;
  uVar4 = FUN_004015b0(&local_150,0x4d5,3);
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar4,"Create table",0xc,0);
  FUN_00401280(uVar4);
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_14c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
  pcVar2 = (char *)*param_1;
  uStack_14c = 0xf;
  local_150 = 0;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  uStack_1c = 2;
  FUN_00a5f8c0(auStack_124,&stack0xfffffea0,param_2);
  uStack_1c._0_1_ = 4;
  if (0xf < uStack_14c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI & 0xffffff00);
  }
  uStack_14c = 0xf;
  local_150 = 0;
  uStack_12c = 0xf;
  uStack_130 = 0;
  local_140 = local_140 & 0xffffff00;
  FUN_00409350("internationalizedtext.cpp",0x19);
  uStack_1c._0_1_ = 5;
  uVar4 = FUN_004015b0(&local_140,0x4d7,3);
  uStack_1c = CONCAT31(uStack_1c._1_3_,6);
  FUN_00987d50(uVar4,"Create text database",0x14,0);
  FUN_00401280(uVar4);
  uStack_2c._0_1_ = 5;
  FUN_00987ac0(appuStack_80);
  appuStack_80[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_80);
  uStack_2c._0_1_ = 4;
  if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_150);
  }
  iVar6 = FUN_00aae9af(0x54);
  uStack_2c._0_1_ = 7;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_009ace40(iVar6,auStack_134,param_2);
  }
  iVar3 = DAT_0131c99c;
  uStack_2c = CONCAT31(uStack_2c._1_3_,8);
  if ((iVar6 != DAT_0131c99c) && (DAT_0131c99c != 0)) {
    FUN_009ad450(DAT_0131c99c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar3);
  }
  uStack_2c = 0xffffffff;
  DAT_0131c99c = iVar6;
  if (uStack_100 < 0x10) {
    uStack_100 = 0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    _eh_vector_destructor_iterator_(auStack_134,0x10,2,FUN_0040b3c0);
    ExceptionList = pvStack_34;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_114);
}

