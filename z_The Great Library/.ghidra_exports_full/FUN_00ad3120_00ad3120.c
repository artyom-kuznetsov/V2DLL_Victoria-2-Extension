// FUN_00ad3120 @ 00ad3120 body=[[00ad3120, 00ad318a]]


void FUN_00ad3120(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint local_4;
  
  iVar1 = 0;
  local_4 = 0;
  if (in_ECX[1] != 0) {
    do {
      piVar2 = (int *)(*in_ECX + iVar1);
      uVar3 = 0;
      if (piVar2[1] != 0) {
        do {
          (*(code *)**(undefined4 **)(*piVar2 + uVar3 * 8))(0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)piVar2[1]);
      }
      if (*piVar2 != 0) {
        (*(code *)PTR__free_00f01b10)(*piVar2);
      }
      local_4 = local_4 + 1;
      iVar1 = iVar1 + 0x10;
    } while (local_4 < (uint)in_ECX[1]);
  }
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  return;
}

