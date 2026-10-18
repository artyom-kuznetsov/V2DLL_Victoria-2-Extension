// FUN_00ae7d70 @ 00ae7d70 body=[[00ae7d70, 00ae7e6c]]


void FUN_00ae7d70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *in_ECX;
  
  uVar4 = in_ECX[1];
  uVar3 = 0;
  if (uVar4 != 0) {
    piVar5 = (int *)*in_ECX;
    do {
      if (*(int *)(*piVar5 + 0x3c) == *(int *)(*(int *)(param_1 + 0x18) + 0x3c)) {
        if (uVar3 != 0xffffffff) {
          piVar5 = (int *)*in_ECX + uVar3 * 5 + 1;
          iVar1 = piVar5[1];
          uVar4 = iVar1 + 1;
          piVar5[1] = uVar4;
          if ((uint)piVar5[2] < uVar4) {
            FUN_00aeb6c0(iVar1 + 2);
          }
          piVar5 = (int *)(*piVar5 + -4 + piVar5[1] * 4);
          goto LAB_00ae7e26;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 5;
    } while (uVar3 < uVar4);
  }
  in_ECX[1] = uVar4 + 1;
  if ((uint)in_ECX[2] < uVar4 + 1) {
    FUN_00ae85f0(uVar4 + 2);
  }
  iVar1 = *in_ECX + -0x14 + in_ECX[1] * 0x14;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 1;
  }
  puVar2 = (undefined4 *)(*in_ECX + -0x14 + in_ECX[1] * 0x14);
  *puVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x18) + 0x58);
  if ((uint)puVar2[3] < uVar4) {
    FUN_00aeb6c0(uVar4);
  }
  iVar1 = puVar2[2];
  uVar4 = iVar1 + 1;
  puVar2[2] = uVar4;
  if ((uint)puVar2[3] < uVar4) {
    FUN_00aeb6c0(iVar1 + 2);
  }
  piVar5 = (int *)(puVar2[1] + -4 + puVar2[2] * 4);
LAB_00ae7e26:
  if (piVar5 != (int *)0x0) {
    *piVar5 = param_1;
  }
  in_ECX[8] = in_ECX[8] + *(int *)(param_1 + 0x14);
  return;
}

