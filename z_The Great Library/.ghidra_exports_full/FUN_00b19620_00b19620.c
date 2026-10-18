// FUN_00b19620 @ 00b19620 body=[[00b19620, 00b19758] [00b19760, 00b197a9]]


void FUN_00b19620(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  undefined4 local_c [3];
  
  if (*(char *)(in_ECX + 0x8c) == '\0') {
    uVar3 = 0;
    if (3 < (int)param_2) {
      iVar2 = (param_2 - 4 >> 2) + 1;
      uVar3 = iVar2 * 4;
      puVar1 = param_1;
      do {
        local_c[*(int *)(in_ECX + 0x80)] = *puVar1;
        param_1 = puVar1 + 0xc;
        iVar2 = iVar2 + -1;
        local_c[*(int *)(in_ECX + 0x84)] = puVar1[1];
        local_c[*(int *)(in_ECX + 0x88)] = puVar1[2];
        *puVar1 = local_c[0];
        puVar1[1] = local_c[1];
        puVar1[2] = local_c[2];
        local_c[*(int *)(in_ECX + 0x80)] = puVar1[3];
        local_c[*(int *)(in_ECX + 0x84)] = puVar1[4];
        local_c[*(int *)(in_ECX + 0x88)] = puVar1[5];
        puVar1[3] = local_c[0];
        puVar1[4] = local_c[1];
        puVar1[5] = local_c[2];
        local_c[*(int *)(in_ECX + 0x80)] = puVar1[6];
        local_c[*(int *)(in_ECX + 0x84)] = puVar1[7];
        local_c[*(int *)(in_ECX + 0x88)] = puVar1[8];
        puVar1[6] = local_c[0];
        puVar1[7] = local_c[1];
        puVar1[8] = local_c[2];
        local_c[*(int *)(in_ECX + 0x80)] = puVar1[9];
        local_c[*(int *)(in_ECX + 0x84)] = puVar1[10];
        local_c[*(int *)(in_ECX + 0x88)] = puVar1[0xb];
        puVar1[9] = local_c[0];
        puVar1[10] = local_c[1];
        puVar1[0xb] = local_c[2];
        puVar1 = param_1;
      } while (iVar2 != 0);
    }
    if (uVar3 < param_2) {
      iVar2 = param_2 - uVar3;
      puVar1 = param_1 + 2;
      do {
        local_c[*(int *)(in_ECX + 0x80)] = puVar1[-2];
        iVar2 = iVar2 + -1;
        local_c[*(int *)(in_ECX + 0x84)] = puVar1[-1];
        local_c[*(int *)(in_ECX + 0x88)] = *puVar1;
        puVar1[-2] = local_c[0];
        puVar1[-1] = local_c[1];
        *puVar1 = local_c[2];
        puVar1 = puVar1 + 3;
      } while (iVar2 != 0);
    }
  }
  return;
}

