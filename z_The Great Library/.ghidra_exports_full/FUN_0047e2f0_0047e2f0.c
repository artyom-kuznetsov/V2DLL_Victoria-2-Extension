// FUN_0047e2f0 @ 0047e2f0 body=[[0047e2f0, 0047e350]]


void FUN_0047e2f0(uint param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  byte *pbVar6;
  
  if (0 < DAT_012587f4) {
    pbVar6 = (byte *)(in_ECX + 8);
    iVar5 = DAT_012587f4;
    do {
      bVar2 = *pbVar6;
      if (bVar2 == 0) {
        *pbVar6 = (byte)(*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) >> 3);
        FUN_00423920();
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x48);
        iVar4 = *(int *)(iVar3 + 4 + (uint)bVar2 * 8);
        puVar1 = (uint *)(iVar3 + (uint)bVar2 * 8);
        if ((iVar4 <= (int)param_2) && ((iVar4 < (int)param_2 || (*puVar1 < param_1)))) {
          *puVar1 = param_1;
          puVar1[1] = param_2;
        }
      }
      pbVar6 = pbVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

