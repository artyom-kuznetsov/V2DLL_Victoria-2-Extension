// FUN_006f7cd0 @ 006f7cd0 body=[[006f7cd0, 006f7e37]]


void FUN_006f7cd0(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *local_38;
  undefined1 **local_34;
  undefined1 *local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x244) != 4) {
    ExceptionList = &local_14;
    if (*(int *)(param_1 + 0x228) == 0 && *(int *)(param_1 + 0x22c) == 0) {
      local_34 = (undefined1 **)0x6f7d1a;
      ExceptionList = &local_14;
      cVar4 = FUN_00561fe0();
      if (cVar4 != '\0') {
        ExceptionList = local_14;
        return;
      }
    }
    if (*(char *)(param_1 + 0x248) != '\0') {
      local_34 = &local_20;
      local_38 = (undefined1 *)0x6f7d40;
      FUN_004a5020();
      if ((-1 < local_1c) && ((0 < local_1c || (local_20 != (undefined1 *)0x0)))) {
        iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
        puVar1 = *(undefined1 **)(iVar6 + 0xe78);
        iVar6 = *(int *)(iVar6 + 0xe7c);
        puVar5 = local_20 + -(int)*(undefined1 **)(param_1 + 0x228);
        uVar2 = (uint)(local_20 < *(undefined1 **)(param_1 + 0x228));
        iVar3 = local_1c - *(int *)(param_1 + 0x22c);
        iVar8 = iVar3 - uVar2;
        if ((-1 < iVar8) &&
           ((((iVar8 != 0 && SBORROW4(local_1c,*(int *)(param_1 + 0x22c)) == SBORROW4(iVar3,uVar2)
              || (puVar5 != (undefined1 *)0x0)) && (iVar8 <= iVar6)) &&
            ((iVar8 < iVar6 || (puVar5 < puVar1)))))) {
          local_34 = (undefined1 **)0x50;
          local_38 = (undefined1 *)0x6f7dc4;
          local_20 = puVar1;
          local_1c = iVar6;
          iVar6 = FUN_00aae9af();
          local_c = 0;
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            local_20 = (undefined1 *)&local_38;
            local_38 = puVar5;
            local_34 = (undefined1 **)iVar8;
            uVar7 = FUN_004d0050();
            uVar7 = FUN_00588650(iVar6,uVar7);
          }
          local_c = 0xffffffff;
          local_34 = (undefined1 **)0x6f7e19;
          iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          local_38 = (undefined1 *)0x6f7e24;
          local_34 = (undefined1 **)uVar7;
          (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))();
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

