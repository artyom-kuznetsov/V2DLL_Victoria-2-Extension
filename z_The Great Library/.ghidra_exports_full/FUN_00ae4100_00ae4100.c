// FUN_00ae4100 @ 00ae4100 body=[[00ae4100, 00ae4228]]


void FUN_00ae4100(void)

{
  uint uVar1;
  void **ppvVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37c34;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  iVar8 = *(int *)(in_ECX + 0x10);
  local_4 = 0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar2;
    if (iVar8 == 0) {
      FUN_00b09030(local_14);
      if (*(int *)(in_ECX + 0x1c) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x1c),uVar3);
      }
      local_4 = 0xffffffff;
      if (*(int *)(in_ECX + 0xc) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xc));
      }
      ExceptionList = local_c;
      return;
    }
    iVar8 = **(int **)(in_ECX + 0xc);
    uVar1 = *(uint *)(iVar8 + 0x10);
    uVar4 = 0;
    if (uVar1 != 0) {
      piVar7 = *(int **)(iVar8 + 0xc);
      do {
        if (*piVar7 == in_ECX) {
          if (uVar4 != 0xffffffff) {
            if ((1 < uVar1) && (iVar5 = (uVar1 - uVar4) + -1, iVar5 != 0)) {
              piVar7 = *(int **)(iVar8 + 0xc) + uVar4;
              FID_conflict__memcpy(piVar7,piVar7 + 1,iVar5 * 4);
            }
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + -1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar4 < uVar1);
    }
    uVar1 = *(uint *)(in_ECX + 0x10);
    piVar7 = *(int **)(in_ECX + 0xc);
    uVar4 = 0;
    if (uVar1 != 0) {
      piVar6 = piVar7;
      do {
        if (*piVar6 == *piVar7) {
          if (uVar4 != 0xffffffff) {
            if ((1 < uVar1) && (iVar8 = (uVar1 - uVar4) + -1, iVar8 != 0)) {
              FID_conflict__memcpy(piVar7 + uVar4,piVar7 + uVar4 + 1,iVar8 * 4);
            }
            *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (uVar4 < uVar1);
    }
    iVar8 = *(int *)(in_ECX + 0x10);
    ppvVar2 = ExceptionList;
  } while( true );
}

