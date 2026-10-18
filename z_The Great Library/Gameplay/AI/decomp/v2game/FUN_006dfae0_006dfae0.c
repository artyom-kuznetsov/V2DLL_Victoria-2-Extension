// FUN_006dfae0 @ 006dfae0 body=[[006dfae0, 006dfbc3]]


void FUN_006dfae0(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar6 = "sortby_radical_button";
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_006dfb20:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_006dfb25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_006dfb20;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_006dfb25:
  if (iVar4 == 0) {
    piVar5 = (int *)0x1;
  }
  else {
    pbVar3 = (byte *)(**(code **)(*param_1 + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar6 = "sortby_size_button";
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_006dfb66:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_006dfb6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_006dfb66;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006dfb6b:
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x44))();
      cVar2 = FUN_0040b360();
      piVar5 = (int *)0x2;
      if (cVar2 == '\0') {
        piVar5 = param_1;
      }
    }
  }
  if (piVar5 == *(int **)(in_ECX + 0x168)) {
    *(bool *)(in_ECX + 0x16c) = *(char *)(in_ECX + 0x16c) == '\0';
    FUN_006dd080(in_ECX);
    return;
  }
  *(int **)(in_ECX + 0x168) = piVar5;
  FUN_006dd080(in_ECX);
  return;
}

