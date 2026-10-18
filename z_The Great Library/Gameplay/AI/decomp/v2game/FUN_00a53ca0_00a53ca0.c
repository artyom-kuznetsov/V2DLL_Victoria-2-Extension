// FUN_00a53ca0 @ 00a53ca0 body=[[00a53ca0, 00a53d1d] [00a53d21, 00a53da7] [00a53db0, 00a53edb]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a53ca0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  short sStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b44d98;
  local_14 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("linechart",9);
  local_c = 0;
  FUN_009be510(param_1 + 0x6bcfc,in_ECX + 100,&local_48,*(undefined4 *)(param_1 + 100));
  local_c = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  if (DAT_013f053c == 0) {
    (**(code **)(**(int **)(param_1 + 100) + 0x158))
              (*(int **)(param_1 + 100),&DAT_00f073e8,&DAT_01258b60);
    DAT_013f0544 = 1;
    _DAT_013f0550 = 0;
    FUN_009f9630(&DAT_013f0530,*(undefined4 *)(param_1 + 100),0xf0,8,0,0);
    if (DAT_013f0530 == (int *)0x0) {
      unaff_EDI = 0;
    }
    else {
      uVar2 = 0;
      if ((DAT_013f0545 != '\0') && (DAT_013f0546 == '\0')) {
        uVar2 = 0x2000;
      }
      (**(code **)(*DAT_013f0530 + 0x2c))(DAT_013f0530,0,0,&stack0xffffffa8,uVar2);
    }
    iVar4 = 0;
    puVar1 = (undefined4 *)(unaff_EDI + 0x10);
    do {
      sStack_2c = (short)iVar4;
      sVar3 = sStack_2c + 1;
      uStack_4c = CONCAT22(0xffff,sVar3);
      local_48 = 1;
      local_34 = CONCAT22(0xffff,sVar3);
      uStack_44 = CONCAT22(1,sStack_2c);
      uStack_30 = 0x1ffff;
      uStack_26 = 1;
      uStack_40 = 0xffff;
      puVar1[-4] = CONCAT22(1,sStack_2c);
      puVar1[-3] = 0x10001;
      uStack_3c = CONCAT22(0xffff,sVar3);
      puVar1[-2] = uStack_4c;
      puVar1[-1] = 1;
      *puVar1 = uStack_44;
      puVar1[1] = 0xffff;
      local_38 = 1;
      puVar1[2] = uStack_3c;
      puVar1[3] = 1;
      uStack_2a = 1;
      uStack_28 = 1;
      puVar1[4] = local_34;
      puVar1[5] = 0x1ffff;
      puVar1[6] = CONCAT22(1,sStack_2c);
      puVar1[7] = 0x10001;
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar4 < 0x28);
    (**(code **)(*DAT_013f0530 + 0x30))(DAT_013f0530);
  }
  ExceptionList = local_14;
  return;
}

