// FUN_00aa91c0 @ 00aa91c0 body=[[00aa91c0, 00aa9286]]


void FUN_00aa91c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b365f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00aa90a0(1);
    }
    param_1 = (undefined4 *)(*in_ECX + (((int)param_1 - (int)puVar2) / 0x14) * 0x14);
    local_8 = 0;
    if ((undefined4 *)in_ECX[1] == (undefined4 *)0x0) goto LAB_00aa9270;
    *(undefined4 *)in_ECX[1] = *param_1;
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00aa90a0(1);
    }
    local_8 = 1;
    if ((undefined4 *)in_ECX[1] == (undefined4 *)0x0) goto LAB_00aa9270;
    *(undefined4 *)in_ECX[1] = *param_1;
  }
  FUN_00aa8740(param_1 + 1);
LAB_00aa9270:
  in_ECX[1] = in_ECX[1] + 0x14;
  ExceptionList = local_10;
  return;
}

