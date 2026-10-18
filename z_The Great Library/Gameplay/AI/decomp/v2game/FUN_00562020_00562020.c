// FUN_00562020 @ 00562020 body=[[00562020, 00562101] [00562105, 00562118]]


void FUN_00562020(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
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
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
  local_c = 0;
  iVar4 = FUN_00973bd0(local_34);
  if (iVar4 == 0) {
    FUN_009a0f40();
  }
  else {
    FUN_0098fdd0(param_1 + 0x228,&local_48);
    bVar2 = *(byte *)(*(int *)(iVar4 + 8) + 8 + in_ECX);
    local_40 = local_48;
    local_3c = local_44;
    if (bVar2 == 0) {
      *(char *)(*(int *)(iVar4 + 8) + 8 + in_ECX) =
           (char)(*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) >> 3);
      FUN_00423920();
    }
    else {
      iVar4 = *(int *)(in_ECX + 0x48);
      *(undefined4 *)(iVar4 + (uint)bVar2 * 8) = local_48;
      *(undefined4 *)(iVar4 + 4 + (uint)bVar2 * 8) = local_44;
    }
  }
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_14;
  return;
}

