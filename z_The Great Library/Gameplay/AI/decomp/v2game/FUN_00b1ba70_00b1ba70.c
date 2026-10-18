// FUN_00b1ba70 @ 00b1ba70 body=[[00b1ba70, 00b1bc02]]


undefined4
FUN_00b1ba70(undefined4 param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 auStack_40 [7];
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39fa6;
  local_c = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  FUN_00b19de0(uVar3);
  local_4 = 0;
  cVar2 = FUN_00b19e10(param_1,0);
  if (cVar2 != '\0') {
    FUN_00b19de0(uVar3);
    local_4._0_1_ = 1;
    cVar2 = FUN_00b19e10(param_2,1);
    if (cVar2 != '\0') {
      uVar4 = FUN_00b1a020();
      uVar5 = (*(code *)PTR_FUN_00f01b08)(uVar4,0,4,0,0,0);
      FUN_00b19ff0(uVar5,uVar4);
      FUN_00b19ee0();
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uVar4;
      }
      param_1 = 0;
      FUN_00b1b8c0(uVar5,uVar4,&param_1,&param_2,param_5);
      (*(code *)PTR__free_00f01b10)(uVar5);
      iVar1 = param_2;
      if (param_4 != (int *)0x0) {
        *param_4 = param_2 + 0x408;
      }
      FUN_00b1b3c0(local_24);
      auStack_40[0] = uVar4;
      FUN_00b1ad70(auStack_40,1);
      FUN_00b19fc0(auStack_40,4);
      uVar4 = param_1;
      FUN_00b19fc0(param_1,iVar1);
      FUN_00b19ee0();
      (*(code *)PTR__free_00f01b10)(uVar4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00b1a080();
      local_4 = 0xffffffff;
      FUN_00b1a080();
      ExceptionList = local_c;
      return 1;
    }
    FUN_00b19ee0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00b1a080();
  }
  local_4 = 0xffffffff;
  FUN_00b1a080();
  ExceptionList = local_c;
  return 0;
}

