// FUN_00ae6ed0 @ 00ae6ed0 body=[[00ae6ed0, 00ae6f00]]


void FUN_00ae6ed0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar2 = in_ECX[1];
  uVar3 = iVar2 + 1;
  in_ECX[1] = uVar3;
  if ((uint)in_ECX[2] < uVar3) {
    FUN_00b0d550(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*in_ECX + -0x10 + in_ECX[1] * 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}

