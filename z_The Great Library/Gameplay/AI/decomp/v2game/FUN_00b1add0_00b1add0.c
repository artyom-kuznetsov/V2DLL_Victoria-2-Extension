// FUN_00b1add0 @ 00b1add0 body=[[00b1add0, 00b1ae77]]


void FUN_00b1add0(int param_1,uint param_2)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_4;
  
  uVar3 = 0;
  uVar6 = 0;
  local_4 = 0xffff;
  local_4._0_2_ = 0xffff;
  if (param_2 != 0) {
    iVar2 = *in_ECX;
    do {
      uVar4 = (uint)*(byte *)(uVar6 + param_1);
      piVar1 = (int *)(iVar2 + uVar4 * 0x10);
      *piVar1 = *piVar1 + 1;
      iVar2 = *in_ECX;
      uVar5 = *(uint *)(iVar2 + uVar4 * 0x10);
      if (uVar3 < uVar5) {
        uVar3 = uVar5;
        local_4 = uVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
  }
  *(undefined2 *)((int)in_ECX + 0x22) = (undefined2)local_4;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar6 = 3;
    do {
      uVar5 = (uint)*(byte *)(uVar3 + param_1);
      if ((((uVar5 == *(ushort *)((int)in_ECX + 0x22)) && (uVar6 < param_2)) &&
          (*(byte *)(uVar3 + 1 + param_1) == uVar5)) &&
         ((*(byte *)(uVar3 + 2 + param_1) == uVar5 && (*(byte *)(uVar3 + 3 + param_1) == uVar5)))) {
        piVar1 = (int *)(*in_ECX + (uint)*(ushort *)((int)in_ECX + 0x22) * 0x10);
        *piVar1 = *piVar1 + -4;
        *(int *)(*in_ECX + 0x1000) = *(int *)(*in_ECX + 0x1000) + 1;
        uVar3 = uVar3 + 3;
        uVar6 = uVar6 + 3;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar3 < param_2);
  }
  return;
}

