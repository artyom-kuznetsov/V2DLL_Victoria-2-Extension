// FUN_00b100a0 @ 00b100a0 body=[[00b100a0, 00b1012e]]


void FUN_00b100a0(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == in_ECX) {
    return;
  }
  uVar4 = 0;
  if (in_ECX[1] != 0) {
    do {
      FUN_00b131d0();
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  in_ECX[1] = 0;
  *(short *)(in_ECX + 3) = (short)param_1[3];
  uVar4 = param_1[1];
  in_ECX[1] = uVar4;
  if ((uint)in_ECX[2] < uVar4) {
    FUN_00b0d550(uVar4 + 1);
  }
  uVar4 = 0;
  if (in_ECX[1] != 0) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*param_1 + iVar3);
      puVar2 = (undefined4 *)(*in_ECX + iVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  return;
}

