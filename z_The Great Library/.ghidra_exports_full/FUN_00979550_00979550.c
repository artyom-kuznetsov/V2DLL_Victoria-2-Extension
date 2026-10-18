// FUN_00979550 @ 00979550 body=[[00979550, 009795f3] [009795f7, 00979607]]


undefined1 * FUN_00979550(undefined1 *param_1)

{
  char cVar1;
  LPSTR pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a6e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14 = 1;
  pCVar2 = GetCommandLineA();
  iVar3 = FUN_00aafe90(pCVar2,"-mod ");
  if (iVar3 != 0) {
    pcVar4 = (char *)(iVar3 + 4);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(iVar3 + 4),(int)pcVar4 - (iVar3 + 5));
    uVar5 = FUN_00989330(local_30);
    local_8 = 1;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

