// FUN_00b1edb0 @ 00b1edb0 body=[[00b1edb0, 00b1ee89]]


void FUN_00b1edb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *in_ECX;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint local_10;
  uint local_8;
  
  if (in_ECX[1] != 0) {
    local_8 = 0;
    if (in_ECX[1] != 1) {
      do {
        uVar8 = local_8 + 1;
        if (uVar8 < (uint)in_ECX[1]) {
          iVar2 = *in_ECX;
          uVar5 = uVar8;
          iVar7 = local_8 * 4;
          local_10 = local_8;
          do {
            if (*(uint *)(*(int *)(iVar2 + uVar5 * 4) + 4) < *(uint *)(*(int *)(iVar7 + iVar2) + 4))
            {
              iVar7 = uVar5 * 4;
              local_10 = uVar5;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)in_ECX[1]);
          if (local_8 < local_10) {
            puVar1 = (undefined4 *)(iVar2 + local_10 * 4);
            puVar6 = (undefined4 *)(iVar2 + local_8 * 4);
            if (puVar6 != puVar1) {
              uVar3 = *puVar6;
              *puVar6 = *puVar1;
              *puVar1 = uVar3;
            }
          }
        }
        local_8 = uVar8;
      } while (uVar8 < in_ECX[1] - 1U);
    }
    uVar8 = 0;
    if (in_ECX[1] != 0) {
      do {
        piVar4 = *(int **)(*in_ECX + uVar8 * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
          (*(code *)PTR__free_00f01b10)(piVar4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)in_ECX[1]);
    }
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
    in_ECX[1] = 0;
  }
  return;
}

