// FUN_0087caf0 @ 0087caf0 body=[[0087caf0, 0087cb99]]


void FUN_0087caf0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00ba3b1e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((DAT_013f3548 & 1) == 0) {
    DAT_013f3548 = DAT_013f3548 | 1;
    local_c = 0;
    ExceptionList = &local_14;
    FUN_008a8650(0);
    _atexit((_func_4879 *)&DAT_00c84fb0);
  }
  local_c = 0xffffffff;
  FUN_00876240(*(undefined4 *)(in_ECX + 0x20));
  if (DAT_013f351c != '\0') {
    puVar1 = *(undefined4 **)(in_ECX + 8);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 0x2c))(&DAT_013f3500,0);
    }
  }
  ExceptionList = local_14;
  return;
}

