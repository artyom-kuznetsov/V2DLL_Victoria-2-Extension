// FUN_009e8de0 @ 009e8de0 body=[[009e8de0, 009e8ebb]]


void FUN_009e8de0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a2a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3c734;
  local_8 = 0;
  FUN_009e96b0();
  Sleep(500);
  if (DAT_00f20c4c != (int *)0x0) {
    (**(code **)(*DAT_00f20c4c + 8))(DAT_00f20c4c);
    DAT_00f20c4c = (int *)0x0;
  }
  if (DAT_00f20c40 != (int *)0x0) {
    (**(code **)(*DAT_00f20c40 + 8))(DAT_00f20c40);
    DAT_00f20c40 = (int *)0x0;
  }
  if (DAT_00f20c44 != (int *)0x0) {
    (**(code **)(*DAT_00f20c44 + 8))(DAT_00f20c44);
    DAT_00f20c44 = (int *)0x0;
  }
  if (DAT_00f20c50 != (int *)0x0) {
    (**(code **)(*DAT_00f20c50 + 8))(DAT_00f20c50);
    DAT_00f20c50 = (int *)0x0;
  }
  if (ppv_00f20c58 != (LPVOID *)0x0) {
    (**(code **)((int)*ppv_00f20c58 + 8))(ppv_00f20c58);
    ppv_00f20c58 = (LPVOID *)0x0;
  }
  if (DAT_00f20c48 != (int *)0x0) {
    (**(code **)(*DAT_00f20c48 + 8))(DAT_00f20c48);
    DAT_00f20c48 = (int *)0x0;
  }
  *param_1 = &PTR_FUN_00e3c5b4;
  ExceptionList = local_10;
  return;
}

