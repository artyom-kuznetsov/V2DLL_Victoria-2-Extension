// FUN_00aeb270 @ 00aeb270 body=[[00aeb270, 00aeb29c]]


void FUN_00aeb270(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar2 = in_ECX[1];
  uVar3 = iVar2 + 1;
  in_ECX[1] = uVar3;
  if ((uint)in_ECX[2] < uVar3) {
    FUN_00aeb6c0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}

