// FUN_00576d10 @ 00576d10  (requested 00576D10, first bytes: 55 8B EC 6A FF 68 2C FC)


void FUN_00576d10(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fc2c;
  local_10 = ExceptionList;
  local_8 = 10;
  ExceptionList = &local_10;
  FUN_0057b1c0();
  piVar4 = (int *)*param_1;
  iVar3 = param_1[1] - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  FUN_0057b240();
  piVar4 = (int *)param_1[0x19];
  iVar3 = param_1[0x1a] - (int)piVar4 >> 2;
  if (iVar3 != 0) {
    piVar1 = piVar4 + iVar3;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar4)(1);
      }
    }
  }
  FUN_0057afc0(param_1 + 0x1d);
  FUN_0057afc0(param_1 + 4);
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)param_1[1]) {
    FID_conflict__memcpy(pvVar2,(void *)param_1[1],0);
    param_1[1] = (int)pvVar2;
  }
  FUN_0057afc0(param_1 + 0xb);
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)param_1[8]) {
    FID_conflict__memcpy(pvVar2,(void *)param_1[8],0);
    param_1[8] = (int)pvVar2;
  }
  FUN_0057afc0(param_1 + 0x12);
  pvVar2 = (void *)param_1[0xe];
  if (pvVar2 != (void *)param_1[0xf]) {
    FID_conflict__memcpy(pvVar2,(void *)param_1[0xf],0);
    param_1[0xf] = (int)pvVar2;
  }
  FUN_0057afc0(param_1 + 0x24);
  FUN_00aaea59(param_1[0x26]);
  if (param_1[0x20] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x20]);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_0057afc0(param_1 + 0x1d);
  FUN_00aaea59(param_1[0x1f]);
  if (param_1[0x19] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x19]);
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (param_1[0x15] == 0) {
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    FUN_0057afc0(param_1 + 0x12);
    FUN_00aaea59(param_1[0x14]);
    if (param_1[0xe] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_1[0xe]);
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    FUN_0057afc0(param_1 + 0xb);
    FUN_00aaea59(param_1[0xd]);
    if (param_1[7] == 0) {
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      FUN_0057afc0(param_1 + 4);
      FUN_00aaea59(param_1[6]);
      if (*param_1 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[7]);
  }
  FUN_00413860();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x15]);
}

