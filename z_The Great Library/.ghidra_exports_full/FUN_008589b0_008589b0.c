// FUN_008589b0 @ 008589b0 body=[[008589b0, 00858a37] [00858a40, 00858d7d]]


void FUN_008589b0(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int local_a8;
  uint local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_8c;
  undefined4 local_88;
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b90b9f;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  iVar9 = FUN_00858d90();
  if (iVar9 == 0) {
    ExceptionList = local_4c;
    return;
  }
  local_8c = iVar9;
  iVar10 = FUN_00857430();
  if (iVar10 != 0) {
    local_98 = FUN_00857530(param_1,iVar10,iVar9);
    if (local_98 == 0) {
      ExceptionList = local_4c;
      return;
    }
    bVar5 = false;
    local_a8 = -1;
    local_a0 = 0;
    if (*(char *)(param_1 + 0x6e) != '\0') {
      local_a8 = -1;
      uVar7 = *(uint *)(local_98 + 0x60);
      do {
        uVar6 = uVar7;
        if (uVar6 == 0) goto LAB_00858a82;
        local_a8 = local_a8 + 1;
        uVar7 = *(uint *)(uVar6 + 0x224);
      } while (*(int *)(uVar6 + 0x18) != iVar10);
      bVar4 = 10 < *(int *)(uVar6 + 0x184);
      if (bVar4) {
        local_a0 = uVar6;
      }
      bVar5 = true;
      if (bVar4) {
        local_88 = *(undefined4 *)(param_1 + 0x34);
        cVar8 = FUN_0052dcd0();
        if (cVar8 != '\0') {
          iVar9 = FUN_00aae9af();
          local_44 = 10;
          if (iVar9 != 0) {
            puVar1 = (undefined4 *)(local_a0 + 0x24);
            puVar2 = (undefined1 *)(local_a0 + 0x180);
            local_a0 = *(uint *)(param_1 + 0x34);
            local_98 = CONCAT31(local_98._1_3_,*puVar2);
            local_9c = *(int *)(param_1 + 0x38);
            FUN_005827f0(iVar9,&local_a0,local_a8,1,local_98,*puVar1);
          }
          local_44 = 0xffffffff;
          iVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))();
        }
        goto LAB_00858d59;
      }
    }
LAB_00858a82:
    if (*(char *)(param_1 + 0x6c) != '\0') {
      if ((DAT_013f30f0 & 1) == 0) {
        DAT_013f30f0 = DAT_013f30f0 | 1;
        local_44 = 7;
        FUN_00561bd0();
        _atexit((_func_4879 *)&LAB_00c84b80);
        local_44 = 0xffffffff;
      }
      if (bVar5) {
        if ((*(char *)(param_1 + 0x6d) == '\0') || (local_a8 < 0)) goto LAB_00858d59;
        FUN_00561c40();
        local_a0 = *(uint *)(param_1 + 0x34);
        FUN_004da800(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4),0,
                     &DAT_013f3098);
        FUN_0048b5d0(0x3ff8000000000000);
        FUN_0043a620();
        local_88 = *(undefined4 *)(param_1 + 0x34);
        iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        iVar10 = *(int *)(iVar9 + 0xe7c);
        if ((iVar10 < local_9c) || ((iVar10 <= local_9c && (*(uint *)(iVar9 + 0xe78) <= local_a0))))
        goto LAB_00858d59;
        local_a0 = FUN_00aae9af();
        local_44 = 9;
        if (local_a0 != 0) {
          FUN_0057c130(local_a0,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                       local_a8);
        }
      }
      else {
        FUN_00561c40();
        local_98 = *(uint *)(param_1 + 0x34);
        FUN_004da720(iVar10,*(undefined4 *)
                             (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4),0,
                     &DAT_013f3098);
        FUN_0048b5d0(0x3ff8000000000000);
        FUN_0043a620();
        iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        iVar3 = *(int *)(iVar9 + 0xe7c);
        if ((iVar3 < local_94) ||
           (((iVar3 <= local_94 && (*(uint *)(iVar9 + 0xe78) <= local_98)) ||
            (local_98 = *(uint *)(param_1 + 0x34),
            *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x12d0)
            == '\0')))) goto LAB_00858d59;
        local_98 = FUN_00aae9af();
        local_44 = 8;
        if (local_98 != 0) {
          FUN_0057c080(local_98,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                       iVar10);
        }
      }
      local_44 = 0xffffffff;
      iVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))();
    }
  }
LAB_00858d59:
  if (*(char *)(param_1 + 0x74) != '\0') {
    FUN_008582d0();
  }
  ExceptionList = local_4c;
  return;
}

