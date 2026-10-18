// FUN_00b1f410 @ 00b1f410 body=[[00b1f410, 00b1f5ae]]


undefined4 FUN_00b1f410(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3a157;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  uVar6 = 0;
  if (param_1[1] != 0) {
    do {
      FUN_00b13650(uVar4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_1 != 0) {
    (*(code *)PTR__free_00f01b10)(*param_1);
    *param_1 = 0;
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00b136d0(param_2);
  cVar3 = FUN_00b1f1f0(&local_18,param_2);
  while (cVar3 == '\x01') {
    iVar2 = param_1[1];
    uVar4 = iVar2 + 1;
    param_1[1] = uVar4;
    if ((uint)param_1[2] < uVar4) {
      iVar2 = iVar2 + 2;
      if (iVar2 == 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        if (*param_1 != 0) {
          (*(code *)PTR__free_00f01b10)(*param_1);
          *param_1 = 0;
        }
      }
      else {
        if (*param_1 == 0) {
          iVar5 = (*(code *)PTR_FUN_00f01b08)(iVar2 * 0xc,(short)param_1[3],4,2,0,0xffffffff);
        }
        else {
          iVar5 = (*(code *)PTR_FUN_00f01b0c)(*param_1,iVar2 * 0xc);
        }
        *param_1 = iVar5;
        param_1[2] = iVar2;
      }
    }
    puVar1 = (undefined4 *)(*param_1 + (param_1[1] + -1) * 0xc);
    local_4._0_1_ = 1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      if (local_18 != (void *)0x0) {
        FUN_00b13660(local_14,0);
        if ((void *)*puVar1 != (void *)0x0) {
          FID_conflict__memcpy((void *)*puVar1,local_18,local_14 + 1);
        }
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    cVar3 = FUN_00b1f1f0(&local_18,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return 1;
}

