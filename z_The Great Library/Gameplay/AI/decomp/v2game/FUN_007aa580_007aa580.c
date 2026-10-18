// FUN_007aa580 @ 007aa580 body=[[007aa580, 007aa71e] [007aa722, 007aa73c] [007aa751, 007aa88c]]


void FUN_007aa580(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int in_ECX;
  undefined1 local_8c [28];
  undefined1 local_70 [28];
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43313;
  local_10 = ExceptionList;
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  bVar2 = false;
  iVar4 = *(int *)(iVar1 + 0x4c4);
  do {
    iVar3 = iVar4;
    if (iVar3 == 0) goto LAB_007aa5eb;
    iVar4 = *(int *)(iVar3 + 0x2c);
  } while ((*(char *)(iVar3 + 0x1c) == '\0') || (*(int *)(iVar3 + 0x24) != *(int *)(in_ECX + 0x5c)))
  ;
  bVar2 = true;
LAB_007aa5eb:
  local_18 = *(int *)(in_ECX + 0x5c);
  if (local_18 == 0) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("start",5);
    local_8 = 0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("selected_tech_window",0x14);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_38);
  }
  else {
    if (bVar2) {
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (uint)local_54[0]._1_3_ << 8;
      ExceptionList = &local_10;
      FUN_00409350("start",5);
      local_8 = 2;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("selected_tech_window",0x14);
      local_8 = CONCAT31(local_8._1_3_,3);
    }
    else {
      if (*(int *)(*(int *)(*(int *)(iVar1 + 0xbcc) + 0x2b8) + *(int *)(local_18 + 0x2e4) * 4) == 0)
      {
        if (*(char *)(iVar1 + 0x12d0) == '\0') {
          ExceptionList = &local_10;
          FUN_009885d0();
          local_8 = 6;
          FUN_009885d0();
          local_8 = CONCAT31(local_8._1_3_,7);
          piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_54);
          piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_38);
          (**(code **)(*piVar6 + 0xbc))();
          FUN_00408ad0();
        }
        else {
          ExceptionList = &local_10;
          local_14 = in_ECX;
          cVar5 = FUN_00569920();
          if (cVar5 == '\0') {
            FUN_009885d0();
            local_8 = 10;
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            piVar6 = (int *)(**(code **)(**(int **)(local_14 + 0x4c) + 0x6c))(local_70);
            piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_8c);
            (**(code **)(*piVar6 + 0xbc))();
            FUN_00408ad0();
          }
          else {
            FUN_009885d0();
            local_8 = 8;
            FUN_009885d0();
            local_8 = CONCAT31(local_8._1_3_,9);
            piVar6 = (int *)(**(code **)(**(int **)(local_14 + 0x4c) + 0x6c))(local_54);
            piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_38);
            (**(code **)(*piVar6 + 0xb8))();
            FUN_00408ad0();
          }
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return;
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (uint)local_54[0]._1_3_ << 8;
      ExceptionList = &local_10;
      FUN_00409350("start",5);
      local_8 = 4;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("selected_tech_window",0x14);
      local_8 = CONCAT31(local_8._1_3_,5);
    }
    piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_38);
  }
  piVar6 = (int *)(**(code **)(*piVar6 + 0x34))(local_54);
  (**(code **)(*piVar6 + 0xbc))();
  if (local_24 < 0x10) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

