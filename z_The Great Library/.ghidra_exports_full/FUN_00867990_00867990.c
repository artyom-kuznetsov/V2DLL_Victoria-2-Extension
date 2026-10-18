// FUN_00867990 @ 00867990 body=[[00867990, 00867b46] [00867b4a, 00867c3e] [00867c42, 00867c7d] [00867c81, 00867c9b] [00867c9f, 00867cdb]]


void FUN_00867990(int param_1)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *local_80;
  undefined4 *local_7c;
  int local_78;
  char *local_70;
  undefined **appuStack_6c [3];
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5e7b5;
  pvStack_14 = ExceptionList;
  bVar2 = false;
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  local_58 = 0;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  ExceptionList = &pvStack_14;
  FUN_00992240("tutorial",&local_60,&DAT_00dfa554);
  iVar1 = ((int)local_5c - (int)local_60) / 0x1c;
  local_78 = 0;
  if (0 < iVar1) {
    local_7c = local_60;
    do {
      FUN_00988fa0(local_7c);
      local_c._0_1_ = 1;
      pcVar3 = (char *)FUN_00aae9af(0x360);
      local_c._0_1_ = 2;
      local_70 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
      }
      else {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350("UNNAMED_SESSION",0xf);
        local_c = CONCAT31(local_c._1_3_,3);
        bVar2 = true;
        puVar4 = (undefined4 *)FUN_00aae9af(0x114);
        local_c = 4;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          FUN_0098ffc0(local_34);
          *puVar4 = &PTR_FUN_00e37c3c;
        }
        *(undefined ***)pcVar3 = &PTR_FUN_00e38524;
        pcVar3[4] = '\0';
        pcVar3[5] = '\0';
        pcVar3[6] = '\0';
        pcVar3[7] = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        pcVar3[0x10] = '\0';
        local_c = 5;
        pcVar3[0x14] = '\0';
        *(undefined4 **)(pcVar3 + 0x1c) = puVar4;
        pcVar3[0x340] = '\x0f';
        pcVar3[0x341] = '\0';
        pcVar3[0x342] = '\0';
        pcVar3[0x343] = '\0';
        pcVar3[0x33c] = '\0';
        pcVar3[0x33d] = '\0';
        pcVar3[0x33e] = '\0';
        pcVar3[0x33f] = '\0';
        pcVar3[0x32c] = '\0';
        FUN_00408ed0(local_50,0,0xffffffff);
        pcVar3[0x348] = '\0';
        pcVar3[0x349] = '\0';
        pcVar3[0x34a] = '\0';
        pcVar3[0x34b] = '\0';
        pcVar3[0x34c] = '\0';
        pcVar3[0x34d] = '\0';
        pcVar3[0x34e] = '\0';
        pcVar3[0x34f] = '\0';
        pcVar3[0x350] = '\0';
        pcVar3[0x351] = '\0';
        pcVar3[0x352] = '\0';
        pcVar3[0x353] = '\0';
        pcVar3[0x358] = '\x01';
        pcVar3[0x35c] = '\0';
        pcVar3[0x35d] = '\0';
        pcVar3[0x35e] = '\0';
        pcVar3[0x35f] = '\0';
      }
      local_c = 1;
      if (bVar2) {
        bVar2 = false;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
      }
      local_70 = (char *)FUN_00aae9af(0xb8);
      local_c._0_1_ = 7;
      if (local_70 == (char *)0x0) {
        local_80 = (int *)0x0;
      }
      else {
        local_80 = (int *)FUN_00866bc0(local_70,*(undefined4 *)(param_1 + 0x30));
      }
      local_c = CONCAT31(local_c._1_3_,1);
      (**(code **)(*local_80 + 0xc))(pcVar3);
      if (pcVar3 != (char *)0x0) {
        (*(code *)**(undefined4 **)pcVar3)(1);
      }
      if (((*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) & 3U) == 0) &&
         (*(uint *)(param_1 + 0x28) <= *(int *)(param_1 + 0x30) + 4U >> 2)) {
        FUN_00705300(param_1 + 0x20);
      }
      uVar7 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
      uVar6 = uVar7 >> 2;
      if (*(uint *)(param_1 + 0x28) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(param_1 + 0x28);
      }
      if (*(int *)(*(int *)(param_1 + 0x24) + uVar6 * 4) == 0) {
        iVar5 = FUN_00aae9af(0x10);
        if (iVar5 == 0) {
          local_70 = (char *)0x0;
          std::exception::exception((exception *)appuStack_6c,&local_70);
          appuStack_6c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(appuStack_6c,&DAT_00e6fb20);
        }
        *(int *)(*(int *)(param_1 + 0x24) + uVar6 * 4) = iVar5;
      }
      puVar4 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + uVar6 * 4) + (uVar7 & 3) * 4);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = local_80;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      local_c._0_1_ = 0;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_7c = local_7c + 7;
      local_78 = local_78 + 1;
    } while (local_78 < iVar1);
  }
  puVar4 = local_60;
  if (local_60 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  while( true ) {
    if (puVar4 == local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
    if (0xf < (uint)puVar4[5]) break;
    puVar4[5] = 0xf;
    puVar4[4] = 0;
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar4 + 7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar4);
}

