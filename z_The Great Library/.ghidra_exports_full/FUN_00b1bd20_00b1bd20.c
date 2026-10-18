// FUN_00b1bd20 @ 00b1bd20 body=[[00b1bd20, 00b1becb]]


undefined4 FUN_00b1bd20(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_40;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39fd1;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  FUN_00b19de0(uVar4);
  local_4 = 0;
  cVar3 = FUN_00b19e10(param_1,0);
  if (cVar3 != '\0') {
    FUN_00b19de0(uVar4);
    local_4._0_1_ = 1;
    cVar3 = FUN_00b19e10(param_2,1);
    if (cVar3 != '\0') {
      FUN_00b1bc10(local_3c);
      FUN_00b19ff0(&local_40,4);
      uVar1 = (undefined1)local_40;
      uVar2 = local_40._1_1_;
      local_40._0_2_ = CONCAT11(local_40._2_1_,local_40._3_1_);
      local_40 = CONCAT13(uVar1,CONCAT12(uVar2,(undefined2)local_40));
      iVar5 = FUN_00b1a020();
      uVar6 = (*(code *)PTR_FUN_00f01b08)(iVar5,0,4,0,0,0);
      FUN_00b19ff0(uVar6,iVar5);
      FUN_00b19ee0();
      if (param_3 != (int *)0x0) {
        *param_3 = iVar5 + 0x408;
      }
      uVar7 = (*(code *)PTR_FUN_00f01b08)(local_40,0,4,0,0,0);
      FUN_00b1b010(uVar6,iVar5,uVar7,&param_1);
      (*(code *)PTR__free_00f01b10)(uVar6);
      FUN_00b19fc0(uVar7,param_1);
      FUN_00b19ee0();
      (*(code *)PTR__free_00f01b10)(uVar7);
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

