// FUN_00ae4230 @ 00ae4230 body=[[00ae4230, 00ae42e3]]


void FUN_00ae4230(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int **)(in_ECX + 0xc);
    while (*piVar3 != param_1) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    if (uVar2 != 0xffffffff) {
      uVar2 = 0;
      if (*(uint *)(in_ECX + 0x20) != 0) {
        piVar3 = *(int **)(in_ECX + 0x1c);
        do {
          iVar4 = *piVar3;
          if (param_1 == *(int *)(iVar4 + 0x10)) {
            return;
          }
          if (param_1 == *(int *)(iVar4 + 0x14)) {
            return;
          }
          if (param_1 == *(int *)(iVar4 + 0x18)) {
            return;
          }
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar2 < *(uint *)(in_ECX + 0x20));
      }
      uVar2 = 0;
      if (uVar1 != 0) {
        piVar3 = *(int **)(in_ECX + 0xc);
        while (*piVar3 != param_1) {
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 1;
          if (uVar1 <= uVar2) {
            return;
          }
        }
        if (uVar2 != 0xffffffff) {
          if ((1 < uVar1) && (iVar4 = (uVar1 - uVar2) + -1, iVar4 != 0)) {
            piVar3 = *(int **)(in_ECX + 0xc) + uVar2;
            FID_conflict__memcpy(piVar3,piVar3 + 1,iVar4 * 4);
          }
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        }
      }
    }
  }
  return;
}

