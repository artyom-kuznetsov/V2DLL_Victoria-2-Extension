// FUN_00ae7f60 @ 00ae7f60 body=[[00ae7f60, 00ae8045]]


void FUN_00ae7f60(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  local_8 = in_ECX[1];
  if (local_8 != 0) {
    local_c = 0;
    do {
      uVar3 = 0;
      iVar4 = *in_ECX + local_c;
      uVar5 = *(uint *)(iVar4 + 8);
      if (uVar5 != 0) {
        do {
          puVar1 = *(undefined4 **)(*(int *)(iVar4 + 4) + uVar3 * 4);
          if (puVar1 != (undefined4 *)0x0) {
            (*(code *)PTR__free_00f01b10)(*puVar1);
            (*(code *)PTR__free_00f01b10)(puVar1[1]);
            (*(code *)PTR__free_00f01b10)(puVar1[7]);
            (*(code *)PTR__free_00f01b10)(puVar1[8]);
            (*(code *)PTR__free_00f01b10)(puVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      if (*(int *)(iVar4 + 4) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)(iVar4 + 4));
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      local_c = local_c + 0x14;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  uVar5 = 0;
  if (in_ECX[1] != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*in_ECX + 4 + iVar4);
      if (iVar2 != 0) {
        (*(code *)PTR__free_00f01b10)(iVar2);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar5 < (uint)in_ECX[1]);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
    *in_ECX = 0;
  }
  return;
}

