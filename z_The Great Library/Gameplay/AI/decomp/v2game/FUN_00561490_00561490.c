// FUN_00561490 @ 00561490 body=[[00561490, 00561544]]


void FUN_00561490(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af();
  local_8 = 0;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    DAT_012587f8 = DAT_012587f8 + 1;
    pcVar3 = (char *)(param_1 + 0x24);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
    piVar4 = (int *)FUN_00561260();
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0xc))();
  FUN_0068f390();
  ExceptionList = local_10;
  return;
}

