// FUN_009730d0 @ 009730d0 body=[[009730d0, 00973185] [00973189, 00973241]]


void FUN_009730d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5dff4;
  local_10 = ExceptionList;
  bVar7 = false;
  local_18 = (int *)0x0;
  ExceptionList = &local_10;
  iVar3 = FUN_00aae9af(0x1dc);
  iVar2 = DAT_01258a38;
  local_8 = 0;
  local_1c = (int *)iVar3;
  if (iVar3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    DAT_01258a38 = DAT_01258a38 + 1;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    pcVar4 = (char *)(param_1 + 0x24);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x24),(int)pcVar4 - (param_1 + 0x25));
    local_8 = CONCAT31(local_8._1_3_,1);
    bVar7 = true;
    local_18 = (int *)0x1;
    piVar5 = (int *)FUN_00972260(iVar3,local_14,local_38,iVar2);
  }
  local_8 = 0xffffffff;
  local_18 = piVar5;
  if (bVar7) {
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  local_1c = piVar5;
  FUN_0099ec90(piVar5);
  FUN_0068f390();
  (**(code **)(*piVar5 + 0xc))(param_1);
  if ((char)piVar5[0x13] != '\0') {
    FUN_0068f390();
  }
  iVar2 = *(int *)(local_14 + 0xc);
  puVar6 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = local_18;
    puVar6[1] = iVar2;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
  }
  iVar3 = *(int *)(local_14 + 0x10);
  *(undefined4 **)(local_14 + 0xc) = puVar6;
  *(int *)(local_14 + 0x10) = iVar3 + 1;
  if (iVar3 != 0) {
    *(undefined4 **)(iVar2 + 8) = puVar6;
    ExceptionList = local_10;
    return;
  }
  *(undefined4 **)(local_14 + 8) = puVar6;
  ExceptionList = local_10;
  return;
}

