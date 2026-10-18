// FUN_0079e8f0 @ 0079e8f0 body=[[0079e8f0, 0079e9bb]]


void FUN_0079e8f0(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e412;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)param_1[1];
  if ((in_ECX < puVar2) && (puVar1 = (undefined4 *)*param_1, puVar1 <= in_ECX)) {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)param_1[2]) {
      ExceptionList = &local_10;
      FUN_0079ea70();
    }
    puVar2 = (undefined4 *)param_1[1];
    in_ECX = (undefined4 *)((((int)in_ECX - (int)puVar1) / 0x2c) * 0x2c + *param_1);
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)param_1[2]) {
      ExceptionList = &local_10;
      FUN_0079ea70();
    }
    puVar2 = (undefined4 *)param_1[1];
    local_8 = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *in_ECX;
    puVar2[1] = in_ECX[1];
    puVar2[2] = in_ECX[2];
    puVar2[8] = 0xf;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 3) = 0;
    FUN_00408ed0(in_ECX + 3,0,0xffffffff);
    puVar2[10] = in_ECX[10];
  }
  param_1[1] = param_1[1] + 0x2c;
  ExceptionList = local_10;
  return;
}

