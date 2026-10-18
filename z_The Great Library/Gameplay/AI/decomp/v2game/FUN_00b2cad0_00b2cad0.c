// FUN_00b2cad0 @ 00b2cad0 body=[[00b2cad0, 00b2cbac]]


int FUN_00b2cad0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = FUN_00b2b7e0(param_1,&local_c);
  if (iVar1 == 0) {
    while (local_c >> 0x1f == local_8) {
      switch(local_c) {
      case 0:
        return 0;
      default:
        goto switchD_00b2cb17_caseD_1;
      case 6:
        iVar1 = FUN_00b2bbb0(param_1,param_2,param_3,param_3 + 4,param_3 + 8,param_3 + 0xc,param_8);
        break;
      case 7:
        iVar1 = FUN_00b2c3b0(param_1,param_3 + 0x10,param_3 + 0x14,param_8,param_9);
        break;
      case 8:
        iVar1 = FUN_00b2c6b0(param_1,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x14)
                             ,param_4,param_5,param_6,param_7,param_9);
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_00b2b7e0(param_1,&local_c);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
switchD_00b2cb17_caseD_1:
    iVar1 = -0x7fffbffb;
  }
  return iVar1;
}

