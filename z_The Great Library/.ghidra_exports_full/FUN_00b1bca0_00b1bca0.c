// FUN_00b1bca0 @ 00b1bca0 body=[[00b1bca0, 00b1bd16]]


void FUN_00b1bca0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  FUN_00b1b4f0();
  uVar1 = in_ECX[1];
  if (((param_2 != uVar1) && (in_ECX[1] = param_2, uVar1 < param_2)) && ((uint)in_ECX[2] < param_2))
  {
    FUN_00b0d550(param_2);
  }
  uVar1 = 0;
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      *(undefined4 *)(iVar3 + *in_ECX) = *(undefined4 *)(param_1 + uVar1 * 4);
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar1 < param_2);
  }
  puVar4 = (uint *)*in_ECX;
  uVar1 = 0;
  uVar5 = 0xffff;
  uVar2 = 0;
  do {
    if (uVar1 < *puVar4) {
      uVar5 = uVar2 & 0xffff;
      uVar1 = *puVar4;
    }
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 4;
  } while (uVar2 < 0x100);
  *(short *)((int)in_ECX + 0x22) = (short)uVar5;
  FUN_00b1b5e0();
  return;
}

