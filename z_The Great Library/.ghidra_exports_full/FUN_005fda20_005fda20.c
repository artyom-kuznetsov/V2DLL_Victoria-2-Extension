// FUN_005fda20 @ 005fda20 body=[[005fda20, 005fdac8] [005fdacc, 005fdb48] [005fdb4c, 005fdbf8]]


undefined4 * FUN_005fda20(undefined4 *param_1,int *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51257;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(param_3,(int)pcVar2 - (int)(param_3 + 1));
  local_8 = 0;
  piVar3 = (int *)(**(code **)(*param_2 + 0x34))();
  iVar4 = (**(code **)(*piVar3 + 0x48))(local_30);
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(iVar4 + 0x24,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(param_1 + 1,param_1);
  local_8._0_1_ = 3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_38 = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  *param_1 = CLoanDialog::vftable;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(param_3,(int)pcVar2 - (int)(param_3 + 1));
  local_8._0_1_ = 4;
  piVar3 = (int *)(**(code **)(*param_2 + 0x34))();
  local_14 = (undefined4 *)(*piVar3 + 0x2c);
  uVar5 = (**(code **)(*param_2 + 0x3c))();
  uVar5 = (*(code *)*local_14)(local_4c,uVar5);
  param_1[8] = uVar5;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  param_1[9] = param_2;
  param_1[10] = CButtonObserverGlue<CLoanDialog>::vftable;
  param_1[0xb] = param_1;
  param_1[0xc] = FUN_005fe040;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = CButtonObserverGlue<CLoanDialog>::vftable;
  param_1[0x16] = param_1;
  param_1[0x17] = FUN_005fe070;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_8._0_1_ = 6;
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(param_3,(int)pcVar2 - (int)(param_3 + 1));
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_005fdec0();
  ExceptionList = local_10;
  return param_1;
}

