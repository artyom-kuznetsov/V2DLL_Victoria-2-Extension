// FUN_00ae4ad0 @ 00ae4ad0 body=[[00ae4ad0, 00ae4b8f]]


void FUN_00ae4ad0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  FUN_00b09030(&local_4);
  piVar6 = (int *)(in_ECX + 0x10);
  local_4 = 3;
  do {
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      uVar3 = *(uint *)(iVar1 + 0x20);
      uVar2 = 0;
      if (uVar3 != 0) {
        piVar4 = *(int **)(iVar1 + 0x1c);
        do {
          if (*piVar4 == in_ECX) {
            if (uVar2 != 0xffffffff) {
              if ((1 < uVar3) && (iVar5 = (uVar3 - uVar2) + -1, iVar5 != 0)) {
                piVar4 = *(int **)(iVar1 + 0x1c) + uVar2;
                FID_conflict__memcpy(piVar4,piVar4 + 1,iVar5 * 4);
              }
              *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + -1;
            }
            break;
          }
          uVar2 = uVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar2 < uVar3);
      }
    }
    piVar6 = piVar6 + 1;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      uVar3 = 0;
      piVar6 = (int *)(in_ECX + 0x10);
      local_4 = 0;
      do {
        uVar3 = uVar3 + 1;
        if ((*piVar6 != 0) && (iVar1 = *(int *)(in_ECX + 0x10 + (uVar3 % 3) * 4), iVar1 != 0)) {
          FUN_00ae4230(iVar1);
          FUN_00ae4230(*piVar6);
        }
        piVar6 = piVar6 + 1;
      } while (uVar3 < 3);
      return;
    }
  } while( true );
}

