// FUN_00849810 @ 00849810 body=[[00849810, 00849963]]


void FUN_00849810(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + unaff_ESI[1] * 4) + 0x34);
  uVar4 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + unaff_EDI[1] * 4) + 0x34),&param_2,unaff_EDI
                       ,0);
  uVar5 = FUN_00936fc0(uVar2,&param_2,unaff_ESI,0);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
      (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    uVar2 = *unaff_ESI;
    uVar3 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar2;
    unaff_EDI[1] = uVar3;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + param_1[1] * 4) + 0x34);
  uVar4 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + unaff_ESI[1] * 4) + 0x34),&param_2,unaff_ESI
                       ,0);
  uVar5 = FUN_00936fc0(uVar2,&param_2,param_1,0);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
      (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    *param_1 = *unaff_ESI;
    param_1[1] = unaff_ESI[1];
    *unaff_ESI = uVar2;
    unaff_ESI[1] = uVar3;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8);
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + unaff_ESI[1] * 4) + 0x34);
  uVar4 = FUN_00936fc0(*(undefined4 *)(*(int *)(iVar1 + unaff_EDI[1] * 4) + 0x34),&param_2,unaff_EDI
                       ,0);
  uVar5 = FUN_00936fc0(uVar2,&param_2,unaff_ESI,0);
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
      (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f))) {
    uVar2 = *unaff_ESI;
    uVar3 = unaff_ESI[1];
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    *unaff_EDI = uVar2;
    unaff_EDI[1] = uVar3;
  }
  return;
}

