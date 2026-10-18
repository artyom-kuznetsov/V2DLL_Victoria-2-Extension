// FUN_0064e890 @ 0064e890 body=[[0064e890, 0064e925] [0064e929, 0064e947] [0064e94b, 0064e9ab] [0064e9af, 0064e9f9]]


void FUN_0064e890(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45588;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messagelog",10);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("messagelog_window",0x11);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_30);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(local_4c);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))();
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_38 < 0x10) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    piVar1 = (int *)*piVar1;
    if (piVar1 != (int *)0x0) {
      while( true ) {
        local_8 = 0xffffffff;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        FUN_00409350("messagelogbutton",0x10);
        local_8 = 2;
        iVar2 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x34))(local_68);
        local_11 = param_1 == iVar2;
        local_8 = 0xffffffff;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if ((bool)local_11) break;
        piVar1 = (int *)piVar1[2];
        local_11 = 0;
        if (piVar1 == (int *)0x0) {
          ExceptionList = local_10;
          return;
        }
      }
      if (*piVar1 != 0) {
        (**(code **)(**(int **)(*piVar1 + 0x28) + 8))();
      }
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

