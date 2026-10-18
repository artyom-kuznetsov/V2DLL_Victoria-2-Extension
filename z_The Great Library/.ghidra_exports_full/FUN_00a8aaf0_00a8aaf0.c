// FUN_00a8aaf0 @ 00a8aaf0 body=[[00a8aaf0, 00a8ac6f]]


uint FUN_00a8aaf0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_ECX;
  uint uVar6;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  u_short local_24;
  u_short local_22;
  u_long local_20;
  u_long local_1c;
  u_long local_18;
  u_long local_14;
  u_long local_10;
  u_long local_c;
  u_long local_8;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar2 = *(int *)(param_1 + 0x24) * 0xe8 + uVar6;
  if (uVar6 < uVar2) {
    do {
      if (*(int *)(uVar6 + 0x18) == 0) break;
      uVar6 = uVar6 + 0xe8;
    } while (uVar6 < uVar2);
    if (uVar6 < uVar2) {
      *(undefined4 *)(uVar6 + 0x18) = 1;
      *(undefined4 *)(uVar6 + 0xc) = *in_ECX;
      *(undefined4 *)(uVar6 + 0x10) = in_ECX[1];
      iVar3 = (*(code *)PTR__malloc_00f071f8)(0x40);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
      *(int *)(uVar6 + 0x1c) = iVar3;
      *(undefined4 *)(uVar6 + 0x20) = 2;
      uVar4 = (*(code *)PTR_FUN_00f07200)();
      *(undefined4 *)(uVar6 + 8) = uVar4;
      if (*(uint *)(param_1 + 0x10) == 0) {
        *(undefined4 *)(uVar6 + 0x98) = 0x1000;
      }
      else {
        *(uint *)(uVar6 + 0x98) = (*(uint *)(param_1 + 0x10) >> 0x10) << 0xc;
      }
      if ((*(uint *)(uVar6 + 0x98) < 0x1000) || (0x1000 < *(uint *)(uVar6 + 0x98))) {
        *(undefined4 *)(uVar6 + 0x98) = 0x1000;
      }
      uVar2 = *(uint *)(uVar6 + 0x1c);
      if (uVar2 < uVar2 + 0x40) {
        piVar5 = (int *)(uVar2 + 0x1c);
        do {
          piVar5[-7] = 0;
          piVar5[-6] = 0;
          piVar5[-5] = 0;
          piVar5[-4] = 0;
          piVar1 = piVar5 + -3;
          piVar5[-2] = (int)piVar1;
          *piVar1 = (int)piVar1;
          piVar1 = piVar5 + -1;
          *piVar5 = (int)piVar1;
          *piVar1 = (int)piVar1;
          piVar1 = piVar5 + 1;
          piVar5 = piVar5 + 8;
        } while (piVar1 < (int *)(*(int *)(uVar6 + 0x1c) + 0x40));
      }
      local_30 = 0xff02;
      local_2e = 1;
      local_2c = 0x2c;
      local_24 = htons(*(u_short *)(uVar6 + 6));
      local_22 = htons(*(u_short *)(uVar6 + 0x94));
      local_20 = htonl(*(u_long *)(uVar6 + 0x98));
      local_1c = htonl(2);
      local_18 = htonl(*(u_long *)(param_1 + 0xc));
      local_14 = htonl(*(u_long *)(param_1 + 0x10));
      local_10 = htonl(*(u_long *)(uVar6 + 0x78));
      local_c = htonl(*(u_long *)(uVar6 + 0x70));
      local_8 = htonl(*(u_long *)(uVar6 + 0x74));
      FUN_00a8a550(uVar6,&local_30,0,0,0);
      return uVar6;
    }
  }
  return 0;
}

