// FUN_009895f0 @ 009895f0 body=[[009895f0, 00989673] [00989677, 00989688]]


void FUN_009895f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  int in_EDX;
  undefined1 *unaff_EDI;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (*(int *)(in_EDX + 0x10) < param_1) {
    param_1 = *(int *)(in_EDX + 0x10);
  }
  ExceptionList = &local_10;
  pcVar2 = (char *)FUN_00989b50(param_1 - in_ECX);
  local_8 = 0;
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar2 = *(char **)pcVar2;
  }
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c);
}

