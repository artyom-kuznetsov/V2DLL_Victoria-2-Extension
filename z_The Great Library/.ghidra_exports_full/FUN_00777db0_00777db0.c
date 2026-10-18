// FUN_00777db0 @ 00777db0 body=[[00777db0, 00777ea6] [00777eaa, 00777ecc] [00777ed0, 00777f26] [00777f2a, 00777fa7] [00777fab, 0077803c] [00778040, 00778071]]


void FUN_00777db0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7b7ae;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)FUN_00aae9af(0x3c);
  local_8 = 0;
  if (local_1c == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072ae30(local_1c);
  }
  local_8 = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined4 *)(in_ECX + 0x5ac) = 0xffffffff;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("bookmarks_list",0xe);
  local_8 = 1;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("bookmarks",9);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))(local_3c);
  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(local_58);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
  piVar4 = (int *)*puVar5;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = 0xffffffff;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_18 = 0;
  puVar5 = DAT_01265438;
  do {
    puVar1 = DAT_01265438;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      puVar1 = puVar5;
      if ((puVar5 != DAT_01265438) && (local_1c = DAT_01265438, DAT_01265438 != (undefined4 *)0x0))
      {
        FUN_007549a0(DAT_01265438);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1c);
      }
    }
    DAT_01265438 = puVar1;
    if ((int)puVar5[2] <= local_18) {
      while( true ) {
        if (piVar4 == (int *)0x0) {
          FUN_00778080();
          ExceptionList = local_10;
          return;
        }
        local_7c = 0xf;
        local_80 = 0;
        local_90[0] = local_90[0] & 0xffffff00;
        FUN_00409350("save_game",9);
        local_8 = 3;
        iVar3 = (**(code **)(**(int **)(*piVar4 + 0x20) + 0x48))(local_90);
        local_11 = param_1 == iVar3;
        local_8 = 0xffffffff;
        if (0xf < local_7c) break;
        if ((bool)local_11) {
          FUN_00408ed0(*piVar4 + 0x28,0,0xffffffff);
          (**(code **)(*(int *)*piVar4 + 0x1c))(1);
        }
        else {
          (**(code **)(*(int *)*piVar4 + 0x1c))(0);
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
          FUN_00409350("save_game",9);
          local_8 = 4;
          iVar3 = (**(code **)(**(int **)(*piVar4 + 0x20) + 0x48))(local_74);
          if ((*(char *)(iVar3 + 0xe4) == '\0') || (*(char *)(iVar3 + 0x142) != '\0')) {
            *(undefined4 *)(iVar3 + 0x6c) = 0;
            *(undefined4 *)(iVar3 + 0x10c) = 0;
          }
          local_8 = 0xffffffff;
          if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74[0]);
          }
          local_60 = 0xf;
          local_64 = 0;
          local_74[0] = local_74[0] & 0xffffff00;
        }
        piVar4 = (int *)piVar4[2];
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    piVar4 = (int *)piVar4[2];
    local_18 = local_18 + 1;
  } while( true );
}

