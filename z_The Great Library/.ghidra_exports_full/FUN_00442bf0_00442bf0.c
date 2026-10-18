// FUN_00442bf0 @ 00442bf0 body=[[00442bf0, 00442cc3] [00442cc7, 00442cd7]]


void FUN_00442bf0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int unaff_EDI;
  char local_4c [32];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f780;
  local_10 = ExceptionList;
  if (*(int *)(unaff_EDI + 0x34) != param_1) {
    ExceptionList = &local_10;
    *(int *)(unaff_EDI + 0x34) = param_1;
    FUN_00401000(0x43fa4001);
    iVar2 = FUN_00b31c00();
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    pcVar3 = __itoa((iVar2 + param_1) / 1000,local_4c,10);
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    local_8 = 1;
    FUN_00408ed0(local_2c,0,0xffffffff);
    FUN_00a5ecc0(local_2c,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

