// FUN_00974af0 @ 00974af0 body=[[00974af0, 00974b6c] [00974b70, 00974bc3] [00974bc7, 00974c4f]]


void FUN_00974af0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  bool bVar5;
  int *piVar6;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dfc4;
  local_10 = ExceptionList;
  bVar5 = false;
  local_18 = 0;
  piVar6 = (int *)0x0;
  if (param_2 == 0x679) {
    *(bool *)(in_ECX + 0x59) = *(int *)(param_1 + 0x228) == 0x29f;
    return;
  }
  if (param_2 != 0x67a) {
    ExceptionList = &local_10;
    local_14 = in_ECX;
    iVar3 = FUN_00aae9af(0x1d8);
    iVar2 = DAT_01258a44;
    local_8 = 0;
    if (iVar3 != 0) {
      DAT_01258a44 = DAT_01258a44 + 1;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      pcVar4 = (char *)(param_1 + 0x24);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350((char *)(param_1 + 0x24),(int)pcVar4 - (param_1 + 0x25));
      local_8 = CONCAT31(local_8._1_3_,1);
      bVar5 = true;
      local_18 = 1;
      piVar6 = (int *)FUN_009740b0(iVar3,local_14,local_34,iVar2);
    }
    local_8 = 0xffffffff;
    if (bVar5) {
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
    }
    (**(code **)(*piVar6 + 0xc))(param_1);
    FUN_0068f390();
    ExceptionList = local_10;
    return;
  }
  *(bool *)(in_ECX + 0x58) = *(int *)(param_1 + 0x228) == 0x29f;
  return;
}

