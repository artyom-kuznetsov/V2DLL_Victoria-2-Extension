// FUN_009f5b40 @ 009f5b40 body=[[009f5b40, 009f5b8b] [009f5b90, 009f5c9c] [009f5ca0, 009f5cc3] [009f5cc7, 009f5cff] [009f5d08, 009f5d5a] [009f5d5e, 009f5d81] [009f5d85, 009f5dbd] [009f5dc6, 009f5e35] [009f5e39, 009f5e5c] [009f5e60, 009f5ea9] [009f5ead, 009f5f1d] [009f5f21, 009f5f44] [009f5f48, 009f5f7b] [009f5f7f, 009f5fcd] [009f5fd1, 009f5fe6] [009f5fea, 009f5ff9]]


void FUN_009f5b40(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_40;
  uint local_2c;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [7];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4eae8;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  local_1c = in_ECX;
  iVar5 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x48))();
  cVar1 = *(char *)(in_ECX + 0x9b);
  local_11 = '\0';
  do {
    local_20 = iVar5;
    if ((cVar1 != '\0') || (in_stack_00000014 == 0)) {
      local_18[0] = 10;
      iVar5 = FUN_005484e0(&param_1,local_18,1);
      if (iVar5 != -1) {
        local_18[0] = 10;
        do {
          FUN_009895f0(iVar5 + 1);
          local_8 = 0xb;
          FUN_009f70a0();
          local_8 = 0xc;
          FUN_009f80a0();
          if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60[0]);
          }
          local_8 = 0;
          local_4c = 0xf;
          local_50 = 0;
          local_60[0] = local_60[0] & 0xffffff00;
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40);
          }
          uVar9 = FUN_009895f0(in_stack_00000014);
          local_8 = 0xd;
          FUN_00408ed0(uVar9,0,0xffffffff);
          local_8 = 0;
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40);
          }
          iVar5 = FUN_005484e0(&param_1,local_18,1);
        } while (iVar5 != -1);
      }
      if (in_stack_00000014 != 0) {
        FUN_009f70a0();
        local_8 = 0xe;
        FUN_009f80a0();
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
      }
      if (in_stack_00000018 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1);
    }
    local_18[0] = 10;
    iVar6 = FUN_005484e0(&param_1,local_18,1);
    if (iVar6 == -1) {
      iVar6 = in_stack_00000014;
    }
    puVar7 = param_1;
    if (in_stack_00000018 < 0x10) {
      puVar7 = &param_1;
    }
    iVar8 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(puVar7,iVar6);
    if ((int)(uint)*(ushort *)(in_ECX + 0x48) < iVar8 + iVar5) {
      if (local_11 == '\0') {
        iVar6 = (iVar8 + iVar5) / (int)(uint)*(ushort *)(in_ECX + 0x48) + 1;
        FUN_00615230(iVar6 + iVar6 / 2);
        local_11 = '\x01';
      }
      local_18[0] = 0x20;
      iVar6 = FUN_005484e0(&param_1,local_18,1);
      if (iVar6 != -1) {
        puVar7 = param_1;
        if (in_stack_00000018 < 0x10) {
          puVar7 = &param_1;
        }
        iVar6 = (**(code **)(**(int **)(in_ECX + 0x78) + 0x28))(puVar7,iVar6);
        if (iVar6 + iVar5 <= (int)(uint)*(ushort *)(in_ECX + 0x48)) {
          uVar9 = FUN_009f5990(in_ECX);
          iVar5 = FUN_009f7290(uVar9);
          FUN_009895f0(iVar5 + 1);
          local_8 = 5;
          FUN_009f71a0(local_60);
          local_8 = 6;
          FUN_009f80a0();
          if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60[0]);
          }
          local_8 = 0;
          local_4c = 0xf;
          local_50 = 0;
          local_60[0] = local_60[0] & 0xffffff00;
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40);
          }
          uVar9 = FUN_009895f0(in_stack_00000014);
          local_8 = 7;
          FUN_00408ed0(uVar9,0,0xffffffff);
          local_8 = 0;
          uVar4 = local_8;
          local_8 = 0;
          if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_40);
          }
          goto LAB_009f5eb0;
        }
      }
      iVar5 = FUN_009f5990(in_ECX);
      if (in_stack_00000014 < iVar5) {
        FUN_009f70a0();
        local_8 = 4;
        FUN_009f80a0();
        uVar2 = local_60[0];
        uVar3 = local_4c;
joined_r0x009f5e9f:
        in_ECX = local_1c;
        uVar4 = 0;
        if (0xf < uVar3) {
          local_8 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar2);
        }
      }
      else {
        uVar9 = FUN_009895f0(iVar5);
        local_8 = 1;
        FUN_009f70e0(uVar9);
        local_8 = 2;
        FUN_009f80a0();
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
        local_8 = 0;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40);
        }
        uVar9 = FUN_009895f0(in_stack_00000014);
        local_8 = 3;
        FUN_00408ed0(uVar9,0,0xffffffff);
        local_8 = 0;
        uVar4 = local_8;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40);
        }
      }
    }
    else {
      local_24 = iVar6 + 1;
      FUN_009895f0(local_24);
      local_8 = 8;
      FUN_009f70a0();
      local_8 = 9;
      FUN_009f80a0();
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60[0]);
      }
      local_8 = 0;
      local_4c = 0xf;
      local_50 = 0;
      local_60[0] = local_60[0] & 0xffffff00;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      if (iVar6 < in_stack_00000014) {
        uVar9 = FUN_009895f0(in_stack_00000014);
        local_8 = 10;
        FUN_00408ed0(uVar9,0,0xffffffff);
        uVar2 = local_40;
        uVar3 = local_2c;
        goto joined_r0x009f5e9f;
      }
      FUN_00409350(&DAT_00ded94d,0);
      in_ECX = local_1c;
      uVar4 = local_8;
    }
LAB_009f5eb0:
    local_8 = uVar4;
    cVar1 = *(char *)(in_ECX + 0x9b);
    iVar5 = local_20;
  } while( true );
}

