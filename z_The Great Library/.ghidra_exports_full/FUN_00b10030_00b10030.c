// FUN_00b10030 @ 00b10030 body=[[00b10030, 00b10090]]


void FUN_00b10030(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  void *_Src;
  undefined4 *puVar3;
  
  iVar2 = in_ECX[1];
  uVar1 = iVar2 + 1;
  in_ECX[1] = uVar1;
  if ((uint)in_ECX[2] < uVar1) {
    FUN_00b0d550(iVar2 + 2);
  }
  iVar2 = (in_ECX[1] - param_1) + -1;
  if (iVar2 != 0) {
    _Src = (void *)(param_1 * 0x10 + *in_ECX);
    FID_conflict__memcpy((void *)((int)_Src + 0x10),_Src,iVar2 * 0x10);
  }
  puVar3 = (undefined4 *)(param_1 * 0x10 + *in_ECX);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
  }
  return;
}

