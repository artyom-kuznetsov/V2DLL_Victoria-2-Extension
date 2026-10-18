// FUN_00adfc90 @ 00adfc90 body=[[00adfc90, 00adfccb]]


void FUN_00adfc90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = param_1[1];
    FUN_00adfe30(uVar1);
    uVar2 = 0;
    if (uVar1 != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)(iVar3 + *in_ECX) = *(undefined4 *)(*(int *)(*param_1 + uVar2 * 4) + 4);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar2 < uVar1);
    }
  }
  return;
}

