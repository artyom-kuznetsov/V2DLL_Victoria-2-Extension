// FUN_00b0ffe0 @ 00b0ffe0 body=[[00b0ffe0, 00b10022]]


void FUN_00b0ffe0(undefined4 *param_1)

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
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  return;
}

