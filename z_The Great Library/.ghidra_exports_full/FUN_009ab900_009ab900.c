// FUN_009ab900 @ 009ab900 body=[[009ab900, 009ab9d7]]


void FUN_009ab900(undefined4 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5de25;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined8 *)FUN_00aae9af(0x34);
  local_18 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    local_3c = *param_1;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    FUN_009aa7c0(&local_3c,param_2);
    local_8 = CONCAT31(local_8._1_3_,3);
    *puVar1 = *param_3;
    local_14 = 1;
    puVar1[1] = param_3[1];
    FUN_009aa260(puVar1 + 2,&local_3c);
  }
  local_8 = 4;
  FUN_0068f390();
  local_8 = 0xffffffff;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_009aa1c0(&local_3c);
  }
  ExceptionList = local_10;
  return;
}

