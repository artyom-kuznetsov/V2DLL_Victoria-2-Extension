// FUN_005b9fb0 @ 005b9fb0 body=[[005b9fb0, 005b9fce] [005b9fdb, 005ba013] [005ba020, 005ba046] [005ba052, 005ba079]]


void FUN_005b9fb0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(int *)(in_ECX + 4) != 0) {
    if (*(int *)(in_ECX + 8) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(int *)(in_ECX + 4));
    }
    iVar3 = FUN_005ba170(*(int *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc),
                         *(undefined4 *)(in_ECX + 0xc));
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
    uVar1 = *(uint *)(in_ECX + 8);
    if (uVar1 < *(uint *)(in_ECX + 0xc)) {
      *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) >> 1;
    }
    while ((iVar3 != 0 && (iVar3 = *(int *)(in_ECX + 4), iVar3 != 0))) {
      if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      uVar2 = *(uint *)(in_ECX + 0xc);
      uVar4 = uVar2 >> 1;
      uVar5 = uVar2 + uVar4;
      if (uVar1 < uVar5) {
        puVar6 = (undefined4 *)(iVar3 + 4);
        uVar5 = uVar2;
      }
      else {
        puVar6 = (undefined4 *)(iVar3 + 8);
      }
      if (uVar4 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar6);
      }
      iVar3 = FUN_005ba170(uVar1,uVar5,uVar4);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
      uVar1 = *(uint *)(in_ECX + 8);
      if (uVar1 < *(uint *)(in_ECX + 0xc)) {
        *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) >> 1;
      }
    }
  }
  return;
}

