// FUN_00acfb60 @ 00acfb60 body=[[00acfb60, 00acfc00]]


void FUN_00acfb60(undefined4 *param_1,short param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  ushort uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  uVar5 = 0;
  param_1[3] = 0xff7fffff;
  param_1[4] = 0xff7fffff;
  param_1[5] = 0xff7fffff;
  uVar1 = *(ushort *)(in_ECX + 400);
  iVar2 = *(int *)(in_ECX + 0xc);
  if (uVar1 != 0) {
    do {
      uVar3 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + (uint)uVar5 * 2);
      if ((*(byte *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar3 * 4) + 0xa4) & 1) !=
          0) {
        iVar4 = uVar3 * 0x40 + iVar2;
        local_c = *(undefined4 *)(iVar4 + 0x30);
        local_8 = *(undefined4 *)(iVar4 + 0x34);
        local_4 = *(undefined4 *)(iVar4 + 0x38);
        FUN_00ad2ef0(&local_c);
      }
      uVar5 = uVar5 + param_2;
    } while (uVar5 < uVar1);
  }
  return;
}

