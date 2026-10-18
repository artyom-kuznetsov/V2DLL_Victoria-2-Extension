// FUN_005d57a0 @ 005d57a0  (requested 005D57A0, first bytes: 55 8B EC 83 EC 14 53 56)


void FUN_005d57a0(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint *puVar10;
  undefined4 local_18;
  undefined4 local_14;
  uint *local_c;
  uint *local_8;
  
  puVar2 = *(uint **)(param_1 + 0x130);
  while (puVar2 != (uint *)0x0) {
    puVar3 = (uint *)*puVar2;
    puVar2 = (uint *)puVar2[2];
    (**(code **)(*puVar3 + 0x38))();
    piVar4 = *(int **)(param_1 + 0x108);
    uVar6 = (**(code **)(*puVar3 + 0x44))();
    (**(code **)(*piVar4 + 0x40))(uVar6);
    FUN_009962f0(uVar6);
    iVar7 = (**(code **)(**(int **)(param_1 + 0x108) + 0x38))();
    puVar10 = (uint *)(*(uint **)(iVar7 + 0x3a00))[1];
    cVar1 = *(char *)((int)puVar10 + 0x15);
    local_8 = *(uint **)(iVar7 + 0x3a00);
    while (cVar1 == '\0') {
      if ((uint *)puVar10[3] < puVar3) {
        puVar8 = (uint *)puVar10[2];
        puVar10 = local_8;
      }
      else {
        puVar8 = (uint *)*puVar10;
      }
      local_8 = puVar10;
      puVar10 = puVar8;
      cVar1 = *(char *)((int)puVar8 + 0x15);
    }
    if ((local_8 == *(uint **)(iVar7 + 0x3a00)) || (puVar3 < (uint *)local_8[3])) {
      local_c = *(uint **)(iVar7 + 0x3a00);
      ppuVar9 = &local_c;
    }
    else {
      ppuVar9 = &local_8;
    }
    if ((*ppuVar9 != *(uint **)(iVar7 + 0x3a00)) && (uVar5 = (*ppuVar9)[4], uVar5 != 0xffffffff)) {
      piVar4 = (int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x20d8) + uVar5 * 4) + 0xc) + 0x394);
      *piVar4 = *piVar4 + -1;
      local_8 = puVar3;
      FUN_004c9400(&local_18,&local_8);
      FUN_00445600(local_18,local_14);
    }
  }
  if (*(int *)(param_1 + 0x130) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x130));
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  return;
}

