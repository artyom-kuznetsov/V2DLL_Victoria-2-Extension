// FUN_008ce560 @ 008ce560 body=[[008ce560, 008ce5fa]]


int * FUN_008ce560(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar2 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar3);
  }
  piVar4 = (int *)FUN_004dc420(param_1 + 0x1c);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_004dacc0();
  }
  cVar1 = (**(code **)(*piVar4 + 0x24))();
  if (cVar1 == '\0') {
    uVar3 = FUN_004da1c0();
    *param_2 = uVar3;
  }
  ExceptionList = local_10;
  return piVar4;
}

