// FUN_00a6a9f0 @ 00a6a9f0 body=[[00a6a9f0, 00a6aa89] [00a6aac4, 00a6aac6]]


void FUN_00a6a9f0(undefined4 *param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d8c0;
  pvStack_10 = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  uVar2 = *(int *)(param_4[1] + 0x100) - 1U & param_3 >> 3;
  ExceptionList = &pvStack_10;
  if (uVar2 == 0) {
    local_8 = 0;
    ExceptionList = &pvStack_10;
    puVar3 = (undefined4 *)(**(code **)(*param_4 + 4))();
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  local_8 = 0xffffffff;
  if (param_1[3] != (param_3 & 0xfffffff8)) {
    FUN_00a6b230(param_3 & 0xfffffff8,param_4[1]);
  }
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)param_1[2];
  }
  else {
    uVar1 = FUN_009c12d0();
    if ((undefined4 *)param_1[2] < (undefined4 *)0x2) {
      *param_1 = puVar3;
    }
    else {
      *(undefined4 *)param_1[2] = puVar3;
    }
    param_1[2] = puVar3;
    if (param_1 + 4 != (undefined4 *)0x0) {
      *(undefined1 *)(param_1 + 4) = uVar1;
    }
  }
  if (puVar3 + uVar2 + 2 != (undefined4 *)0x0) {
    puVar3[uVar2 + 2] = *param_2;
  }
  puVar3[1] = puVar3[1] | 1 << ((byte)uVar2 & 0x1f);
  LOCK();
  param_1[3] = param_1[3] + 8;
  UNLOCK();
  ExceptionList = pvStack_10;
  return;
}

