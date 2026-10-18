// FUN_00b18970 @ 00b18970 body=[[00b18970, 00b18a98]]


undefined4 FUN_00b18970(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39ed8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == param_1 + 1) {
    FUN_00b15d30("Cannot load disk file. File name is empty.");
    ExceptionList = local_c;
    return 0;
  }
  FUN_00b19de0(DAT_00ef259c ^ (uint)&stack0xffffffd0);
  local_4 = 0;
  cVar1 = FUN_00b19e10(param_1,0);
  if (cVar1 == '\0') {
    FUN_00b15d30("Cannot open file \'%s\' in read mode. Please check if the file actually exists and try again."
                 ,param_1);
    local_4 = 0xffffffff;
    FUN_00b1a080();
    ExceptionList = local_c;
    return 0;
  }
  uVar3 = FUN_00b1a020();
  uVar4 = (*(code *)PTR_FUN_00f01b08)(uVar3,4,0x10,0,0,0);
  FUN_00b19ff0(uVar4,uVar3);
  FUN_00b19ee0();
  (**(code **)(*in_ECX + 0xc))(uVar4,uVar3);
  (*(code *)PTR__free_00f01b10)(uVar4);
  local_c = (void *)0xffffffff;
  FUN_00b1a080();
  ExceptionList = pvStack_14;
  return 1;
}

