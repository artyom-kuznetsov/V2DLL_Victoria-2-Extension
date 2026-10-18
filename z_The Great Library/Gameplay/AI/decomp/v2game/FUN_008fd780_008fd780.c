// FUN_008fd780 @ 008fd780 body=[[008fd780, 008fd81e] [008fd835, 008fd865]]


void FUN_008fd780(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
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
  if (param_2 == 0x344) {
    ExceptionList = &local_14;
    puVar4 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_40);
    *(undefined4 *)(in_ECX + 0x20) = *puVar4;
    *(undefined4 *)(in_ECX + 0x24) = puVar4[1];
  }
  else if (param_2 == 0x4c6) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    local_c = 0;
    uVar3 = FUN_00973bd0(local_34);
    *(undefined4 *)(in_ECX + 0x28) = uVar3;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

