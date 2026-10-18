// FUN_00445260 @ 00445260 body=[[00445260, 00445346] [0044536f, 004453a8]]


undefined4 * FUN_00445260(char *param_1,int *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_40;
  undefined1 local_3c [4];
  undefined4 *local_38;
  int local_28;
  undefined4 local_24;
  undefined **local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d712;
  local_10 = ExceptionList;
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar2 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  if ((puVar4 != *(undefined4 **)(param_1 + 4)) && ((int)puVar4[3] <= *param_2)) {
    return puVar4 + 4;
  }
  local_24 = 0;
  ExceptionList = &local_10;
  local_28 = FUN_00aae9af(0x18);
  if (local_28 != 0) {
    *(int *)local_28 = local_28;
    *(int *)(local_28 + 4) = local_28;
    *(int *)(local_28 + 8) = local_28;
    *(undefined1 *)(local_28 + 0x14) = 1;
    *(undefined1 *)(local_28 + 0x15) = 1;
    local_8 = 0;
    local_40 = *param_2;
    FUN_00445a00(local_3c);
    local_8._0_1_ = 1;
    FUN_00445c60(&local_40);
    FUN_00445ac0(pcVar1,puVar4);
    param_2 = (int *)local_3c;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00445600(*local_38,local_38);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_1c,&param_1);
  local_1c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_1c,&DAT_00e6fb20);
}

