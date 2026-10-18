// FUN_0069fa10 @ 0069fa10 body=[[0069fa10, 0069fa3e] [0069fa40, 0069fad8] [0069fadc, 0069fb91]]


void FUN_0069fa10(int param_1,int *param_2)

{
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short local_14;
  short local_12;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d98;
  local_10 = ExceptionList;
  iVar5 = *param_2;
  ppvVar2 = &local_10;
  if (*param_2 == 0) {
    return;
  }
  do {
    ExceptionList = ppvVar2;
    local_18 = *(int *)(iVar5 + 0x20);
    if ((((*(int *)(iVar5 + 8) == 0) && (*(int *)(iVar5 + 0x10) == 5)) &&
        (*(int *)(iVar5 + 0x14) == 1)) &&
       (*(int *)(*(int *)(param_1 + 0x34) * 0x58 + 0xc + *(int *)(param_1 + 0x3c)) != 0)) {
      (**(code **)(**(int **)(iVar5 + 0xc) + 0x4c))(&local_20);
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      FUN_00409350("default_listbox",0xf);
      local_8 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x7c))(local_44);
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
      piVar3 = (int *)*puVar4;
      local_8 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      param_2 = (int *)0x0;
      while (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[2];
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x68))(&local_28);
        (**(code **)(**(int **)(iVar1 + 0x20) + 0x60))(&local_14);
        if (((local_28 <= local_20) && (local_20 <= local_14 + local_28)) &&
           ((local_24 <= local_1c && (local_1c <= local_12 + local_24)))) {
          (**(code **)(*(int *)(param_1 + 0x34) * 0x58 + 0xc + *(int *)(param_1 + 0x3c)))
                    (*(undefined4 *)(*(int *)(param_1 + 0x68) + (int)param_2 * 4));
          *(undefined1 *)(iVar5 + 0x18) = 1;
          ExceptionList = local_10;
          return;
        }
        param_2 = (int *)((int)param_2 + 1);
      }
    }
    iVar5 = local_18;
    ppvVar2 = ExceptionList;
    if (local_18 == 0) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

