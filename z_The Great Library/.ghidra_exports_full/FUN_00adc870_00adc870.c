// FUN_00adc870 @ 00adc870 body=[[00adc870, 00adc9b1]]


int FUN_00adc870(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3777a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(in_ECX + 0x34) != '\0') {
    FUN_00b15e10("- Trying to load actor from file \'%s\'...",param_1,
                 DAT_00ef259c ^ (uint)&stack0xffffffcc);
  }
  FUN_00b19de0();
  local_4 = 0;
  cVar1 = FUN_00b19e10(param_1,0);
  if (cVar1 == '\0') {
    if (*(char *)(in_ECX + 0x34) != '\0') {
      FUN_00b15d30("  + Failed to open the file for actor \'%s\', actor not loaded!",param_1);
    }
    local_4 = 0xffffffff;
    FUN_00b1a080();
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_00b1a020();
    uVar4 = (*(code *)PTR_FUN_00f01b08)(uVar3,600,0x10,0,0,0);
    FUN_00b19ff0(uVar4,uVar3);
    FUN_00b19ee0();
    iVar2 = FUN_00adc3e0(uVar4,uVar3,param_2);
    if (iVar2 != 0) {
      FUN_00ad4750(param_1);
    }
    (*(code *)PTR__free_00f01b10)(uVar4);
    if (iVar2 == 0) {
      if (*(char *)(in_ECX + 0x34) != '\0') {
        FUN_00b15d30("   + Failed to load actor from file \'%s\'",param_1);
      }
    }
    else if (*(char *)(in_ECX + 0x34) != '\0') {
      FUN_00b15e10("  + Loading successfully finished");
    }
    local_4 = 0xffffffff;
    FUN_00b1a080();
  }
  ExceptionList = local_c;
  return iVar2;
}

