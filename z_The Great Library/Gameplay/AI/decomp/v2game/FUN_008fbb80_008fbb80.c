// FUN_008fbb80 @ 008fbb80 body=[[008fbb80, 008fbbf9] [008fbc00, 008fbca0]]


undefined4 FUN_008fbb80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    iVar3 = FUN_004b9520(*(undefined4 *)
                          (*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4));
    if (iVar3 != *(int *)(in_ECX + 0x1c)) {
      return 0;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
    iVar1 = *(int *)(iVar3 + 0x60);
    if (iVar1 != 0) {
      do {
        piVar4 = (int *)(iVar1 + 0x18);
        iVar1 = *(int *)(iVar1 + 0x224);
        if (*(int *)(*(int *)(*piVar4 + 300) + 0x80) == *(int *)(in_ECX + 0x1c)) {
          return 1;
        }
      } while (iVar1 != 0);
    }
    piVar4 = *(int **)(iVar3 + 0x48);
    piVar2 = DAT_01258728;
    do {
      if (piVar4 < *(int **)(iVar3 + 0x48)) {
        return 0;
      }
      if (*(int **)(iVar3 + 0x4c) <= piVar4) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      piVar4 = piVar4 + 1;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_00aae9af(0x14);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
          DAT_01258728 = piVar2;
        }
        else {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
          *(undefined1 *)(piVar2 + 4) = 0;
          DAT_01258728 = piVar2;
        }
      }
    } while (*(int *)(*(int *)(iVar1 + 0x58) * 0xb0 + 0xc + *piVar2) != *(int *)(in_ECX + 0x1c));
  }
  return 1;
}

