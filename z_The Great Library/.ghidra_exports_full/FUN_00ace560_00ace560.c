// FUN_00ace560 @ 00ace560 body=[[00ace560, 00ace658]]


void FUN_00ace560(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int local_10;
  uint local_c;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  uVar2 = *(uint *)(in_ECX + 0x140);
  local_c = 0;
  if (uVar2 != 0) {
    do {
      piVar3 = *(int **)(*(int *)(in_ECX + 0x13c) + local_c * 4);
      if (piVar3[1] == 0) {
        FID_conflict__memcpy((void *)(piVar3[4] + 0xb0),(void *)(piVar3[6] * 0x40 + iVar1),0x40);
      }
      else {
        FID_conflict__memcpy((void *)(piVar3[4] + 0xb0),(void *)(in_ECX + 0x70),0x40);
        local_10 = *(int *)(*(int *)(piVar3[4] + 0x1ac) + 0x84);
        iVar4 = *(int *)(in_ECX + 0x10);
        if (local_10 != 0) {
          iVar6 = 0;
          do {
            piVar5 = *(int **)(*piVar3 + 0x80 + iVar6);
            if (piVar5 != (int *)0x0) {
              FID_conflict__memcpy((void *)(*piVar3 + iVar6),(void *)(*piVar5 * 0x40 + iVar4),0x40);
              FID_conflict__memcpy
                        ((void *)(*piVar3 + 0x40 + iVar6),(void *)(*piVar5 * 0x40 + iVar1),0x40);
            }
            iVar6 = iVar6 + 0x84;
            local_10 = local_10 + -1;
          } while (local_10 != 0);
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return;
}

