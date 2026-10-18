// FUN_00a88400 @ 00a88400 body=[[00a88400, 00a88514]]


undefined4 FUN_00a88400(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  do {
    uVar3 = uVar3 + 0xe8;
    if (*(int *)(param_1 + 0x24) * 0xe8 + *(uint *)(param_1 + 0x20) <= uVar3) {
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    iVar1 = *(int *)(uVar3 + 0x18);
    if (iVar1 == 3) {
      *(undefined4 *)(uVar3 + 0x18) = 4;
      param_2[1] = uVar3;
      *param_2 = 1;
      return 1;
    }
    if (iVar1 == 7) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *param_2 = 2;
      param_2[1] = uVar3;
      param_2[3] = *(undefined4 *)(uVar3 + 0xe4);
      FUN_00a8a360();
      *(uint *)(param_1 + 0x28) = uVar3;
      return 1;
    }
    if ((iVar1 == 4) &&
       (uVar4 = *(uint *)(uVar3 + 0x1c), uVar4 < *(int *)(uVar3 + 0x20) * 0x20 + uVar4)) {
      piVar2 = (int *)(uVar4 + 0x18);
      do {
        if (((int *)piVar2[-2] != piVar2 + -2) || ((int *)*piVar2 != piVar2)) {
          iVar1 = FUN_00a8a0d0((int)(uVar4 - *(int *)(uVar3 + 0x1c)) >> 5);
          param_2[4] = iVar1;
          if (iVar1 != 0) {
            param_2[1] = uVar3;
            *param_2 = 3;
            *(char *)(param_2 + 2) = (char)((int)(uVar4 - *(int *)(uVar3 + 0x1c)) >> 5);
            *(uint *)(param_1 + 0x28) = uVar3;
            return 1;
          }
        }
        uVar4 = uVar4 + 0x20;
        piVar2 = piVar2 + 8;
      } while (uVar4 < (uint)(*(int *)(uVar3 + 0x20) * 0x20 + *(int *)(uVar3 + 0x1c)));
    }
  } while (uVar3 != *(uint *)(param_1 + 0x28));
  return 0;
}

