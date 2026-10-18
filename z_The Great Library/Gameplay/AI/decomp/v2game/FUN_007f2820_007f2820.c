// FUN_007f2820 @ 007f2820 body=[[007f2820, 007f28c2] [007f28c6, 007f28e1] [007f28e5, 007f2ac9] [007f2b39, 007f2b47] [007f2b4b, 007f2b5d]]


void FUN_007f2820(int param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c [4];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b79a44;
  local_1c[3] = ExceptionList;
  local_1c[2] = &stack0xfffffea0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = local_1c + 3;
  FUN_00409350("CREATING_PROVINCE",0x11);
  local_8 = 0;
  FUN_009a8ee0(local_38,local_54);
  local_8._0_1_ = 1;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 4;
  FUN_009adb70();
  if (local_34 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_8._0_1_ = 5;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_007e1210();
  local_24 = (**(code **)(**(int **)(param_1 + 0x40) + 0x24))();
  local_8._0_1_ = 6;
  iVar4 = 1;
LAB_007f291b:
  do {
    local_20 = iVar4;
    if (local_24 <= iVar4) {
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_1c[3];
      return;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x2aa4) + iVar4 * 4);
    FUN_004c6ad0();
    if (*(char *)(iVar1 + 0x2a) == '\0') {
      local_1c[0] = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 7;
      if (local_1c[0] == (undefined1 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_0080e4f0(*(undefined4 *)(param_1 + 0x3c),iVar4);
      }
      local_8._0_1_ = 6;
      (**(code **)(*piVar5 + 0x34))();
      (**(code **)(*piVar5 + 0x144))();
      local_1c[0] = (undefined1 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,8);
      if (local_1c[0] == (undefined1 *)0x0) {
LAB_007f29b7:
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00641cb0(local_1c[0],iVar1);
      }
LAB_007f29b9:
      local_8._0_1_ = 6;
      *puVar6 = *(undefined4 *)(puVar6[2] + 0x30);
      ppuVar2 = *(undefined1 ***)(param_1 + 0x20);
      local_1c[0] = (undefined1 *)puVar6;
      if ((local_1c < ppuVar2) && (ppuVar3 = *(undefined1 ***)(param_1 + 0x1c), ppuVar3 <= local_1c)
         ) {
        if (ppuVar2 == *(undefined1 ***)(param_1 + 0x24)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) =
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + ((int)local_1c - (int)ppuVar3 >> 2) * 4);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
          iVar4 = local_20 + 1;
          goto LAB_007f291b;
        }
      }
      else {
        if (ppuVar2 == *(undefined1 ***)(param_1 + 0x24)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x20) = puVar6;
        }
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    }
    else if (*(int *)(iVar1 + 0xc0) != 0) {
      local_1c[0] = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 9;
      if (local_1c[0] == (undefined1 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_0080dff0(*(undefined4 *)(param_1 + 0x3c),iVar4);
      }
      local_8._0_1_ = 6;
      (**(code **)(*piVar5 + 0x34))();
      (**(code **)(*piVar5 + 0x144))();
      local_1c[0] = (undefined1 *)FUN_00aae9af();
      local_8 = CONCAT31(local_8._1_3_,10);
      if (local_1c[0] == (undefined1 *)0x0) goto LAB_007f29b7;
      puVar6 = (undefined4 *)FUN_00641cb0(local_1c[0],iVar1);
      goto LAB_007f29b9;
    }
    iVar4 = local_20 + 1;
  } while( true );
}

