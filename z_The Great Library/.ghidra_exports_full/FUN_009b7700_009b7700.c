// FUN_009b7700 @ 009b7700 body=[[009b7700, 009b7718] [009b7720, 009b790a]]


void FUN_009b7700(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  int local_c;
  
  iVar4 = 0x18d;
  puVar2 = (uint *)(unaff_EDI + 8);
  local_c = 0x68;
  do {
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x18c) % 0x270) * 4) ^ puVar2[-2]) & 0x7fffffff ^
            puVar2[-2];
    uVar3 = *(uint *)(unaff_EDI + (iVar4 % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    puVar2[-2] = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      puVar2[-2] = uVar3 ^ 0x9908b0df;
    }
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x18b) % 0x270) * 4) ^ puVar2[-1]) & 0x7fffffff ^
            puVar2[-1];
    uVar3 = *(uint *)(unaff_EDI + ((iVar4 + 1) % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    puVar2[-1] = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      puVar2[-1] = uVar3 ^ 0x9908b0df;
    }
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x18a) % 0x270) * 4) ^ *puVar2) & 0x7fffffff ^ *puVar2
    ;
    uVar3 = *(uint *)(unaff_EDI + ((iVar4 + 2) % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    *puVar2 = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      *puVar2 = uVar3 ^ 0x9908b0df;
    }
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x189) % 0x270) * 4) ^ puVar2[1]) & 0x7fffffff ^
            puVar2[1];
    uVar3 = *(uint *)(unaff_EDI + ((iVar4 + 3) % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    puVar2[1] = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      puVar2[1] = uVar3 ^ 0x9908b0df;
    }
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x188) % 0x270) * 4) ^ puVar2[2]) & 0x7fffffff ^
            puVar2[2];
    uVar3 = *(uint *)(unaff_EDI + ((iVar4 + 4) % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    puVar2[2] = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      puVar2[2] = uVar3 ^ 0x9908b0df;
    }
    uVar1 = (*(uint *)(unaff_EDI + ((iVar4 + -0x187) % 0x270) * 4) ^ puVar2[3]) & 0x7fffffff ^
            puVar2[3];
    uVar3 = *(uint *)(unaff_EDI + ((iVar4 + 5) % 0x270) * 4) ^ (int)uVar1 >> 1;
    uVar1 = uVar1 & 0x80000001;
    puVar2[3] = uVar3;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      puVar2[3] = uVar3 ^ 0x9908b0df;
    }
    iVar4 = iVar4 + 6;
    puVar2 = puVar2 + 6;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}

