// FUN_00a804f0 @ 00a804f0 body=[[00a804f0, 00a80598]]


void * FUN_00a804f0(uint *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *in_ECX;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e412;
  local_10 = ExceptionList;
  pvVar1 = (void *)param_1[1];
  pvVar2 = ExceptionList;
  if ((in_ECX < pvVar1) && (pvVar2 = (void *)*param_1, pvVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (pvVar1 == (void *)param_1[2]) {
      ExceptionList = &local_10;
      FUN_00a805a0();
    }
    pvVar2 = (void *)((((int)in_ECX - (int)pvVar2) / 0x3c) * 0xf);
    uVar3 = param_1[1];
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (pvVar1 == (void *)param_1[2]) {
      ExceptionList = &local_10;
      pvVar2 = (void *)FUN_00a805a0();
    }
    uVar3 = param_1[1];
    local_8 = 1;
  }
  if (uVar3 != 0) {
    pvVar2 = (void *)FUN_00a80870();
  }
  param_1[1] = param_1[1] + 0x3c;
  ExceptionList = local_10;
  return pvVar2;
}

