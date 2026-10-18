// FUN_00acf790 @ 00acf790 body=[[00acf790, 00acf839]]


void FUN_00acf790(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int in_ECX;
  uint uVar5;
  
  uVar1 = *(uint *)(in_ECX + 0x170);
  if (uVar1 != 0) {
    iVar2 = *(int *)(in_ECX + 0x1ac);
    uVar5 = 0;
    bVar4 = false;
    if (uVar1 != 0) {
      do {
        piVar3 = *(int **)(*(int *)(in_ECX + 0x16c) + uVar5 * 4);
        FUN_00ae07a0(param_1);
        if (0.0 < (float)piVar3[6]) {
          FUN_00ae01f0(in_ECX);
          if (!bVar4) {
            FUN_00ace660(*(undefined4 *)(iVar2 + 0x70));
            bVar4 = true;
          }
          (**(code **)(*piVar3 + 0x10))(iVar2 + 0x60,param_1);
          FUN_00ae0270(in_ECX,piVar3[6],piVar3 + 1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
  }
  return;
}

