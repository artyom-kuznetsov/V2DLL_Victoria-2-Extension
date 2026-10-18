// FUN_00ad0bf0 @ 00ad0bf0 body=[[00ad0bf0, 00ad0c4b] [00ad0c50, 00ad0d02]]


void FUN_00ad0bf0(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *param_2 = 0x7f7fffff;
  param_2[1] = 0x7f7fffff;
  param_2[2] = 0x7f7fffff;
  param_2[3] = 0xff7fffff;
  param_2[4] = 0xff7fffff;
  param_2[5] = 0xff7fffff;
  iVar1 = *(int *)(in_ECX + 0xc);
  if (*(ushort *)(in_ECX + 400) != 0) {
    iVar4 = param_1 * 0x20;
    param_2 = (undefined4 *)0x0;
    param_1 = (uint)*(ushort *)(in_ECX + 400);
    do {
      uVar5 = (uint)*(ushort *)((int)param_2 + *(int *)(in_ECX + 0x18c));
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar5 * 4);
      iVar3 = *(int *)(iVar2 + 0x1c);
      if (((*(int *)(iVar3 + 4 + iVar4) != 0) &&
          (iVar3 = (**(code **)(**(int **)(iVar3 + 4 + iVar4) + 0x10))(), iVar3 != 0)) &&
         ((*(byte *)(iVar2 + 0xa4) & 1) != 0)) {
        uStack_18 = 0x7f7fffff;
        uStack_14 = 0x7f7fffff;
        uStack_10 = 0x7f7fffff;
        uStack_c = 0xff7fffff;
        uStack_8 = 0xff7fffff;
        uStack_4 = 0xff7fffff;
        FUN_00addde0(&uStack_18,uVar5 * 0x40 + iVar1,param_3);
        FUN_00ad2ef0(&uStack_18);
        FUN_00ad2ef0(&uStack_c);
      }
      param_2 = (undefined4 *)((int)param_2 + 2);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

