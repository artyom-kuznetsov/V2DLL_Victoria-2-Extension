// FUN_0093c630 @ 0093c630 body=[[0093c630, 0093c6ef]]


uint FUN_0093c630(void)

{
  int iVar1;
  int *piVar2;
  uint in_EAX;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  iVar4 = *(int *)(in_EAX + 0x40) - *(int *)(in_EAX + 0x3c) >> 3;
  local_8 = 0;
  if (0 < iVar4) {
    iVar1 = *(int *)(in_EAX + 0xe0);
    puVar6 = (undefined4 *)(*(int *)(in_EAX + 0x3c) + 4);
    do {
      local_c = *puVar6;
      FUN_0093d080(&local_c);
      if ((local_14 != iVar1) &&
         (iVar5 = 0, 0 < (int)(*(int *)(local_14 + 0x14) - *(int *)(local_14 + 0x10) & 0xffffffc0U))
         ) {
        piVar3 = (int *)(*(int *)(local_14 + 0x10) + 0xc);
        do {
          piVar2 = *(int **)(*piVar3 + 0x120);
          while( true ) {
            if (piVar2 == (int *)0x0) {
              return 1;
            }
            if (*piVar2 == 0x8da) break;
            piVar2 = (int *)piVar2[2];
          }
          iVar5 = iVar5 + 1;
          piVar3 = piVar3 + 0x10;
        } while (iVar5 < *(int *)(local_14 + 0x14) - *(int *)(local_14 + 0x10) >> 6);
      }
      in_EAX = local_8 + 1;
      puVar6 = puVar6 + 2;
      local_8 = in_EAX;
    } while ((int)in_EAX < iVar4);
  }
  return in_EAX & 0xffffff00;
}

