// FUN_00ae6590 @ 00ae6590 body=[[00ae6590, 00ae65fa]]


void FUN_00ae6590(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  uint uVar5;
  
  if (param_1 == in_ECX) {
    return;
  }
  uVar5 = 0;
  in_ECX[1] = 0;
  *(short *)(in_ECX + 3) = (short)param_1[3];
  uVar2 = param_1[1];
  in_ECX[1] = uVar2;
  if ((uint)in_ECX[2] < uVar2) {
    FUN_00ae6430(uVar2 + 1);
  }
  if (in_ECX[1] == 0) {
    return;
  }
  do {
    iVar1 = uVar5 * 8;
    puVar4 = (undefined4 *)(*in_ECX + iVar1);
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = *param_1;
      *puVar4 = *(undefined4 *)(iVar3 + iVar1);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + iVar1);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < (uint)in_ECX[1]);
  return;
}

