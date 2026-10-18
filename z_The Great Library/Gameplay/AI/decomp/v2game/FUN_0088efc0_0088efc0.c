// FUN_0088efc0 @ 0088efc0 body=[[0088efc0, 0088f039]]


void FUN_0088efc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  if (0 < *(int *)(in_ECX + 0x20)) {
    uVar1 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
    uVar2 = uVar1 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x40) = uVar2;
    piVar5 = *(int **)(in_ECX + 0x24);
    iVar4 = (int)((longlong)(ulonglong)((uVar2 >> 0x10 & 0x7fff) * (uVar1 >> 0x10 & 0x7fff)) %
                 (longlong)*(int *)(in_ECX + 0x20));
    puVar3 = *(undefined4 **)(in_ECX + 8);
    if (puVar3 != (undefined4 *)0x0) {
      while (iVar4 = iVar4 - *piVar5, 0 < iVar4) {
        puVar3 = (undefined4 *)puVar3[2];
        piVar5 = (int *)piVar5[2];
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
      }
      (**(code **)(*(int *)*puVar3 + 0x2c))(param_1,0);
    }
  }
  return;
}

