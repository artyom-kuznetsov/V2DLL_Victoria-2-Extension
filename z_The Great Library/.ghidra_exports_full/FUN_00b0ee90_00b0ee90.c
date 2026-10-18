// FUN_00b0ee90 @ 00b0ee90 body=[[00b0ee90, 00b0ef05]]


void FUN_00b0ee90(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == in_ECX) {
    return;
  }
  uVar4 = 0;
  in_ECX[1] = 0;
  *(short *)(in_ECX + 3) = (short)param_1[3];
  uVar1 = param_1[1];
  in_ECX[1] = uVar1;
  if ((uint)in_ECX[2] < uVar1) {
    FUN_00b003c0(uVar1 + 1);
  }
  if (in_ECX[1] != 0) {
    iVar5 = 0;
    do {
      iVar2 = *param_1;
      puVar3 = (undefined4 *)(*in_ECX + iVar5);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar2 + iVar5);
        FID_conflict__memcpy(puVar3 + 1,(undefined4 *)(iVar2 + iVar5) + 1,0x40);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x44;
    } while (uVar4 < (uint)in_ECX[1]);
    return;
  }
  return;
}

