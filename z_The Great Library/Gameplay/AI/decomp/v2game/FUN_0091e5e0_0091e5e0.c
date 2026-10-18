// FUN_0091e5e0 @ 0091e5e0 body=[[0091e5e0, 0091e924] [0091e928, 0091e943] [0091e947, 0091e965] [0091e969, 0091e97e] [0091e982, 0091e9a4] [0091e9a8, 0091e9be]]


/* WARNING: Removing unreachable block (ram,0x0091e6ee) */

void FUN_0091e5e0(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int in_ECX;
  longlong lVar10;
  int local_b4;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined8 local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb7294;
  local_14 = ExceptionList;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_0091fa10(in_ECX,1);
  FUN_0091fc40(in_ECX,local_34,&local_a4,0);
  local_c._0_1_ = 1;
  iVar6 = local_a0 - local_a4 >> 2;
  local_b4 = 0;
  if (0 < iVar6) {
    local_90 = FUN_00b31c36();
    do {
      local_94 = *(int *)(local_a4 + local_b4 * 4);
      puVar7 = (undefined4 *)FUN_00456b90();
      iVar1 = DAT_012587e4;
      *puVar7 = 0;
      iVar1 = *(int *)(iVar1 + 4);
      iVar8 = *(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4);
      lVar10 = __allmul(*(undefined4 *)(iVar8 + 0x1a0),*(undefined4 *)(iVar8 + 0x1a4),local_90);
      iVar3 = local_94;
      bVar2 = lVar10 >> 0xf < *(longlong *)(*(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4) + 0x1a0);
      iVar8 = *(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4);
      if ((*(char *)(iVar8 + 0xcf5) != '\0') || (*(char *)(iVar8 + 0xcf4) != '\0')) {
        bVar2 = false;
      }
      iVar8 = *(int *)(in_ECX + 0x14);
      if (*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4) + 0xcfc) == iVar8) {
        bVar2 = true;
      }
      if (*(int *)(*(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4) + 0x142c) == iVar8) {
        bVar2 = true;
      }
      if (*(int *)(*(int *)(iVar1 + iVar8 * 4) + 0x142c) == *(int *)(in_ECX + 0xc)) {
        bVar2 = false;
      }
      iVar1 = *(int *)(local_94 + 0x30);
      iVar8 = *(int *)(local_94 + 0x2c);
      if (iVar8 == iVar1) {
LAB_0091e7c7:
        cVar5 = FUN_0093c4c0(0);
        if (cVar5 != '\0') {
          bVar2 = false;
        }
        FUN_00935390(iVar3,1,bVar2,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
      }
      else {
        do {
          if (*(int *)(iVar8 + 4) == *(int *)(in_ECX + 0xc)) break;
          iVar8 = iVar8 + 8;
        } while (iVar8 != iVar1);
        if (iVar8 == iVar1) goto LAB_0091e7c7;
        FUN_00934280(local_94,1,bVar2,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14))
        ;
      }
      local_b4 = local_b4 + 1;
    } while (local_b4 < iVar6);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("VERSUS",6);
  local_c._0_1_ = 2;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_c._0_1_ = 3;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00408ed0(local_34,0,0xffffffff);
  local_c._0_1_ = 4;
  iVar6 = param_1[1];
  puVar9 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 5;
  uVar4 = (undefined1)local_c;
  local_c._0_1_ = 5;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = (undefined1 *)0x0;
    local_c._0_1_ = uVar4;
  }
  else {
    *(undefined4 *)(puVar9 + 0x14) = 0xf;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    *puVar9 = 0;
    FUN_00408ed0(local_88,0,0xffffffff);
    local_c._0_1_ = 6;
    *(undefined4 *)(puVar9 + 0x30) = 0xf;
    *(undefined4 *)(puVar9 + 0x2c) = 0;
    puVar9[0x1c] = 0;
    FUN_00408ed0(local_6c,0,0xffffffff);
    *(int *)(puVar9 + 0x38) = iVar6;
    *(undefined4 *)(puVar9 + 0x3c) = 0;
    puVar9[0x40] = 0;
  }
  iVar1 = param_1[2];
  param_1[1] = puVar9;
  param_1[2] = iVar1 + 1;
  if (iVar1 == 0) {
    *param_1 = puVar9;
  }
  else {
    *(undefined1 **)(iVar6 + 0x3c) = puVar9;
  }
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (local_a4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
  ExceptionList = local_14;
  return;
}

