// FUN_0047e360 @ 0047e360 body=[[0047e360, 0047e3d5]]


void FUN_0047e360(uint param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  byte *pbVar5;
  
  if (0 < DAT_012587f4) {
    piVar1 = (int *)(in_ECX + 0x48);
    pbVar5 = (byte *)(in_ECX + 8);
    iVar4 = DAT_012587f4;
    do {
      if (*pbVar5 == 0) {
        uVar3 = ((uint *)*piVar1)[1];
        if (((int)param_2 <= (int)uVar3) &&
           (((int)param_2 < (int)uVar3 || (param_1 < *(uint *)*piVar1)))) {
          *pbVar5 = (byte)(*(int *)(in_ECX + 0x4c) - *piVar1 >> 3);
          FUN_00423920();
        }
      }
      else {
        puVar2 = (uint *)(*piVar1 + (uint)*pbVar5 * 8);
        if (((int)param_2 <= (int)puVar2[1]) &&
           (((int)param_2 < (int)puVar2[1] || (param_1 < *puVar2)))) {
          *puVar2 = param_1;
          puVar2[1] = param_2;
        }
      }
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

