// FUN_006fe410 @ 006fe410 body=[[006fe410, 006fe5ae]]


void FUN_006fe410(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 0x1d8);
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar6 = "sort_by_name";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_006fe460:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_006fe465;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_006fe460;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006fe465:
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar6 = "sort_by_state";
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_006fe4a5:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_006fe4aa;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_006fe4a5;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006fe4aa:
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x44))();
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x44))();
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            (**(code **)(*param_1 + 0x44))();
            cVar2 = FUN_0040b360();
            if (cVar2 == '\0') {
              piVar5 = param_1 + 5;
              iVar4 = 2;
              if (0xf < (uint)param_1[10]) {
                piVar5 = (int *)*piVar5;
              }
              local_8 = FUN_00aaf0c5(piVar5);
            }
            else {
              iVar4 = 5;
            }
          }
          else {
            iVar4 = 4;
          }
        }
        else {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 1;
      }
    }
  }
  piVar5 = (int *)(in_ECX + 0x1d0);
  if (*(int *)(in_ECX + 0x1c8) == 0) {
    pcVar6 = (char *)(in_ECX + 0x1d4);
  }
  else {
    piVar5 = (int *)(in_ECX + 0x1cc);
    pcVar6 = (char *)(in_ECX + 0x1d5);
  }
  if ((iVar4 == *piVar5) && (local_8 == *(int *)(in_ECX + 0x1d8))) {
    *pcVar6 = *pcVar6 == '\0';
    FUN_006fe5b0();
    return;
  }
  *(int *)(in_ECX + 0x1d8) = local_8;
  *piVar5 = iVar4;
  FUN_006fe5b0();
  return;
}

