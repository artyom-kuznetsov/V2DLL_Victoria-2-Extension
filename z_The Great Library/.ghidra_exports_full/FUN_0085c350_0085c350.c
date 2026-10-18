// FUN_0085c350 @ 0085c350 body=[[0085c350, 0085c4a6] [0085c4aa, 0085c4bc]]


/* WARNING: Removing unreachable block (ram,0x0085c3b8) */

void FUN_0085c350(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000024;
  undefined1 *in_stack_00000028;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3ea83;
  local_8 = 0;
  local_10 = ExceptionList;
  ppvVar2 = &local_10;
  if (in_stack_00000028 != (undefined1 *)0x0) {
    piVar1 = (int *)*param_1;
    ppvVar2 = &local_10;
    do {
      do {
        ExceptionList = ppvVar2;
        if (piVar1 == (int *)0x0) {
          local_24 = (int *)0x2c;
          puStack_28 = (undefined4 *)0x85c404;
          iVar3 = FUN_00aae9af();
          puVar5 = (undefined4 *)0x0;
          local_8._0_1_ = 1;
          if (iVar3 != 0) {
            local_24 = (int *)in_stack_00000028;
            in_stack_00000028 = local_40;
            local_2c = 0xf;
            local_30 = 0;
            local_40[0] = 0;
            FUN_00408ed0(&param_2,0,0xffffffff);
            puVar5 = (undefined4 *)FUN_0085a260(iVar3);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          in_stack_00000024 = puVar5;
          goto LAB_0085c44c;
        }
        puVar5 = (undefined4 *)*piVar1;
        piVar1 = (int *)piVar1[2];
        ppvVar2 = ExceptionList;
      } while ((undefined4 *)puVar5[2] != in_stack_00000024);
      uVar4 = puVar5[7];
      local_24 = (int *)in_stack_00000018;
      if (uVar4 < in_stack_00000018) {
        local_24 = (int *)uVar4;
      }
      puStack_28 = (undefined4 *)0x85c3d4;
      iVar3 = FUN_00414bd0();
      bVar6 = false;
      if (iVar3 == 0) {
        if (uVar4 < in_stack_00000018) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != in_stack_00000018);
        }
        bVar6 = uVar4 == 0;
      }
      ppvVar2 = ExceptionList;
    } while (!bVar6);
    puVar5[10] = in_stack_00000028 + puVar5[10];
    for (local_24 = (int *)*param_1; (local_24 != (int *)0x0 && ((undefined4 *)*local_24 != puVar5))
        ; local_24 = (int *)local_24[2]) {
    }
    puStack_28 = (undefined4 *)0x85c48c;
    in_stack_00000024 = puVar5;
    FUN_005f2ae0();
LAB_0085c44c:
    if ((int)puVar5[10] < 1) {
      local_24 = (int *)0x1;
      puStack_28 = (undefined4 *)0x85c498;
      (**(code **)*puVar5)();
      ppvVar2 = ExceptionList;
    }
    else {
      local_24 = (int *)&stack0x00000024;
      puStack_28 = param_1;
      local_2c = 0x85c45f;
      FUN_008601f0();
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = ppvVar2;
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_28 = (undefined4 *)&UNK_0085c4a7;
  local_24 = (int *)param_2;
  FUN_00aae91b();
}

