// FUN_0046ed30 @ 0046ed30 body=[[0046ed30, 0046ed71] [0046ed75, 0046edf0] [0046edf4, 0046ee5d] [0046ee61, 0046eeb4] [0046eeb8, 0046efed] [0046eff1, 0046f01d]]


void FUN_0046ed30(void)

{
  uint *puVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  undefined4 uVar4;
  uint *puVar5;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  uint *puStack_70;
  uint uStack_6c;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b938b3;
  pvStack_14 = ExceptionList;
  puStack_70 = (uint *)0x46ed59;
  ExceptionList = &pvStack_14;
  FUN_0046f370();
  puVar1 = (uint *)(in_ECX + 0x14);
  if (puVar1 != &local_50) {
    uStack_6c = *puVar1;
    if (uStack_6c != 0) {
                    /* WARNING: Subroutine does not return */
      puStack_70 = (uint *)&UNK_0046ed72;
      FUN_00aae91b();
    }
    *puVar1 = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  local_c = 0xffffffff;
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    uStack_6c = 0x46ed93;
    (**(code **)(**(int **)(in_ECX + 4) + 0x50))();
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  uStack_6c = 9;
  puStack_70 = (uint *)0xdfad74;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  FUN_00409350();
  local_c = 1;
  uStack_6c = *(undefined4 *)(in_ECX + 8);
  puStack_70 = &local_50;
  uVar4 = (**(code **)(*DAT_01258a80 + 0x2c))();
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 *)(in_ECX + 4) = uVar4;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 4))(in_ECX + 0x2c);
    uStack_48 = 0xf;
    uStack_4c = 0;
    auStack_5c[0] = 0;
    FUN_00409350(&DAT_00dfad80,4);
    uStack_18 = 2;
    uVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x7c))(auStack_5c);
    pvStack_1c = (void *)0xffffffff;
    *(undefined4 *)(in_ECX + 0xc) = uVar4;
    if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EBX);
    }
    uStack_4c = 0xf;
    local_50 = 0;
    FUN_00409350("scrollbar",9);
    pvStack_1c = (void *)0x3;
    uVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x4c))(&stack0xffffffa0);
    uStack_20 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x24) = uVar4;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_ESI);
    }
    local_50 = 0xf;
    uStack_54 = 0;
    uVar4 = FUN_0046f020(in_ECX);
    *(undefined4 *)(in_ECX + 0x10) = uVar4;
    FUN_004bf300(uVar4);
    uStack_6c = 0;
    if (0 < *(int *)(in_ECX + 0x10)) {
      do {
        puVar5 = (uint *)0x0;
        puStack_70 = (uint *)FUN_00aae9af(0x98);
        uStack_20 = 4;
        if (puStack_70 != (uint *)0x0) {
          puVar5 = (uint *)FUN_0046f520(puStack_70,*(undefined4 *)(in_ECX + 0x28));
        }
        uStack_20 = 0xffffffff;
        ppuVar2 = *(uint ***)(in_ECX + 0x18);
        puStack_70 = puVar5;
        if ((&puStack_70 < ppuVar2) && (ppuVar3 = (uint **)*puVar1, ppuVar3 <= &puStack_70)) {
          if (ppuVar2 == *(uint ***)(in_ECX + 0x1c)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(in_ECX + 0x18) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x18) =
                 *(undefined4 *)(*puVar1 + ((int)&puStack_70 - (int)ppuVar3 >> 2) * 4);
          }
        }
        else {
          if (ppuVar2 == *(uint ***)(in_ECX + 0x1c)) {
            FUN_00a513f0();
          }
          if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
            **(int **)(in_ECX + 0x18) = (int)puVar5;
          }
        }
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 4;
        uStack_6c = uStack_6c + 1;
      } while ((int)uStack_6c < *(int *)(in_ECX + 0x10));
    }
    FUN_0046f0d0();
    uStack_34 = 0xf;
    uStack_38 = 0;
    uStack_48 = uStack_48 & 0xffffff00;
    FUN_00409350("news_list",9);
    uStack_20 = 5;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x78))(&uStack_48);
    uStack_24 = 0xffffffff;
    if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_4c);
    }
    uStack_38 = 0xf;
    local_3c = 0;
    uStack_4c = uStack_4c & 0xffffff00;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
  }
  ExceptionList = pvStack_1c;
  return;
}

