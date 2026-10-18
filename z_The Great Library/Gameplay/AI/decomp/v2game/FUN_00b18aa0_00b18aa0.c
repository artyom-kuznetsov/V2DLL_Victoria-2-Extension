// FUN_00b18aa0 @ 00b18aa0 body=[[00b18aa0, 00b18bdb]]


undefined4 FUN_00b18aa0(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *in_ECX;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39efb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  if (pcVar3 == param_1 + 1) {
    FUN_00b15d30("Cannot save to disk file. File name is empty.");
    ExceptionList = local_c;
    return 0;
  }
  cVar2 = (**(code **)(*in_ECX + 0x88))(DAT_00ef259c ^ (uint)&stack0xffffffd4);
  if (cVar2 == '\0') {
    FUN_00b15d30("Memory file not opened.");
    ExceptionList = local_c;
    return 0;
  }
  (**(code **)(*in_ECX + 0x84))(0);
  FUN_00b19de0();
  puStack_8 = (undefined1 *)0x0;
  cVar2 = FUN_00b19e10(param_1,1);
  if (cVar2 == '\0') {
    FUN_00b15d30("Cannot open file \'%s\' in write mode. Please check if the file is write protected. It might be in use by another application or it is read-only. Please try again after resolving any possible issues."
                 ,param_1);
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00b1a080();
    ExceptionList = pvStack_10;
    return 0;
  }
  iVar1 = in_ECX[1];
  uVar4 = (**(code **)(*in_ECX + 0x78))();
  FUN_00b19fc0(iVar1,uVar4);
  FUN_00b19ee0();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00b1a080();
  ExceptionList = pvStack_10;
  return 1;
}

