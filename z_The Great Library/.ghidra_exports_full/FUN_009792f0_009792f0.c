// FUN_009792f0 @ 009792f0 body=[[009792f0, 00979369] [0097936d, 009793bb]]


void FUN_009792f0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined1 local_40 [12];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  pcVar3 = (char *)(param_1 + 0x24);
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
  local_c = 0;
  iVar4 = FUN_00973bd0(local_34);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (iVar4 != 0) {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x10) + *(int *)(iVar4 + 0x28) * 8);
    puVar5 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_40);
    *puVar1 = *puVar5;
    puVar1[1] = puVar5[1];
  }
  ExceptionList = local_14;
  return;
}

