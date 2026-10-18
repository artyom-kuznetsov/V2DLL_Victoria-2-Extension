// FUN_00a02d30 @ 00a02d30 body=[[00a02d30, 00a02dea] [00a02dee, 00a02e6f]]


/* WARNING: Removing unreachable block (ram,0x00a02de1) */

void FUN_00a02d30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3d918;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = FUN_009fabb0();
  if (cVar1 != '\0') {
    iVar2 = DAT_01258a94;
    if (DAT_00f0d838 < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_009c1d40();
    }
    FUN_00408ed0();
    local_c = 0;
    iVar3 = FUN_00a72560();
    local_c = 0xffffffff;
    piVar4 = *(int **)(iVar2 + 0x3c);
    while( true ) {
      if (piVar4 < *(int **)(iVar2 + 0x3c)) {
        ExceptionList = local_14;
        return;
      }
      if (*(int **)(iVar2 + 0x40) <= piVar4) {
        ExceptionList = local_14;
        return;
      }
      if (*piVar4 == *(int *)(in_ECX + 0x90)) break;
      piVar4 = piVar4 + 2;
    }
    if ((piVar4[1] != 0) && (iVar3 != 0)) {
      FUN_00408ed0(in_ECX + 0xbc,0,0xffffffff);
      FUN_00a182a0();
    }
  }
  ExceptionList = local_14;
  return;
}

