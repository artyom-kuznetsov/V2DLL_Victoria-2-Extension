// FUN_00b16300 @ 00b16300 body=[[00b16300, 00b16347]]


void FUN_00b16300(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = in_ECX[1];
  uVar2 = iVar4 + 1;
  in_ECX[1] = uVar2;
  if ((uint)in_ECX[2] < uVar2) {
    FUN_00aeb6c0(iVar4 + 2);
  }
  puVar1 = (undefined4 *)(*in_ECX + -4 + in_ECX[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
  }
  iVar4 = in_ECX[1];
  uVar2 = 0;
  if (iVar4 != 0) {
    piVar3 = (int *)*in_ECX;
    do {
      uVar2 = uVar2 | *(uint *)(*piVar3 + 4);
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  in_ECX[4] = uVar2;
  return;
}

