// FUN_007df840 @ 007df840 body=[[007df840, 007df9dd]]


void FUN_007df840(undefined4 param_1)

{
  uint *puVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  int unaff_EDI;
  int local_c;
  int local_8;
  
  puVar1 = (uint *)(in_ECX + in_EAX * 0x18);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  iVar3 = FUN_005c2ad0(param_1);
  uVar4 = FUN_009bcbf0(iVar3 + 0x78,1);
  *puVar1 = uVar4;
  iVar3 = FUN_005c2ad0(param_1);
  puVar1[1] = *(uint *)(iVar3 + 0x94);
  uVar4 = *puVar1;
  if (uVar4 < 10000) {
    local_c = *(int *)(uVar4 * 0x2c + 0x17c + unaff_EDI);
    uVar7 = *(uint *)(uVar4 * 0x2c + 0x17c + unaff_EDI);
  }
  else {
    local_c = 0;
    uVar7 = 0;
  }
  uVar5 = 1;
  uVar6 = uVar5;
  if (1 < uVar7) {
    do {
      uVar6 = 0;
      if (uVar5 == 0) break;
      uVar5 = uVar5 * 2;
      uVar6 = uVar5;
    } while (uVar5 < uVar7);
  }
  fVar2 = (float)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  puVar1[2] = (uint)((float)local_c / fVar2);
  if (uVar4 < 10000) {
    local_8 = *(int *)(uVar4 * 0x2c + 0x180 + unaff_EDI);
    uVar7 = *(uint *)(uVar4 * 0x2c + 0x180 + unaff_EDI);
  }
  else {
    local_8 = 0;
    uVar7 = 0;
  }
  uVar5 = 1;
  uVar6 = uVar5;
  if (1 < uVar7) {
    do {
      uVar6 = 0;
      if (uVar5 == 0) break;
      uVar5 = uVar5 * 2;
      uVar6 = uVar5;
    } while (uVar5 < uVar7);
  }
  fVar2 = (float)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  puVar1[3] = (uint)((float)local_8 / fVar2);
  if (uVar4 < 10000) {
    iVar3 = *(int *)(uVar4 * 0x2c + 0x17c + unaff_EDI);
  }
  else {
    iVar3 = 0;
  }
  puVar1[4] = iVar3 / (int)puVar1[1];
  if (9999 < uVar4) {
    puVar1[5] = 0;
    return;
  }
  puVar1[5] = *(uint *)(uVar4 * 0x2c + 0x180 + unaff_EDI);
  return;
}

