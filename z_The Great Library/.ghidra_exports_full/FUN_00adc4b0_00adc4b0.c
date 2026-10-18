// FUN_00adc4b0 @ 00adc4b0 body=[[00adc4b0, 00adc687]]


int FUN_00adc4b0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  void *local_30;
  size_t local_2c;
  undefined4 local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3772c;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_c;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    local_30 = (void *)0x0;
    local_2c = 0;
    local_28 = 0;
    if (param_1 != (char *)0x0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00b13660((int)pcVar3 - (int)(param_1 + 1),0);
      if (local_30 != (void *)0x0) {
        FID_conflict__memcpy(local_30,param_1,local_2c);
      }
    }
    local_4 = 0;
    iVar4 = FUN_00ae3180(&local_30);
    local_4 = 0xffffffff;
    FUN_00b13650();
    if (iVar4 != 0) {
      FUN_00b15e10("  + Motion \'%s\' already loaded, returning already loaded motion from the MotionManager."
                   ,param_1,uVar2);
      ExceptionList = local_c;
      return iVar4;
    }
  }
  if (*(char *)(in_ECX + 0x34) != '\0') {
    FUN_00b15e10("- Trying to load skeletal motion from file \'%s\'...",param_1,uVar2);
  }
  FUN_00b19de0();
  local_4 = 1;
  cVar1 = FUN_00b19e10(param_1,0);
  if (cVar1 == '\0') {
    if (*(char *)(in_ECX + 0x34) != '\0') {
      FUN_00b15d30("  + Failed open the file for skeletal motion!");
    }
    local_4 = 0xffffffff;
    FUN_00b1a080();
    iVar4 = 0;
  }
  else {
    uVar5 = FUN_00b1a020();
    uVar6 = (*(code *)PTR_FUN_00f01b08)(uVar5,600,0x10,0,0,0);
    FUN_00b19ff0(uVar6,uVar5);
    FUN_00b19ee0();
    iVar4 = FUN_00adc150(uVar6,uVar5,param_2);
    if (iVar4 != 0) {
      FUN_00b072d0(param_1);
    }
    (*(code *)PTR__free_00f01b10)(uVar6);
    if (iVar4 == 0) {
      if (*(char *)(in_ECX + 0x34) != '\0') {
        FUN_00b15d30("  + Failed to load skeletal motion from file \'%s\'",param_1);
      }
    }
    else if (*(char *)(in_ECX + 0x34) != '\0') {
      FUN_00b15e10("  + Loading successfully finished");
    }
    local_4 = 0xffffffff;
    FUN_00b1a080();
  }
  ExceptionList = local_c;
  return iVar4;
}

