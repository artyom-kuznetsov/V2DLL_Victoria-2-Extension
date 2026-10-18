// FUN_00492560 @ 00492560 body=[[00492560, 00492655]]


void FUN_00492560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  if (param_2 == 0x2a7) {
    param_2 = -1;
    ExceptionList = &local_10;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    if (DAT_0125ce80 == 0) {
      iVar1 = FUN_00aae9af(0x3c);
      local_8 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004dada0();
      }
      FUN_004dc340(uVar2);
    }
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(*(int *)(DAT_0125ce80 + 0xc) + param_2 * 4);
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0x42e) {
    ExceptionList = &local_10;
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x5c) = uVar2;
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_00491280(param_1,param_2);
  ExceptionList = local_10;
  return;
}

