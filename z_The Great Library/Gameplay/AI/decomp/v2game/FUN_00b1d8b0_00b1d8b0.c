// FUN_00b1d8b0 @ 00b1d8b0 body=[[00b1d8b0, 00b1d8c9] [00b1d8d0, 00b1da00]]


void FUN_00b1d8b0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  int local_8;
  
  pbVar9 = (byte *)(param_1 + 4);
  local_8 = 4;
  do {
    bVar8 = pbVar9[-4];
    bVar7 = *pbVar9;
    bVar6 = pbVar9[4];
    bVar5 = pbVar9[8];
    bVar1 = FUN_00b1c5a0(bVar5,9);
    bVar2 = FUN_00b1c5a0(bVar6,0xd);
    bVar3 = FUN_00b1c5a0(bVar7,0xb);
    bVar4 = FUN_00b1c5a0(bVar8,0xe);
    pbVar9[-4] = bVar1 ^ bVar2 ^ bVar3 ^ bVar4;
    bVar1 = FUN_00b1c5a0(bVar5,0xd);
    bVar2 = FUN_00b1c5a0(bVar6,0xb);
    bVar3 = FUN_00b1c5a0(bVar7,0xe);
    bVar4 = FUN_00b1c5a0(bVar8,9);
    *pbVar9 = bVar1 ^ bVar2 ^ bVar3 ^ bVar4;
    bVar1 = FUN_00b1c5a0(bVar5,0xb);
    bVar2 = FUN_00b1c5a0(bVar6,0xe);
    bVar3 = FUN_00b1c5a0(bVar7,9);
    bVar4 = FUN_00b1c5a0(bVar8,0xd);
    pbVar9[4] = bVar1 ^ bVar2 ^ bVar3 ^ bVar4;
    bVar5 = FUN_00b1c5a0(bVar5,0xe);
    bVar6 = FUN_00b1c5a0(bVar6,9);
    bVar7 = FUN_00b1c5a0(bVar7,0xd);
    bVar8 = FUN_00b1c5a0(bVar8,0xb);
    pbVar9[8] = bVar5 ^ bVar6 ^ bVar7 ^ bVar8;
    pbVar9 = pbVar9 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

