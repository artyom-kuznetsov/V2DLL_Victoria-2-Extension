// FUN_00676500 @ 00676500 body=[[00676500, 0067655c]]


void FUN_00676500(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  bool bVar5;
  
  pbVar2 = (byte *)(in_ECX + 0x68);
  if (0xf < *(uint *)(in_ECX + 0x7c)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pcVar4 = "RESIGN";
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00676533:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00676538;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00676533;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00676538:
  if (iVar3 == 0) {
    (**(code **)(**(int **)(in_ECX + 8) + 0x114))();
    *(undefined1 *)(in_ECX + 100) = 1;
    return;
  }
  (**(code **)(**(int **)(in_ECX + 8) + 0x110))();
  *(undefined1 *)(in_ECX + 100) = 1;
  return;
}

